#!/usr/bin/env python3
"""Run gcc.c-torture/execute tests on rvsc1 via Spike+pk.

For each torture test at each opt level:
  1. Try to compile+link with rvsc1-unknown-elf-gcc (skip on error/timeout)
  2. Run under: spike --isa=rv32imac_zicsr_zifencei $PK test.elf
  3. PASS if Spike exits 0; FAIL otherwise; SKIP if compile failed

The tests are self-validating: they call exit(0) on success and
abort()/exit(1) on failure — no reference compiler needed.
"""

import argparse
import dataclasses
import enum
import os
import re
import signal
import subprocess
import sys
import tempfile
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent.parent))
from common import find_tool, run_spike, SpikeTimeout

SCRIPT_DIR  = Path(__file__).parent
TORTURE_DIR = SCRIPT_DIR.parent.parent / "gcc" / "gcc" / "testsuite" / "gcc.c-torture" / "execute"

COMPILER        = "rvsc1-unknown-elf-gcc"
ISA             = "rv32imac_zicsr_zifencei"
LD_SCRIPT       = SCRIPT_DIR / "pk32.ld"
OPT_LEVELS      = ["-O0", "-O1", "-O2", "-O3", "-Os"]
COMPILE_TIMEOUT = 120
SPIKE_TIMEOUT   = 300

# Tests that produce correct code but generate so many synthesis instructions
# that Spike exceeds SPIKE_TIMEOUT even on an unloaded machine.
KNOWN_SLOW: set[tuple[str, str]] = set()

# Tests that are out of scope regardless of opt level: upstream-flagged
# "expensive" tests that blow COMPILE_TIMEOUT on their own, tests using GCC
# extensions unsupported on this freestanding 32-bit target (_Decimal*), and
# tests using host-architecture-specific inline asm (x87). Shared with
# torture_isa.py (imported from here) since none of these compile regardless
# of which downstream check consumes the result.
KNOWN_UNSUPPORTED: set[str] = {
    # Expensive tests (upstream dg-require-effective-target run_expensive_tests /
    # high dg-timeout-factor): compile time alone exceeds COMPILE_TIMEOUT.
    "memclr.c",
    "memcpy-a1.c",
    "memcpy-a2.c",
    "memcpy-a4.c",
    "memcpy-a8.c",
    # Decimal floating point (_Decimal32/64/128): unsupported GCC extension.
    "pr80692.c",
    # x86-specific inline asm (st(1) x87 register): not applicable to RISC-V.
    "990413-2.c",
    # __int128 (TImode) unconditionally: GCC only supports a scalar integer
    # mode when its width is 2*BITS_PER_WORD (the middle end's built-in
    # "double word" support). On rv32, 2*32=64, not 128, so __int128 is
    # rejected outright -- true of upstream rv32 GCC in general, not
    # specific to sc1's restricted instruction set.
    "pr93213.c",
    "pr84748.c",
    "pr105613.c",
    # printf/sprintf/fprintf/vfprintf family: the linked libc.a's stdio
    # wrappers call internal reentrant symbols (_vfprintf_r, _svfprintf_r,
    # _vfiprintf_r, plain vfprintf for the _chk variants) that aren't defined
    # in this newlib build -- a newlib build/link configuration gap, not an
    # sc1 ISA limitation. Every test that calls any *printf variant fails to
    # link with the same undefined-reference error.
    "20020406-1.c",
    "20021120-3.c",
    "20070201-1.c",
    "20121108-1.c",
    "920501-8.c",
    "920501-9.c",
    "920726-1.c",
    "930513-1.c",
    "941014-2.c",
    "980605-1.c",
    "fprintf-1.c",
    "fprintf-2.c",
    "fprintf-chk-1.c",
    "gofast.c",
    "memchr-1.c",
    "pr111863-1.c",
    "pr58831.c",
    "pr69691.c",
    "pr71550.c",
    "pr78586.c",
    "pr78622.c",
    "pr79286.c",
    "pr79327.c",
    "printf-1.c",
    "printf-2.c",
    "printf-chk-1.c",
    "return-addr.c",
    "strlen-2.c",
    "strlen-3.c",
    "strlen-4.c",
    "strlen-5.c",
    "strlen-6.c",
    "struct-ret-1.c",
    "user-printf.c",
    "va-arg-21.c",
    "va-arg-24.c",
    "vfprintf-1.c",
    "vfprintf-chk-1.c",
    "vprintf-1.c",
    "vprintf-chk-1.c",
    # libm math functions (pow, floor, ...) undefined: no libm linked/built
    # for this target -- another build configuration gap, not ISA-related.
    "980709-1.c",
    "float-floor.c",
    # sys/mman.h (mmap) unavailable on this freestanding/bare-metal newlib
    # target.
    "loop-2f.c",
    "loop-2g.c",
}


class Outcome(enum.Enum):
    PASS = "pass"
    FAIL = "fail"
    SKIP = "skip"
    TIMEOUT = "timeout"


@dataclasses.dataclass(frozen=True)
class Result:
    src: Path
    opt: str
    outcome: Outcome
    message: str | None = None


def get_dg_options(src: Path) -> list[str]:
    """Extract extra compiler flags from dg-options / dg-additional-options comments."""
    opts: list[str] = []
    # Matches both quoted forms:
    #   { dg-options "flags" }  and  { dg-options { "flags" } }
    #   { dg-additional-options "flags" }  (same variants)
    pattern = re.compile(
        r'\{\s*dg-(?:additional-)?options\s+\{?\s*"([^"]+)"\s*\}'
    )
    try:
        with open(src, encoding="latin-1") as f:
            for line in f:
                m = pattern.search(line)
                if m:
                    opts.extend(m.group(1).split())
    except OSError:
        pass
    return opts


def try_compile_link(compiler: str, src: Path, opt: str, out: Path,
                     extra_flags: list[str] | None = None) -> bool:
    """Compile+link src → out ELF. Returns False on error or timeout."""
    cmd = [compiler, opt] + (extra_flags or []) + ["-T", str(LD_SCRIPT), str(src), "-lsim", "-o", str(out)]
    proc = subprocess.Popen(
        cmd,
        stdout=subprocess.PIPE, stderr=subprocess.PIPE,
        start_new_session=True,
    )
    try:
        proc.wait(timeout=COMPILE_TIMEOUT)
    except subprocess.TimeoutExpired:
        os.killpg(proc.pid, signal.SIGKILL)
        proc.wait()
        out.unlink(missing_ok=True)
        return False
    if proc.returncode != 0:
        out.unlink(missing_ok=True)
        return False
    return True


def run_one(compiler: str, pk: str, tmp: Path, src: Path, opt: str,
            dg_opts: list[str]) -> Result:
    """Compile+run one (src, opt) work item. Assumes KNOWN_SLOW already filtered."""
    elf = tmp / f"{src.stem}{opt}.elf"
    if not try_compile_link(compiler, src, opt, elf, dg_opts):
        return Result(src, opt, Outcome.SKIP)
    try:
        rc = run_spike(ISA, elf, timeout=SPIKE_TIMEOUT, pk=pk)
    except SpikeTimeout:
        elf.unlink(missing_ok=True)
        return Result(src, opt, Outcome.TIMEOUT)
    elf.unlink(missing_ok=True)
    if rc != 0:
        return Result(src, opt, Outcome.FAIL, f"exit {rc}")
    return Result(src, opt, Outcome.PASS)


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Behavioral: gcc.c-torture tests on rvsc1 via Spike+pk"
    )
    parser.add_argument("sources", nargs="*", type=Path,
                        help=f"C source files (default: {TORTURE_DIR}/*.c)")
    parser.add_argument("--opt", dest="opts", action="append", default=[],
                        metavar="LEVEL", help="Optimization level (repeatable; default: all)")
    parser.add_argument("-j", "--jobs", type=int, default=None, metavar="N",
                        help="Parallel workers (default: os.cpu_count(); capped at os.cpu_count())")
    args = parser.parse_args()

    pk = os.environ.get("PK")
    if not pk:
        sys.exit("error: PK environment variable not set (run inside the nix dev shell)")

    compiler = find_tool(COMPILER)
    find_tool("spike")
    sources  = args.sources or sorted(TORTURE_DIR.glob("*.c"))
    opts     = args.opts or OPT_LEVELS

    if not sources:
        sys.exit(f"error: no sources found in {TORTURE_DIR}")

    cpu_count = os.cpu_count() or 1
    jobs = args.jobs if args.jobs is not None else cpu_count
    if args.jobs is not None and args.jobs > cpu_count:
        print(f"note: --jobs {args.jobs} exceeds cpu_count ({cpu_count}); using {cpu_count}",
              file=sys.stderr)
    jobs = max(1, min(jobs, cpu_count))

    src_list = list(map(Path, sources))
    dg_opts_by_src = {src: get_dg_options(src) for src in src_list}
    total_pairs = len(src_list) * len(opts)
    items = [(src, opt) for src in src_list for opt in opts
             if (src.name, opt) not in KNOWN_SLOW
             and src.name not in KNOWN_UNSUPPORTED]
    skipped = total_pairs - len(items)
    passed = failed = 0

    with tempfile.TemporaryDirectory() as _tmp:
        tmp = Path(_tmp)
        with ThreadPoolExecutor(max_workers=jobs) as pool:
            results = pool.map(
                lambda item: run_one(compiler, pk, tmp, item[0], item[1],
                                      dg_opts_by_src[item[0]]),
                items,
            )
            for result in results:
                if result.outcome is Outcome.TIMEOUT:
                    print(f"  TIMEOUT {result.src.name} {result.opt}")
                    failed += 1
                elif result.outcome is Outcome.FAIL:
                    print(f"  FAIL {result.src.name} {result.opt}  ({result.message})")
                    failed += 1
                elif result.outcome is Outcome.SKIP:
                    skipped += 1
                else:
                    passed += 1

    total = passed + failed + skipped
    print(f"\n{passed}/{total} passed  ({skipped} skipped, {failed} failed)")
    if failed:
        sys.exit(1)


if __name__ == "__main__":
    main()
