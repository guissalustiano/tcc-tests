#!/usr/bin/env python3
"""ISA compliance check for gcc.c-torture/execute tests on rvsc1.

Compiles each torture test with rvsc1-unknown-elf-gcc and verifies that only
sc1-allowed mnemonics appear in the output.  Tests that fail to compile are
skipped (unsupported features, etc.).  Only failures are printed; a summary
line shows pass/fail/skip counts.
"""

import argparse
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent.parent))
from common import find_tool, try_compile_to_obj, disassemble_mnemonics

SCRIPT_DIR  = Path(__file__).parent
TORTURE_DIR = SCRIPT_DIR.parent.parent / "gcc" / "gcc" / "testsuite" / "gcc.c-torture" / "execute"

COMPILER   = "rvsc1-unknown-elf-gcc"
OBJDUMP    = "riscv32-none-elf-objdump"
OPT_LEVELS = ["-O0", "-O1", "-O2", "-O3", "-Os"]

ALLOWED = {
    "lw", "sw", "beq",
    "add", "addi", "sub", "and", "or",
    "lui", "jalr",
}


def main() -> None:
    parser = argparse.ArgumentParser(
        description="ISA compliance: gcc.c-torture tests on rvsc1"
    )
    parser.add_argument(
        "sources", nargs="*", type=Path,
        help=f"C source files (default: {TORTURE_DIR}/*.c)",
    )
    parser.add_argument(
        "--opt", dest="opts", action="append", default=[],
        metavar="LEVEL", help="Optimization level (repeatable; default: all)",
    )
    args = parser.parse_args()

    compiler = find_tool(COMPILER)
    objdump  = find_tool(OBJDUMP)
    sources  = args.sources or sorted(TORTURE_DIR.glob("*.c"))
    opts     = args.opts or OPT_LEVELS

    if not sources:
        sys.exit(f"error: no sources found in {TORTURE_DIR}")

    passed = failed = skipped = 0

    for src in map(Path, sources):
        for opt in opts:
            obj = try_compile_to_obj(compiler, src, opt, [])
            if obj is None:
                skipped += 1
                continue
            try:
                mnemonics = disassemble_mnemonics(objdump, obj)
            finally:
                obj.unlink(missing_ok=True)

            violations = sorted({m for m in mnemonics if m not in ALLOWED})
            if violations:
                print(f"  FAIL {src.name} {opt}: {', '.join(violations)}")
                failed += 1
            else:
                passed += 1

    total = passed + failed + skipped
    print(f"\n{passed}/{total} passed  ({skipped} skipped, {failed} failed)")
    if failed:
        sys.exit(1)


if __name__ == "__main__":
    main()
