# Make torture-suite results exact, auditable, and include the ISA layer

## Problems

1. main.typ `@tbl-torture-results` (line 1623-1636) contains approximations ("~1 501",
   "~183"). A results table in a thesis should be exact and regenerable.
2. `torture_behav.py` conflates two different "skipped" causes: compile failures
   (unsupported constructs — fine) and KNOWN_SLOW exclusions (correct code, too slow —
   different story). Both land in the same `skipped` counter (torture_behav.py:114-119).
3. `torture_isa.py` results are not reported in main.typ at all. "Zero forbidden mnemonics
   across ~1 600 torture programs × 5 opt levels" is a far stronger ISA-compliance claim
   than the 19 handwritten tests (95 cases) currently reported at main.typ:1594.
4. The pr38051 -Os failure is only prose (main.typ:1662); nothing in the harness tracks it.
   When it gets fixed (improvements/01) nothing will notice.

## Fix

In `tests/sc1/torture_behav.py`:
- Split counters: `passed / failed / compile_skip / known_slow / timeout`.
- Add `XFAIL: set[tuple[str, str]] = {("pr38051.c", "-Os")}` — expected-fail entries count
  as `xfail` when they fail and as **XPASS (error, exit 1)** when they pass, so fixing the
  bug forces removing the entry.
- Add `--csv FILE` that writes one row per (test, opt, outcome) plus a per-level summary.
  The thesis table is then generated, not transcribed.
- Per-level summary printout at the end (the current single total hides the per-level
  breakdown the thesis table needs).

In `tests/sc1/torture_isa.py` (same treatment): per-level counts + `--csv`.

In `main.typ`:
- Replace @tbl-torture-results with exact numbers from the CSV; add a "Known slow" column
  or footnote separating KNOWN_SLOW from compile skips.
- Add a short subsection "ISA compliance over the torture suite" before §sc1-torture-tests
  reporting torture_isa.py numbers (N programs compiled × 5 levels, zero forbidden
  mnemonics).
- Consider a `just torture-report` recipe in tests/sc1/justfile that runs both with --csv
  into e.g. `results/` so the numbers are one command away at writing time.

## Verify

```sh
cd tests/sc1
python3 torture_isa.py --csv /tmp/isa.csv
python3 torture_behav.py --csv /tmp/behav.csv     # long: ~hours; use --opt to smoke-test
```
Summed CSV rows must equal the printed totals; per-level totals must match
1684 × 5 combinations exactly (passed+failed+skips+xfail per level = 1684).
