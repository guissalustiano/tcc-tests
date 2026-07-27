#!/usr/bin/env python3
"""Code-size comparison of the Embench-IoT corpus across four RISC-V toolchains.

For each benchmark under src/, every benchmark-owned .c file is compiled to an
object with each toolchain and the size of its code section(s) is summed.  We
measure at the object level on purpose:

  * The reference toolchain (stock riscv32-none-elf-gcc) is built with a fixed
    rv32imafdc / ilp32d multilib and cannot *link* an rv32i/ilp32 program, but
    it compiles rv32i objects fine.  Object-level measurement lets it take part.
  * Library (newlib/libgcc) code is ABI-identical across the toolchains and
    would only dilute the synthesized-vs-native ratio.  The benchmark's own
    .text is exactly the quantity the expansion ratio is about.

Toolchains compared:
  ref    stock rv32i gcc   riscv32-none-elf-gcc -march=rv32i -mabi=ilp32
  gcc17  GCC 17 rv32i      riscv32-unknown-elf-gcc from our fork, no scx flags
  sc2    rvsc2 (native)    GCC 17, full rv32i minus fence; nothing synthesized
  sc1    rvsc1 (synth)     GCC 17, shifts/branches/xor/slt/byte+half mem synthesized

The sc2/gcc17 ratio isolates any code-size effect of the rvsc2 target itself
(should be ~1.0).  The ref/gcc17 ratio quantifies the GCC-version effect.
The sc1/sc2 ratio is the per-benchmark expansion caused by instruction synthesis.
"""

import argparse
import subprocess
import sys
import tempfile
from pathlib import Path

from elftools.elf.elffile import ELFFile
from elftools.elf.constants import SH_FLAGS

import provenance

SCRIPT_DIR = Path(__file__).parent
SRC_DIR = SCRIPT_DIR / "src"
INSTALL = Path("/home/salust/p/scgcc/tests")

TOOLCHAINS = [
    # name, compiler, target-specific flags
    ("ref",   "riscv32-none-elf-gcc",  ["-march=rv32i", "-mabi=ilp32"]),
    ("gcc17", str(INSTALL / "rv32i/build/install/bin/riscv32-unknown-elf-gcc"),
              ["-march=rv32i", "-mabi=ilp32"]),
    ("sc2",   str(INSTALL / "sc2/build/install/bin/rvsc2-unknown-elf-gcc"), []),
    ("sc1",   str(INSTALL / "sc1/build/install/bin/rvsc1-unknown-elf-gcc"), []),
]

COMMON_FLAGS = [
    "-c", "-O2", "-ffreestanding", "-std=gnu11",
    f"-I{SCRIPT_DIR / 'support'}", f"-I{SCRIPT_DIR / 'config' / 'rvsc'}",
    "-DWARMUP_HEAT=1", "-DGLOBAL_SCALE_FACTOR=1",
]

CODE_FLAGS = int(SH_FLAGS.SHF_ALLOC | SH_FLAGS.SHF_EXECINSTR)


def text_size(obj: Path) -> int:
    """Sum the size of all allocated, executable (code) sections in an object."""
    with obj.open("rb") as f:
        elf = ELFFile(f)
        total = 0
        for sec in elf.iter_sections():
            if sec["sh_type"] == "SHT_PROGBITS" and \
               (sec["sh_flags"] & CODE_FLAGS) == CODE_FLAGS:
                total += sec["sh_size"]
        return total


def compile_benchmark(cc: str, flags: list[str], srcs: list[Path],
                      tmp: Path, timeout: int) -> int | None:
    """Compile every source of one benchmark; return summed .text or None on error."""
    total = 0
    for src in srcs:
        obj = tmp / (src.stem + ".o")
        try:
            r = subprocess.run([cc, *COMMON_FLAGS, *flags, str(src), "-o", str(obj)],
                               capture_output=True, text=True, timeout=timeout)
        except subprocess.TimeoutExpired:
            return None
        if r.returncode != 0 or not obj.exists():
            return None
        total += text_size(obj)
    return total


def geomean(values: list[float]) -> float:
    if not values:
        return float("nan")
    prod = 1.0
    for v in values:
        prod *= v
    return prod ** (1.0 / len(values))


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--timeout", type=int, default=600,
                    help="Per-file compile timeout in seconds (default: 600)")
    ap.add_argument("--csv", type=Path, help="Also write results as CSV")
    args = ap.parse_args()

    benchmarks = sorted(d for d in SRC_DIR.iterdir() if d.is_dir())
    names = [tc[0] for tc in TOOLCHAINS]

    # results[bench][tc] = int bytes or None
    results: dict[str, dict[str, int | None]] = {}

    with tempfile.TemporaryDirectory() as _tmp:
        tmp = Path(_tmp)
        for bench in benchmarks:
            srcs = sorted(bench.glob("*.c"))
            results[bench.name] = {}
            print(f"  {bench.name:<16}", end="", flush=True)
            for name, cc, flags in TOOLCHAINS:
                sz = compile_benchmark(cc, flags, srcs, tmp, args.timeout)
                results[bench.name][name] = sz
                print(f" {name}={'FAIL' if sz is None else sz:>6}", end="", flush=True)
            print()

    # Table: size columns + key ratios
    print("\n| Benchmark | " + " | ".join(names) +
          " | sc1/sc2 | sc1/gcc17 | sc2/gcc17 | sc1/ref |\n|" +
          "---|" * (len(names) + 5))
    ratios_sc2, ratios_gcc17, ratios_sc2_gcc17, ratios_ref = [], [], [], []
    for bench in benchmarks:
        r = results[bench.name]
        cells = [str(r[n]) if r[n] is not None else "—" for n in names]
        rs2 = rg17 = rsg17 = rr = "—"
        if r["sc1"] and r["sc2"]:
            v = r["sc1"] / r["sc2"]; ratios_sc2.append(v); rs2 = f"{v:.2f}"
        if r["sc1"] and r["gcc17"]:
            v = r["sc1"] / r["gcc17"]; ratios_gcc17.append(v); rg17 = f"{v:.2f}"
        if r["sc2"] and r["gcc17"]:
            v = r["sc2"] / r["gcc17"]; ratios_sc2_gcc17.append(v); rsg17 = f"{v:.2f}"
        if r["sc1"] and r["ref"]:
            v = r["sc1"] / r["ref"]; ratios_ref.append(v); rr = f"{v:.2f}"
        print(f"| {bench.name} | " + " | ".join(cells) +
              f" | {rs2} | {rg17} | {rsg17} | {rr} |")
    print(f"\nGeomean sc1/sc2   = {geomean(ratios_sc2):.3f} "
          f"(over {len(ratios_sc2)} benchmarks)")
    print(f"Geomean sc1/gcc17 = {geomean(ratios_gcc17):.3f} "
          f"(over {len(ratios_gcc17)} benchmarks)")
    print(f"Geomean sc2/gcc17 = {geomean(ratios_sc2_gcc17):.3f} "
          f"(over {len(ratios_sc2_gcc17)} benchmarks)")
    print(f"Geomean sc1/ref   = {geomean(ratios_ref):.3f} "
          f"(over {len(ratios_ref)} benchmarks)")

    if args.csv:
        lines = [provenance.header("flags=-O2"), "benchmark," + ",".join(names)]
        for bench in benchmarks:
            r = results[bench.name]
            lines.append(bench.name + "," +
                         ",".join("" if r[n] is None else str(r[n]) for n in names))
        args.csv.write_text("\n".join(lines) + "\n")
        print(f"\nWrote {args.csv}")



if __name__ == "__main__":
    main()
