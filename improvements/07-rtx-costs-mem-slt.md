# Extend RTX cost model to non-shift syntheses (mem extends/stores, slt, xor)

## Problem

`riscv_rtx_costs` in `gcc/gcc/config/riscv/riscv.cc` was patched for shifts only
(documented in main.typ:1399-1419):

    case ASHIFT: case ASHIFTRT: case LSHIFTRT:
      if (!TARGET_SHIFT && GET_MODE (x) == SImode)
        *total = COSTS_N_INSNS (CONSTANT_P (XEXP (x, 1)) ? 64 : 200);

But the other big syntheses still cost as ~1 native instruction:

| Synthesis                         | Actual cost (CLAUDE.md §4 / main.typ) | Current model |
|-----------------------------------|----------------------------------------|---------------|
| lb/lbu/lh/lhu (MEM extend)        | ~70–80 insns                           | ~1            |
| sb/sh (movqi/movhi MEM store)     | ~100–105 insns                         | ~1            |
| slt/sltu (!TARGET_SLT)            | ~60–70 insns                           | ~1            |
| xor (!TARGET_XOR)                 | 3 insns                                | 1             |

Consequence: the optimizer freely duplicates/inlines/hoists these, inflating function
bodies — the same mechanism that produced the IRA live-range-hole corruption for shifts
(main.typ corner case #1) and that feeds the pr38051 bug (improvements/01). Realistic costs
also make -Os actually shrink synthesized code.

## Fix

In `riscv_rtx_costs`, add (mirroring the shift precedent):

- `case ZERO_EXTEND: / case SIGN_EXTEND:` — if operand is MEM and
  (`!TARGET_BYTE` for QI inner mode, `!TARGET_HALF` for HI): `COSTS_N_INSNS (75)`.
- `case SET:` with MEM dest of QI/HI mode under the same flags: `COSTS_N_INSNS (100)`
  (check how upstream costs stores; may need handling in the memory-cost path instead).
- `case LT: case LTU: case GE: case GEU: case GT: case GTU:` (and the scc COMPARE path)
  when `!TARGET_SLT && GET_MODE == SImode`: `COSTS_N_INSNS (65)`.
- `case XOR:` when `!TARGET_XOR`: `COSTS_N_INSNS (3)`.

Exact numbers matter less than the order of magnitude; reuse the constants from the
synthesis cost table so docs and code agree.

## Verify

```sh
cd tests/sc1 && just build install test && just behav
python3 torture_behav.py   # expect: fewer -O2/-O3 timeouts than the 32 reported
```

Compare timeout list against main.typ @tbl-torture-timeouts (line 1642) — several
shift/mem-heavy programs should drop off the list. Update the table and the timeout count.
Beware regressions: overly large costs can pessimize (e.g. inhibit useful if-conversion);
if torture pass counts drop, tune down.
