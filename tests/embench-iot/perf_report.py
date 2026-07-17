#!/usr/bin/env python3
"""Dynamic instruction counts for the Embench-IoT corpus on Spike.

Each benchmark is linked into a bare-metal ELF and executed under the RISC-V
proxy kernel on Spike.  Retired instructions are totalled from Spike's PC
histogram (`spike -g`), which sums per-address execution counts at exit and so
runs at near-native simulator speed -- unlike per-instruction commit logging,
which is ~1000x slower and pushes synthesis-heavy sc1 runs past any time budget.

Three toolchains that can link an rv32i/ilp32 program participate:

  gcc17  GCC 17 rv32i, no scx restrictions -- verifies the GCC-version baseline
  rvsc2  GCC 17 rv32i, no synthesis        -- the performance baseline
  rvsc1  GCC 17 rv32i, synthesized         -- shifts/branches/etc. expanded

The stock riscv32-none-elf-gcc is excluded: its fixed rv32imafdc/ilp32d multilib
cannot link an rv32i binary.  gcc17 and rvsc2 should produce nearly identical
instruction counts (same GCC version, same ISA; only -mno-fence differs which
never fires in these benchmarks), confirming that rvsc2 is a faithful baseline.

Because rvsc1 replaces each shift with a 100-200 instruction loop, shift-heavy
benchmarks retire orders of magnitude more instructions and exceed the Spike
time budget; those are reported as TIMEOUT (an expected, informative result).
"""

import argparse
import os
import subprocess
import sys
import tempfile
from pathlib import Path

SCRIPT_DIR = Path(__file__).parent
SRC_DIR = SCRIPT_DIR / "src"
SUPPORT = SCRIPT_DIR / "support"
BOARD = SCRIPT_DIR / "config" / "rvsc"
LD_SCRIPT = Path("/home/salust/p/scgcc/tests/sc1/pk32.ld")
INSTALL = Path("/home/salust/p/scgcc/tests")
ISA = "rv32imac_zicsr_zifencei"

TOOLCHAINS = [
    ("gcc17", str(INSTALL / "rv32i/build/install/bin/riscv32-unknown-elf-gcc")),
    ("sc2",   str(INSTALL / "sc2/build/install/bin/rvsc2-unknown-elf-gcc")),
    ("sc1",   str(INSTALL / "sc1/build/install/bin/rvsc1-unknown-elf-gcc")),
]

CFLAGS = [
    "-O2", "-ffreestanding", "-std=gnu11",
    f"-I{SUPPORT}", f"-I{BOARD}",
    "-DWARMUP_HEAT=0", "-DGLOBAL_SCALE_FACTOR=1",
]

SUPPORT_SRCS = [SUPPORT / "main.c", SUPPORT / "beebsc.c", BOARD / "boardsupport.c"]


def link_elf(cc: str, srcs: list[Path], tmp: Path) -> Path | None:
    objs = []
    for src in srcs:
        obj = tmp / (src.stem + ".o")
        r = subprocess.run([cc, "-c", *CFLAGS, str(src), "-o", str(obj)],
                           capture_output=True, text=True)
        if r.returncode != 0:
            return None
        objs.append(obj)
    elf = tmp / "b.elf"
    r = subprocess.run([cc, "-O2", *[str(o) for o in objs],
                        "-T", str(LD_SCRIPT), "-lsim", "-lm", "-o", str(elf)],
                       capture_output=True, text=True)
    return elf if r.returncode == 0 else None


def count_retired(pk: str, elf: Path, timeout: int) -> tuple[int, int] | None:
    """Count retired instructions via Spike's PC histogram (one pass).

    `spike -g` tracks a per-PC execution histogram and dumps it on exit
    (`PC<space>count` lines on stderr).  Summing the counts yields the total
    retired instruction count.  Unlike `--log-commits`, this emits no
    per-instruction I/O, so it runs at near-native simulator speed (~1000x
    faster) and stays inside the time budget even for synthesis-heavy sc1.

    Returns (retired, exit_code), or None on timeout.
    """
    try:
        r = subprocess.run(
            ["spike", "-g", f"--isa={ISA}", pk, str(elf)],
            stdout=subprocess.DEVNULL, stderr=subprocess.PIPE,
            timeout=timeout,
        )
    except subprocess.TimeoutExpired:
        return None
    total = 0
    for line in r.stderr.split(b"\n"):
        parts = line.split()
        if len(parts) == 2 and parts[1].isdigit():
            try:
                int(parts[0], 16)
            except ValueError:
                continue
            total += int(parts[1])
    return (total, r.returncode)


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--timeout", type=int, default=300,
                    help="Per-run Spike time budget in seconds (default: 300)")
    ap.add_argument("--benchmarks", nargs="*", help="Subset of benchmark names")
    ap.add_argument("--csv", type=Path, help="Also write results as CSV")
    args = ap.parse_args()

    pk = os.environ.get("PK")
    if not pk:
        sys.exit("error: PK not set (run inside the nix dev shell)")

    benchmarks = sorted(d for d in SRC_DIR.iterdir() if d.is_dir())
    if args.benchmarks:
        benchmarks = [d for d in benchmarks if d.name in args.benchmarks]

    results: dict[str, dict[str, object]] = {}
    with tempfile.TemporaryDirectory() as _tmp:
        for bench in benchmarks:
            srcs = SUPPORT_SRCS + sorted(bench.glob("*.c"))
            results[bench.name] = {}
            print(f"  {bench.name:<16}", end="", flush=True)
            for name, cc in TOOLCHAINS:
                tmp = Path(tempfile.mkdtemp(dir=_tmp))
                elf = link_elf(cc, srcs, tmp)
                if elf is None:
                    results[bench.name][name] = "LINKFAIL"
                    print(f" {name}=LINKFAIL", end="", flush=True)
                    continue
                res = count_retired(pk, elf, args.timeout)
                if res is None:
                    val, tag = "TIMEOUT", ""
                else:
                    n, rc = res
                    val = n
                    tag = "" if rc == 0 else f"!rc={rc}"
                results[bench.name][name] = val
                print(f" {name}={val}{tag}", end="", flush=True)
            print()

    print("\n| Benchmark | gcc17 | rvsc2 (native) | rvsc1 (synth) | sc1/sc2 | sc2/gcc17 |\n"
          "|---|---|---|---|---|---|")
    ratios_sc1_sc2, ratios_sc2_gcc17 = [], []
    for bench in benchmarks:
        r = results[bench.name]
        g17, s2, s1 = r.get("gcc17"), r.get("sc2"), r.get("sc1")
        ov_sc1 = ov_sc2 = "—"
        if isinstance(s2, int) and isinstance(s1, int) and s2:
            v = s1 / s2; ratios_sc1_sc2.append(v); ov_sc1 = f"{v:.1f}×"
        if isinstance(g17, int) and isinstance(s2, int) and g17:
            v = s2 / g17; ratios_sc2_gcc17.append(v); ov_sc2 = f"{v:.2f}"
        print(f"| {bench.name} | {g17} | {s2} | {s1} | {ov_sc1} | {ov_sc2} |")
    if ratios_sc1_sc2:
        prod = 1.0
        for v in ratios_sc1_sc2:
            prod *= v
        print(f"\nGeomean sc1/sc2 overhead = {prod ** (1/len(ratios_sc1_sc2)):.2f}× "
              f"(over {len(ratios_sc1_sc2)} benchmarks that completed on both)")
    if ratios_sc2_gcc17:
        prod = 1.0
        for v in ratios_sc2_gcc17:
            prod *= v
        print(f"Geomean sc2/gcc17        = {prod ** (1/len(ratios_sc2_gcc17)):.3f} "
              f"(should be ~1.0; GCC-version baseline check)")

    if args.csv:
        lines = ["benchmark,gcc17,sc2,sc1"]
        for bench in benchmarks:
            r = results[bench.name]
            lines.append(f"{bench.name},{r.get('gcc17')},{r.get('sc2')},{r.get('sc1')}")
        args.csv.write_text("\n".join(lines) + "\n")
        print(f"\nWrote {args.csv}")


if __name__ == "__main__":
    main()
