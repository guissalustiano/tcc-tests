# Restore a differential behavioral test layer (reference compiler comparison)

## Problem

The behavioral tests (`tests/sc1/behav.py`, `tests/sc1/torture_behav.py`) are purely
self-validating: PASS iff Spike exits 0. Self-validating tests cannot detect the case where
the *checking code itself* is miscompiled symmetrically (e.g. a broken comparison synthesis
that makes `if (result != expected)` never trigger).

Additionally, main.typ's Method chapter (validation approach) and the Discussion TODO
(main.typ:1722-1724) still describe *differential* validation against a reference compiler —
the document promises something the harness no longer does.

## Fix

In `tests/sc1/behav.py`, for each test source also:

1. Compile with the reference toolchain:
   `riscv32-none-elf-gcc -march=rv32i -mabi=ilp32 -O1 -T pk32.ld src -lsim -o ref.elf`
   (riscv32-none-elf is the system toolchain; check `-lsim`/pk32.ld work for it — they
   should, both are plain newlib+pk conventions. If the reference toolchain lacks libsim,
   fall back to `-march=rv32imac`/default pk flow.)
2. Run both ELFs under Spike (`run_spike` in tests/common.py, pk=$PK).
3. PASS iff **both exit codes are equal** (not merely both zero) — this way a test source
   with a deliberate nonzero exit still validates equivalence.

Keep the self-validating exit-0 check too: `PASS iff rc_sc1 == rc_ref and rc_ref == 0`
for the curated behav tests (they are written to exit 0), but print a distinct message when
`rc_sc1 == rc_ref != 0` (test bug, not compiler bug).

Optionally do the same in torture_behav.py behind a `--diff` flag (doubles runtime; the
torture programs are already designed self-validating, so default off is fine).

## Verify

```sh
cd tests/sc1 && just behav
```

All pass; deliberately break one synthesis (e.g. flip a constant in the slt synthesis in
riscv.md) and confirm the differential harness catches it while rebuilding.

## Update docs

- main.typ Results §sc1-behav-tests (line 1598): describe the differential check.
- main.typ Discussion TODO (line 1722): the "behavioral equivalence" paragraph becomes
  writable as stated.
- CLAUDE.md "Behavioral tests" section: already describes differential testing (stale in the
  other direction — it names startup32.S/HTIF; rewrite to match the pk-based reality).
