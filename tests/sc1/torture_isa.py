#!/usr/bin/env python3
"""ISA compliance check for gcc.c-torture/execute tests on rvsc1.

Compiles each torture test at each optimization level and verifies that only
sc1-allowed mnemonics appear in the output.

Compile failures are classified rather than silently skipped.  An ICE is a
backend bug and fails the run; an ordinary diagnostic (unsupported feature,
missing header) is reported as a skip, grouped by diagnostic so the reason is
visible without rerunning anything by hand.
"""

import argparse
import dataclasses
import os
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent.parent))
from common import (
    CompileStatus,
    compile_probe,
    disassemble_mnemonics,
    find_tool,
    print_grouped,
)
from torture_behav import KNOWN_UNSUPPORTED, get_dg_options

SCRIPT_DIR  = Path(__file__).parent
TORTURE_DIR = SCRIPT_DIR.parent.parent / "gcc" / "gcc" / "testsuite" / "gcc.c-torture" / "execute"

COMPILER        = "rvsc1-unknown-elf-gcc"
OBJDUMP         = "riscv32-none-elf-objdump"
OPT_LEVELS      = ["-O0", "-O1", "-O2", "-O3", "-Os"]
COMPILE_TIMEOUT = 120

ALLOWED = {
    "lw", "sw", "beq",
    "add", "addi", "sub", "and", "or",
    "lui", "jalr",
}


@dataclasses.dataclass(frozen=True)
class Result:
    src: Path
    opt: str
    status: CompileStatus
    signature: str = ""
    violations: tuple[str, ...] = ()

    @property
    def clean(self) -> bool:
        return self.status is CompileStatus.OK and not self.violations


def run_one(compiler: str, objdump: str, src: Path, opt: str,
            cflags: list[str]) -> Result:
    res = compile_probe(compiler, src, opt, cflags, timeout=COMPILE_TIMEOUT)
    if not res.ok:
        return Result(src, opt, res.status, res.signature)
    try:
        mnemonics = disassemble_mnemonics(objdump, res.obj)
    finally:
        res.obj.unlink(missing_ok=True)
    violations = tuple(sorted({m for m in mnemonics if m not in ALLOWED}))
    return Result(src, opt, CompileStatus.OK, ", ".join(violations), violations)


def _section(title: str, results: list[Result], limit: int | None = None) -> None:
    print_grouped(title, [(r.src.name, r.opt, r.signature) for r in results], limit)


def main() -> None:
    parser = argparse.ArgumentParser(
        description="ISA compliance: gcc.c-torture tests on rvsc1"
    )
    parser.add_argument("sources", nargs="*", type=Path,
                        help=f"C source files (default: {TORTURE_DIR}/*.c)")
    parser.add_argument("--opt", dest="opts", action="append", default=[],
                        metavar="LEVEL", help="Optimization level (repeatable; default: all)")
    parser.add_argument("--cflag", dest="cflags", action="append", default=[],
                        metavar="FLAG", help="Extra compiler flag (repeatable)")
    parser.add_argument("-j", "--jobs", type=int, default=None, metavar="N",
                        help="Parallel workers (default: os.cpu_count())")
    parser.add_argument("--include-unsupported", action="store_true",
                        help="Also compile the KNOWN_UNSUPPORTED tests: they are "
                             "excluded by default because they cannot link, but "
                             "they can still reveal an ICE")
    parser.add_argument("--files-per-group", type=int, default=8, metavar="N",
                        help="Max files listed per group before eliding (default: 8)")
    args = parser.parse_args()

    compiler = find_tool(COMPILER)
    objdump  = find_tool(OBJDUMP)
    sources  = args.sources or sorted(TORTURE_DIR.glob("*.c"))
    opts     = args.opts or OPT_LEVELS

    if not sources:
        sys.exit(f"error: no sources found in {TORTURE_DIR}")

    cpu_count = os.cpu_count() or 1
    jobs = max(1, min(args.jobs if args.jobs is not None else cpu_count, cpu_count))

    src_list = list(map(Path, sources))
    excluded = 0
    if not args.include_unsupported:
        kept = [s for s in src_list if s.name not in KNOWN_UNSUPPORTED]
        excluded = (len(src_list) - len(kept)) * len(opts)
        src_list = kept

    items = [(s, o) for s in src_list for o in opts]
    if not items:
        sys.exit("error: every source was excluded; "
                 "pass --include-unsupported to scan them")

    # Honour each test's dg-options (75 torture tests need -std=gnu89, 31
    # -fpermissive).  Without them those tests fail on language dialect rather
    # than on anything sc1-related, and never get ISA-checked at all.
    dg_by_src = {s: get_dg_options(s) for s in src_list}

    with ThreadPoolExecutor(max_workers=jobs) as pool:
        results = list(pool.map(
            lambda it: run_one(compiler, objdump, it[0], it[1],
                               dg_by_src[it[0]] + args.cflags),
            items,
        ))

    ices      = [r for r in results if r.status is CompileStatus.ICE]
    errors    = [r for r in results if r.status is CompileStatus.ERROR]
    timeouts  = [r for r in results if r.status is CompileStatus.TIMEOUT]
    violating = [r for r in results if r.status is CompileStatus.OK and r.violations]
    clean     = [r for r in results if r.clean]

    _section("ICEs", ices)
    _section("ISA violations", violating, args.files_per_group)
    _section("Compile errors", errors, args.files_per_group)
    _section("Compile timeouts", timeouts, args.files_per_group)

    compiled = len(clean) + len(violating)
    print(f"\n{len(items)} compiles: {compiled} ok · {len(ices)} ICE · "
          f"{len(errors)} error · {len(timeouts)} timeout")
    if excluded:
        print(f"{excluded} not attempted (KNOWN_UNSUPPORTED; "
              f"--include-unsupported to scan them)")
    print(f"ISA compliance: {len(clean)}/{compiled} clean, {len(violating)} violating")

    # An ICE is a backend bug, so it fails the run.  The previous behaviour
    # folded it into the skip count and exited 0.
    if ices or violating:
        sys.exit(1)


if __name__ == "__main__":
    main()
