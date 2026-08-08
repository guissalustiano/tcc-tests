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
import sys
import tempfile
from collections import defaultdict
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent.parent))
from common import (
    CompileResult,
    CompileStatus,
    find_tool,
    format_grouped,
    print_grouped,
    run_compiler,
    run_spike_capture,
    SpikeTimeout,
)

SCRIPT_DIR  = Path(__file__).parent
TORTURE_DIR = SCRIPT_DIR.parent.parent / "gcc" / "gcc" / "testsuite" / "gcc.c-torture" / "execute"

COMPILER        = "rvsc1-unknown-elf-gcc"
ISA             = "rv32imac_zicsr_zifencei"
LD_SCRIPT       = SCRIPT_DIR / "pk32.ld"
OPT_LEVELS      = ["-O0", "-O1", "-O2", "-O3", "-Os"]
COMPILE_TIMEOUT = 120
# Generous on purpose.  The slowest correct test (memcpy-2.c at -O0) retires
# 1.05e9 instructions and needs ~85 s of Spike on an idle machine, but a full
# sweep runs many Spike instances at once, and at a 300 s budget that test sat
# close enough to the line to flip between runs on load alone.  A record that
# changes without the toolchain changing defeats the point of committing it --
# the same reason compile-budget timeouts are counted but never listed.
SPIKE_TIMEOUT   = 900

# Where a full sweep leaves its record of what failed.  Committed, so the
# failure set is tracked across runs instead of scrolling past in a terminal.
REPORT_PATH     = SCRIPT_DIR / "torture-behav-failures.txt"

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
    # Requires a C99 math runtime, which this target does not have; upstream
    # guards it with "dg-require-effective-target c99_runtime", a directive
    # this harness does not parse (it reads dg-options only). The test checks
    # that GCC narrows sin(double)->sinf and floor(double)->floorf for float
    # arguments, and defines weak floor/sinf that abort if the narrowing did
    # not happen. Without a C99 runtime GCC correctly declines to narrow, so
    # the weak floor runs and aborts at -O1 and -Os. At -O2/-O3 the calls are
    # constant-folded away and it passes, and at -O0 the body is #ifdef'd out
    # by __OPTIMIZE__ -- so the pass/fail split tracks folding, not synthesis.
    "20030125-1.c",
    # sys/mman.h (mmap) unavailable on this freestanding/bare-metal newlib
    # target.
    "loop-2f.c",
    "loop-2g.c",
}


# A register dump line from pk's trap report ("z  00000000 ra 00010054 …",
# down to "pc 00010b84 va/inst 00000000 sr 80006020"): pure noise for grouping,
# and pk prints it above the one line that actually says what went wrong
# ("User load segfault @ 0x0"), so it has to be skipped rather than taken.
_REG_DUMP_RE = re.compile(r"^(?:[a-zA-Z][a-zA-Z0-9/]{0,7}\s+[0-9a-f]{8,16}\s*)+$")
# Addresses vary between tests; normalising them lets one fault group as one.
_ADDR_RE = re.compile(r"0x[0-9a-f]+|\b[0-9a-f]{8,16}\b")


def spike_diagnostic(run) -> str:
    """The first meaningful line spike/pk printed, with addresses normalised.

    Returns "" when the program failed quietly (an ordinary nonzero exit from
    a self-validating test that just computed the wrong answer).
    """
    for line in (run.stderr + "\n" + run.stdout).splitlines():
        line = line.strip()
        if not line or _REG_DUMP_RE.match(line):
            continue
        return _ADDR_RE.sub("<addr>", line)
    return ""


def runtime_signature(rc: int, diag: str) -> str:
    """Group key for a failing run: how it died, not which test it was."""
    if rc < 0:
        try:
            how = f"spike killed by {signal.Signals(-rc).name}"
        except ValueError:
            how = f"spike killed by signal {-rc}"
    else:
        how = f"exit {rc}"
    return f"{how} — {diag}" if diag else how


class Outcome(enum.Enum):
    PASS = "pass"
    FAIL = "fail"
    SKIP = "skip"          # compile/link rejected the program (a diagnostic)
    ICE = "ice"            # the compiler itself fell over — a backend bug
    CTIMEOUT = "ctimeout"  # the compiler hung
    TIMEOUT = "timeout"    # spike hung


@dataclasses.dataclass(frozen=True)
class Result:
    src: Path
    opt: str
    outcome: Outcome
    message: str | None = None
    signature: str = ""


def _section(title: str, results: list["Result"], limit: int | None = None) -> None:
    print_grouped(title, [(r.src.name, r.opt, r.signature) for r in results], limit)


def build_report(by_outcome: dict, passed: int, failed: int, skipped: int,
                 sources: int, opts: list[str],
                 per_opt: dict[str, dict[str, int]] | None = None) -> str:
    """Render the persisted failure record.

    Deliberately carries no timestamp, no host name and no wall-clock timing:
    two sweeps of the same toolchain must produce byte-identical text so the
    diff shows only what actually changed about the failures.

    Compile-level skips are summarised as a count but not listed — the
    compile-budget timeouts among them are load-sensitive, and listing them
    would make every run diff against every other for reasons unrelated to
    code generation.  torture_isa.py's grouped output covers them instead.
    The per-optimization-level breakdown is recorded because the thesis
    reports it as a table, and a bare total cannot be split back apart.
    """
    total = passed + failed + skipped
    lines = [
        "# rvsc1 — gcc.c-torture/execute behavioral failures",
        "#",
        "# Generated by tests/sc1/torture_behav.py (`just torture-behav`).",
        "# Regenerate with a full sweep; ordering is deterministic and no",
        "# timestamps are recorded, so two runs diff cleanly.",
        "#",
        f"# {sources} sources × {len(opts)} opt levels ({' '.join(opts)})"
        f" = {total} combinations",
        f"# {passed} passed · {failed} failed · {skipped} skipped"
        " (compile/link rejected or compiler hung; not listed here)",
        "#",
    ]
    if per_opt:
        lines += ["# opt    passed  skipped  failed", "#"]
        for opt in opts:
            row = per_opt.get(opt, {})
            lines.append(
                f"# {opt:<6} {row.get('passed', 0):>6} {row.get('skipped', 0):>8}"
                f" {row.get('failed', 0):>7}"
            )
        lines.append(
            f"# {'total':<6} {passed:>6} {skipped:>8} {failed:>7}"
        )
        lines.append("#")
    lines.append("")
    sections = [
        ("ICEs", by_outcome.get(Outcome.ICE, [])),
        ("Runtime failures", by_outcome.get(Outcome.FAIL, [])),
        ("Runtime timeouts", by_outcome.get(Outcome.TIMEOUT, [])),
    ]
    body: list[str] = []
    for title, results in sections:
        rendered = format_grouped(
            title, [(r.src.name, r.opt, r.signature) for r in results]
        )
        if rendered:
            body.extend(rendered + [""])
    if not body:
        body = ["No failures.", ""]
    return "\n".join(lines + body)


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
                     extra_flags: list[str] | None = None) -> CompileResult:
    """Compile+link src → out ELF, classifying how the compiler ended."""
    cmd = [compiler, opt] + (extra_flags or []) + [
        "-T", str(LD_SCRIPT), str(src), "-lsim", "-o", str(out)
    ]
    res = run_compiler(cmd, COMPILE_TIMEOUT)
    if not res.ok:
        out.unlink(missing_ok=True)
    return res


_COMPILE_OUTCOME = {
    CompileStatus.ICE: Outcome.ICE,
    CompileStatus.TIMEOUT: Outcome.CTIMEOUT,
    CompileStatus.ERROR: Outcome.SKIP,
}


def run_one(compiler: str, pk: str, tmp: Path, src: Path, opt: str,
            dg_opts: list[str]) -> Result:
    """Compile+run one (src, opt) work item. Assumes KNOWN_SLOW already filtered."""
    elf = tmp / f"{src.stem}{opt}.elf"
    built = try_compile_link(compiler, src, opt, elf, dg_opts)
    if not built.ok:
        return Result(src, opt, _COMPILE_OUTCOME[built.status],
                      signature=built.signature)
    try:
        run = run_spike_capture(ISA, elf, timeout=SPIKE_TIMEOUT, pk=pk)
    except SpikeTimeout:
        elf.unlink(missing_ok=True)
        return Result(src, opt, Outcome.TIMEOUT,
                      signature=f"spike did not finish within {SPIKE_TIMEOUT}s")
    elf.unlink(missing_ok=True)
    if run.returncode != 0:
        sig = runtime_signature(run.returncode, spike_diagnostic(run))
        return Result(src, opt, Outcome.FAIL, f"exit {run.returncode}", sig)
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
    parser.add_argument("--report", type=Path, default=None, metavar="PATH",
                        help=f"Write the failure record here (default: {REPORT_PATH.name}, "
                             "written only for a full default sweep)")
    parser.add_argument("--no-report", action="store_true",
                        help="Do not write a failure record")
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
    all_pairs = [(src, opt) for src in src_list for opt in opts]
    items = [(src, opt) for src, opt in all_pairs
             if (src.name, opt) not in KNOWN_SLOW
             and src.name not in KNOWN_UNSUPPORTED]
    skipped = total_pairs - len(items)
    passed = failed = 0

    # Per-opt tally, so the record can be read as the table the thesis prints.
    # The up-front exclusions are attributed here; the rest accrue below.
    per_opt = {opt: {"passed": 0, "skipped": 0, "failed": 0} for opt in opts}
    for src, opt in all_pairs:
        if (src.name, opt) in KNOWN_SLOW or src.name in KNOWN_UNSUPPORTED:
            per_opt[opt]["skipped"] += 1

    collected: list[Result] = []
    with tempfile.TemporaryDirectory() as _tmp:
        tmp = Path(_tmp)
        with ThreadPoolExecutor(max_workers=jobs) as pool:
            results = pool.map(
                lambda item: run_one(compiler, pk, tmp, item[0], item[1],
                                      dg_opts_by_src[item[0]]),
                items,
            )
            for result in results:
                collected.append(result)
                if result.outcome is Outcome.TIMEOUT:
                    print(f"  TIMEOUT {result.src.name} {result.opt}")
                    failed += 1
                    per_opt[result.opt]["failed"] += 1
                elif result.outcome is Outcome.FAIL:
                    print(f"  FAIL {result.src.name} {result.opt}  ({result.message})")
                    failed += 1
                    per_opt[result.opt]["failed"] += 1
                elif result.outcome is Outcome.ICE:
                    print(f"  ICE {result.src.name} {result.opt}: {result.signature}")
                    failed += 1
                    per_opt[result.opt]["failed"] += 1
                elif result.outcome in (Outcome.SKIP, Outcome.CTIMEOUT):
                    skipped += 1
                    per_opt[result.opt]["skipped"] += 1
                else:
                    passed += 1
                    per_opt[result.opt]["passed"] += 1

    by_outcome = defaultdict(list)
    for r in collected:
        by_outcome[r.outcome].append(r)

    _section("ICEs", by_outcome[Outcome.ICE])
    _section("Runtime failures", by_outcome[Outcome.FAIL])
    _section("Runtime timeouts", by_outcome[Outcome.TIMEOUT])
    _section("Skipped — compile/link rejected", by_outcome[Outcome.SKIP], limit=8)
    _section("Skipped — compiler hung", by_outcome[Outcome.CTIMEOUT], limit=8)

    # A partial run (a subset of sources or opt levels) would otherwise
    # overwrite the committed full-sweep record with a narrower one.
    full_sweep = not args.sources and not args.opts
    if args.no_report:
        report = None
    elif args.report is not None:
        report = args.report
    elif full_sweep:
        report = REPORT_PATH
    else:
        report = None
        print("\nnote: partial run — failure record not written "
              "(pass --report PATH to write one anyway)")
    if report is not None:
        report.write_text(build_report(by_outcome, passed, failed, skipped,
                                       len(src_list), opts, per_opt))
        print(f"\nfailure record written to {report}")

    total = passed + failed + skipped
    print(f"\n{passed}/{total} passed  ({skipped} skipped, {failed} failed)")
    if failed:
        sys.exit(1)


if __name__ == "__main__":
    main()
