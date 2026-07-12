#!/usr/bin/env python3
"""Behavioral self-test for rvsc1 using the RISC-V proxy kernel (pk).

For each behav_*.c:
  1. Compile + link with rvsc1-unknown-elf-gcc (crt0 + libsim + libc included)
  2. Run under: spike --isa=rv32imac_zicsr_zifencei $PK test.elf
  PASS if spike exits with code 0 (tests call exit(0) on success).

pk provides the stack and handles exit() via ecall.
The sc1 user binary only emits sc1-subset instructions; ISA compliance is
verified separately by torture_isa.py / main.py.
"""

import argparse
import os
import subprocess
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent.parent))
from common import find_tool, run_spike, SpikeTimeout

SCRIPT_DIR   = Path(__file__).parent
SC1_COMPILER = "rvsc1-unknown-elf-gcc"
ISA          = "rv32imac_zicsr_zifencei"
LD_SCRIPT    = SCRIPT_DIR / "pk32.ld"
TEST_GLOB    = "tests/behav/*.c"
OPT_LEVELS   = ["-O0", "-O1", "-O2", "-O3", "-Os"]


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Behavioral self-tests: rvsc1 on Spike via pk (exit 0 = pass)"
    )
    parser.add_argument("sources", nargs="*", type=Path,
                        help=f"C source files (default: {TEST_GLOB})")
    parser.add_argument("--opt", dest="opts", action="append", default=[],
                        metavar="LEVEL", help="Optimization level (repeatable; default: all)")
    args = parser.parse_args()

    pk = os.environ.get("PK")
    if not pk:
        sys.exit("error: PK environment variable not set (run inside the nix dev shell)")

    sources = args.sources or sorted(SCRIPT_DIR.glob(TEST_GLOB))
    if not sources:
        sys.exit(f"error: no test sources found (looked for {SCRIPT_DIR / TEST_GLOB})")

    opts = args.opts or OPT_LEVELS

    sc1_gcc = find_tool(SC1_COMPILER)
    find_tool("spike")

    passed = failed = 0

    with tempfile.TemporaryDirectory() as _tmp:
        tmp = Path(_tmp)

        for src in map(Path, sources):
            for opt in opts:
                print(f"  {src.name} {opt} ...", end=" ", flush=True)

                sc1_elf = tmp / f"{src.stem}{opt}.elf"

                r = subprocess.run(
                    [sc1_gcc, opt, "-T", str(LD_SCRIPT),
                     str(src), "-lsim", "-o", str(sc1_elf)],
                    capture_output=True, text=True,
                )
                if r.returncode != 0:
                    print(f"COMPILE ERROR\n{r.stderr.strip()}")
                    failed += 1
                    continue

                try:
                    rc = run_spike(ISA, sc1_elf, pk=pk)
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
