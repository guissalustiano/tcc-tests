#!/usr/bin/env python3
"""Behavioral smoke tests for rvsc0 on Spike (bare-metal HTIF, no pk).

Each tests/behav/*.c defines  int run_test(void)  returning 0 for pass or a
non-zero failure code.  entry.S provides _start, sets up sp/gp, calls
run_test, converts the return value to an HTIF exit token, and writes it to
tohost.  Spike exits 0 on pass, non-zero on fail.

Note: these tests use volatile locals on the stack and SMALL_OPERAND
constants only.  Global variables are intentionally avoided because
rvsc0's pool-based constant synthesis is only correct at link-time for
programs where pool entries resolve to addresses < 2048 from x0.
"""

import argparse
import subprocess
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent.parent))
from common import find_tool, SpikeTimeout

SCRIPT_DIR  = Path(__file__).parent
COMPILER    = "rvsc0-unknown-elf-gcc"
ISA         = "rv32i"
ENTRY_S     = SCRIPT_DIR / "entry.S"
LD_SCRIPT   = SCRIPT_DIR / "link32.ld"
TEST_GLOB   = "tests/behav/*.c"
OPT_LEVELS  = ["-O0", "-O1", "-O2", "-O3", "-Os"]


def run_spike_htif(elf: Path, timeout: int = 30) -> int:
    """Run spike bare-metal (no pk) at default DRAM (0x80000000)."""
    cmd = ["spike", f"--isa={ISA}", str(elf)]
    try:
        r = subprocess.run(cmd, capture_output=True, text=True, timeout=timeout)
        return r.returncode
    except subprocess.TimeoutExpired:
        raise SpikeTimeout(elf.name)


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Behavioral smoke tests: rvsc0 on Spike (bare-metal HTIF)"
    )
    parser.add_argument("sources", nargs="*", type=Path,
                        help=f"C source files (default: {TEST_GLOB})")
    parser.add_argument("--opt", dest="opts", action="append", default=[],
                        metavar="LEVEL", help="Optimization level (repeatable; default: all)")
    args = parser.parse_args()

    sources = args.sources or sorted(SCRIPT_DIR.glob(TEST_GLOB))
    if not sources:
        sys.exit(f"error: no test sources found ({SCRIPT_DIR / TEST_GLOB})")

    opts = args.opts or OPT_LEVELS

    gcc = find_tool(COMPILER)
    find_tool("spike")

    passed = failed = 0
    with tempfile.TemporaryDirectory() as _tmp:
        tmp = Path(_tmp)
        for src in map(Path, sources):
            for opt in opts:
                print(f"  {src.name} {opt} ...", end=" ", flush=True)
                elf = tmp / f"{src.stem}{opt}.elf"
                r = subprocess.run(
                    [gcc, opt, "-ffreestanding", "-fomit-frame-pointer",
                     "-nostdlib", "-T", str(LD_SCRIPT),
                     str(ENTRY_S), str(src), "-o", str(elf)],
                    capture_output=True, text=True,
                )
                if r.returncode != 0:
                    print(f"COMPILE ERROR\n{r.stderr.strip()}")
                    failed += 1
                    continue
                try:
                    rc = run_spike_htif(elf)
                except SpikeTimeout as e:
                    print(f"TIMEOUT  ({e})")
                    failed += 1
                    continue
                if rc == 0:
                    print("PASS")
                    passed += 1
                else:
                    print(f"FAIL  (exit {rc})")
                    failed += 1

    total = passed + failed
    print(f"\n{passed}/{total} passed")
    if failed:
        sys.exit(1)


if __name__ == "__main__":
    main()
