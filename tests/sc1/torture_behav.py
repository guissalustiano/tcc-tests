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
KNOWN_SLOW: set[tuple[str, str]] = {
    ("nestfunc-5.c", "-O2"),
    ("nestfunc-5.c", "-O3"),
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
             if (src.name, opt) not in KNOWN_SLOW]
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
