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

# --- What this target provides, as the test suite describes requirements -----
#
# gcc.c-torture sources declare their prerequisites with
# "{ dg-require-effective-target NAME }", and DejaGnu skips a test whose
# prerequisites the target does not meet.  This harness reads those directives
# so the skip set is *derived from the sources* rather than hand-maintained.
#
# That matters because the hand-maintained version decayed badly: it reached 55
# sources, 42 of which were excluded for reasons that had stopped being true or
# were never true, and ~210 passing combinations went unmeasured until someone
# re-tested the reasons.  A table of target properties goes stale far more
# visibly than a list of file names, and one entry here replaces many there.
#
# Absent: the property genuinely does not hold for this configuration.  Each
# entry carries the evidence, not an assumption.
EFFECTIVE_TARGET_ABSENT: dict[str, str] = {
    "run_expensive_tests": (
        "opt-in upstream too; these blow COMPILE_TIMEOUT under sweep load"),
    "int128": (
        "GCC gives a scalar integer mode only at 2*BITS_PER_WORD, so rv32 tops "
        "out at 64 bits -- true of upstream rv32 GCC, not of sc1"),
    "mmap": "no sys/mman.h in this freestanding newlib",
    "dfp": "decimal floating point unsupported on this target",
    "dfprt": "decimal floating point runtime unsupported on this target",
    "c99_runtime": (
        "GCC itself treats this target as lacking one: it declines to narrow "
        "floor(double) to floorf for a float argument, which is exactly what "
        "20030125-1.c checks, and a stock rv32i toolchain declines identically"),
}

# Present: verified, in every case by the tests that declare it passing at all
# five optimization levels.  Listed rather than assumed so that a name appearing
# in neither table is reported instead of being silently taken one way.
EFFECTIVE_TARGET_PRESENT: frozenset[str] = frozenset({
    "double64plus", "fileio", "indirect_calls", "indirect_jumps", "int32",
    "int32plus", "label_values", "longlong64", "return_address",
    "stdint_types", "trampolines", "untyped_assembly", "unwrapped",
})

# Sources to skip regardless of what they declare.  Empty, and it should stay
# that way: an entry here is a claim no directive backs, so it has to be
# justified in a comment and re-verified whenever the toolchain changes.  The
# two sources that need skipping but carry no dg-require-effective-target
# (pr105613.c for __int128, 990413-2.c for x87 asm) are deliberately not listed
# -- they fail to compile, and the harness already groups compile failures by
# cause, which says more than an entry here would.
KNOWN_UNSUPPORTED: set[str] = set()

_DG_REQUIRE_RE = re.compile(
    r"\{\s*dg-require-effective-target\s+([A-Za-z0-9_]+)")


def get_required_effective_targets(src: Path) -> list[str]:
    """Effective-target names the source declares it needs."""
    names: list[str] = []
    try:
        with open(src, encoding="latin-1") as f:
            for line in f:
                for m in _DG_REQUIRE_RE.finditer(line):
                    if m.group(1) not in names:
                        names.append(m.group(1))
    except OSError:
        pass
    return names


def unmet_requirement(src: Path) -> tuple[str, str] | None:
    """(name, reason) of the first declared requirement this target lacks."""
    for name in get_required_effective_targets(src):
        if name in EFFECTIVE_TARGET_ABSENT:
            return name, EFFECTIVE_TARGET_ABSENT[name]
    return None


def unknown_requirements(srcs) -> dict[str, list[str]]:
    """Declared effective targets classified by neither table, by name.

    Treated as present -- the test runs -- so an unrecognised name can only
    ever cost a visible failure, never a silent skip.  Reported so it gets a
    verdict rather than staying unclassified.
    """
    unknown: dict[str, list[str]] = defaultdict(list)
    for src in srcs:
        for name in get_required_effective_targets(src):
            if (name not in EFFECTIVE_TARGET_ABSENT
                    and name not in EFFECTIVE_TARGET_PRESENT):
                unknown[name].append(src.name)
    return dict(unknown)


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
    # -lm: libm is built and installed for this target, so the handful of tests
    # calling floor/pow link like any other.  It is unconditional because an
    # unreferenced archive contributes nothing, and making it conditional on
    # the source would just be a second list to keep in step with reality.
    cmd = [compiler, opt] + (extra_flags or []) + [
        "-T", str(LD_SCRIPT), str(src), "-lsim", "-lm", "-o", str(out)
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

    # Requirements the target does not meet, read from the sources themselves.
    unmet_by_src = {src: unmet_requirement(src) for src in src_list}

    unknown = unknown_requirements(src_list)
    if unknown:
        print("note: effective targets declared by the suite but classified by "
              "neither table in this harness; treated as present, so these "
              "tests run:")
        for name in sorted(unknown):
            srcs = unknown[name]
            shown = ", ".join(sorted(srcs)[:4]) + (" ..." if len(srcs) > 4 else "")
            print(f"  {name:<24}{len(srcs)} source(s): {shown}")
        print()

    def excluded(src: Path, opt: str) -> bool:
        return (src.name, opt) in KNOWN_SLOW or bool(unmet_by_src[src])

    total_pairs = len(src_list) * len(opts)
    all_pairs = [(src, opt) for src in src_list for opt in opts]
    items = [(src, opt) for src, opt in all_pairs if not excluded(src, opt)]
    skipped = total_pairs - len(items)
    passed = failed = 0

    # Per-opt tally, so the record can be read as the table the thesis prints.
    # The up-front exclusions are attributed here; the rest accrue below.
    per_opt = {opt: {"passed": 0, "skipped": 0, "failed": 0} for opt in opts}
    for src, opt in all_pairs:
        if excluded(src, opt):
            per_opt[opt]["skipped"] += 1

    by_requirement: dict[str, list[str]] = defaultdict(list)
    for src, unmet in unmet_by_src.items():
        if unmet:
            by_requirement[unmet[0]].append(src.name)
    if by_requirement:
        n = sum(len(v) for v in by_requirement.values())
        print(f"skipping {n} source(s) x {len(opts)} levels: "
              f"dg-require-effective-target this configuration does not meet")
        for name in sorted(by_requirement):
            srcs = sorted(by_requirement[name])
            print(f"  {name} ({len(srcs)}) — {EFFECTIVE_TARGET_ABSENT[name]}")
            print(f"      {', '.join(srcs)}")
        print()

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
