#!/usr/bin/env python3
"""Behavioral self-test for rvsc1.

For each behav_*.c:
  1. Compile with rvsc1-unknown-elf-gcc  →  assemble  →  link with startup + syscalls  →  spike
  PASS if spike exits with code 0 (tests call exit(0) on success, abort()/exit(1) on failure).

startup.S sets the stack and calls main → _exit.
syscalls.c implements _exit via HTIF (exit code encoded in tohost).
Both are compiled/assembled with the reference toolchain so they run on full rv32i.
"""

import argparse
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent.parent))
from common import (
    find_tool, compile_to_asm, compile_c, assemble, assemble_file,
    link_elf, run_spike, SpikeTimeout,
)

SCRIPT_DIR = Path(__file__).parent

# ── config ──────────────────────────────────────────────────────────────────
SC1_COMPILER = "rvsc1-unknown-elf-gcc"
MARCH        = "rv32i"
ISA          = "rv32i"
BINUTILS     = "riscv32-none-elf"
STARTUP      = SCRIPT_DIR / "startup.S"
SYSCALLS     = SCRIPT_DIR / "syscalls.c"
LD_SCRIPT    = SCRIPT_DIR / "link32.ld"
LIBS         = []
TEST_GLOB    = "tests/behav/*.c"
# ────────────────────────────────────────────────────────────────────────────


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Behavioral self-tests: rvsc1 on Spike (exit 0 = pass)"
    )
    parser.add_argument(
        "sources", nargs="*", type=Path,
        help=f"C source files (default: {TEST_GLOB})",
    )
    args = parser.parse_args()

    sources = args.sources or sorted(SCRIPT_DIR.glob(TEST_GLOB))
    if not sources:
        sys.exit(f"error: no test sources found (looked for {SCRIPT_DIR / TEST_GLOB})")

    sc1_gcc   = find_tool(SC1_COMPILER)
    ref_gcc   = find_tool(f"{BINUTILS}-gcc")
    assembler = find_tool(f"{BINUTILS}-as")
    linker    = find_tool(f"{BINUTILS}-ld")
    find_tool("spike")

    passed = failed = 0

    with tempfile.TemporaryDirectory() as _tmp:
        tmp = Path(_tmp)

        # support objects built once with reference compiler, shared across all tests
        startup_obj  = tmp / "startup.o"
        syscalls_obj = tmp / "syscalls.o"
        assemble_file(assembler, MARCH, STARTUP, startup_obj)
        compile_c(ref_gcc, SYSCALLS, [f"-march={MARCH}", "-mabi=ilp32", "-ffreestanding"], syscalls_obj)
        support = [startup_obj, syscalls_obj]

        for src in map(Path, sources):
            print(f"  {src.name} ...", end=" ", flush=True)

            sc1_obj = tmp / f"{src.stem}_sc1.o"
            sc1_elf = tmp / f"{src.stem}_sc1.elf"
            sc1_asm = compile_to_asm(sc1_gcc, src, [])
            sc1_tmp = assemble(assembler, MARCH, sc1_asm)
            sc1_tmp.rename(sc1_obj)
            link_elf(linker, LD_SCRIPT, support + [sc1_obj], sc1_elf, libs=LIBS)

            try:
                rc = run_spike(ISA, sc1_elf)
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
