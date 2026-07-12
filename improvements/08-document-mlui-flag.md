# Document the mlui flag (exists in code, missing from all flag tables)

## Problem

`gcc/gcc/config/riscv/riscv.opt` (~line 431) declares:

    mlui
    Target Var(TARGET_LUI) Init(1)
    ... -mno-lui synthesizes large constants via constant pool lw from x0 ...

It gates real behavior:
- riscv.cc:2072 (`riscv_legitimate_constant_p`) and riscv.cc:2092
  (`riscv_cannot_force_const_mem`): non-SMALL_OPERAND constants forced to the pool.
- riscv.cc:3033 (`riscv_split_symbol`): pool entries addressed as `lw rd, %lo(sym)(x0)`.
- riscv.md `jump` (~5097): `!TARGET_LUI` → `beq zero,zero,%l0`.
- riscv.md `indirect_jump`/`tablejump` (~5143/5180) and call patterns (~5339+):
  gated on `TARGET_LUI`.

But it is absent from:
- main.typ `@tbl-flags` (line 1289-1311) — the thesis's authoritative flag list.
- CLAUDE.md "Target options" table.
- Presumably `rvsc0.h` CC1_SPEC is the only place that injects `-mno-lui` — confirm.

The §sc0-lui section (main.typ:1058-1098) documents the *synthesis* but never names the
flag that controls it.

## Fix

1. Add a row to main.typ @tbl-flags: `-mlui | TARGET_LUI | rvsc0` (disabled for rvsc0 only).
2. In §sc0-lui, after "Implementation choice", add one sentence naming `-mno-lui` and the
   two riscv.cc hooks (`TARGET_LEGITIMATE_CONSTANT_P`, `TARGET_CANNOT_FORCE_CONST_MEM`)
   plus the `riscv_split_symbol` x0-base trick — this is the "constant pool handling"
   riscv.cc role already promised by the file table at main.typ:613.
3. Add a row to CLAUDE.md's flag table:
   `-mlui | TARGET_LUI | large constants + jumps/calls via constant pool / beq zero,zero`.
4. Confirm `gcc/gcc/config/riscv/rvsc0.h` injects `%{!mlui:-mno-lui}`; quote its CC1_SPEC
   in the thesis if the registration section shows rvsc1's (main.typ:1442 shows rvsc1.h
   only — a footnote that rvsc0.h adds -mno-lui suffices). Note: CLAUDE.md claims "rvsc0
   has no header", which is false — rvsc0.h exists; fix that line too.

## Verify

`typst compile main.typ` builds; grep the PDF sources: every TARGET_* macro used in
riscv.md/riscv.cc custom code appears in @tbl-flags exactly once.
