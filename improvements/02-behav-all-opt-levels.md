# Run behavioral tests at all five optimization levels

## Problem

`tests/sc1/behav.py` hardcodes `-O1` (line 61: `[sc1_gcc, "-O1", "-T", ...]`), but
main.typ:1615 claims "All 6 behavioral tests pass at every optimization level (`-O0`
through `-Os`)". The claim is currently unsupported. The historically interesting bugs
(IRA corruption, combine substitution — main.typ §sc1-corner-cases) only appear at
-O2/-O3/-Os, exactly the levels behav.py never exercises.

Same issue in `tests/sc0/behav.py` (check it — likely also single-level).

## Fix

Copy the pattern already used by `tests/sc1/main.py` and `torture_behav.py`:

- Add `OPT_LEVELS = ["-O0", "-O1", "-O2", "-O3", "-Os"]`.
- Add `--opt` repeatable CLI flag (see torture_behav.py:91-92 for the argparse pattern).
- Loop `for opt in opts:` inside the per-source loop; put the level in the printed name
  (`f"{src.name} {opt}"`) and in the elf filename (`f"{src.stem}{opt}.elf"`).

Total runtime stays trivial (6 tests × 5 levels, each a fraction of a second on Spike).

## Verify

```sh
cd tests/sc1 && just behav        # should now report 30/30
cd ../sc0  && just behav          # 8 tests × 5 = 40
```

If any level fails, that is a real synthesis bug — do not paper over it; file it like
improvements/01.

## Update docs

main.typ:1615 becomes truthful. Update the counts there (6 tests → 30 cases) and in the
rvsc0 section (main.typ:1551, "All 8 behavioral tests pass" → 40 cases).
