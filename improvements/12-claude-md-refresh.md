# Refresh CLAUDE.md: ~6 points of drift vs the actual code/tests

## Problem

CLAUDE.md (repo root) describes an older state of the project. Known drift:

1. **Test file names/layout**: CLAUDE.md lists `tests/sc1/tests/sc1_add.c`,
   `behav_branch.c`, etc. Actual layout: `tests/sc1/tests/isa/add.c` and
   `tests/sc1/tests/behav/branch.c` (subdirs `isa/` and `behav/`, no `sc1_`/`behav_`
   prefixes — see TEST_GLOBs in tests/sc1/main.py and behav.py). Same for sc0.
2. **Behavioral test description**: CLAUDE.md describes differential testing with
   `startup32.S` (HTIF stub) + `link32.ld` + `--isa=rv32i`, comparing against
   `riscv32-none-elf-gcc`. Actual: pk-based self-validation — `-T pk32.ld -lsim`, run as
   `spike --isa=rv32imac_zicsr_zifencei $PK test.elf`, PASS iff exit 0, requires `PK` env
   var from the nix dev shell. (If improvements/03 restores a differential layer, describe
   the combined scheme.)
3. **ISA test opt levels**: CLAUDE.md says "compiles every .c ... with -S -O1"; main.py
   runs -O0/-O1/-O2/-O3/-Os.
4. **Missing torture runners**: `torture_isa.py` and `torture_behav.py` (and the
   `torture-isa`/`torture-behav` justfile recipes) are absent from CLAUDE.md's Testing
   section.
5. **XOR synthesis**: CLAUDE.md says De Morgan `~(a & b) & (a | b)`; code uses
   `(a|b) - (a&b)` (riscv.md ~1787). Update the riscv.md pattern summary AND the synthesis
   cost table (XOR: 6 insns → 3).
6. **`-mlui` flag missing** from the Target options table (see improvements/08), and the
   line "rvsc0 has no header; it relies on sc1-level flag injection" is false —
   `gcc/gcc/config/riscv/rvsc0.h` exists.
7. **Shift synthesis architecture**: CLAUDE.md describes the shift syntheses as living in
   the `define_expand` bodies; they were moved to post-reload `define_insn_and_split`
   patterns `lshrsi3_sc1` / `ashrsi3_sc1` / `ashlsi3_sc1_var` with match_scratch clobbers
   (riscv.md ~3642-3872) after the IRA corruption bug; the expands now just force_reg and
   dispatch. The "Adding a new sc1 synthesis" recipe should mention when the opaque-insn
   approach is needed (long/loopy syntheses).

## Fix

Walk each CLAUDE.md section against the current code and rewrite the stale parts. Verify
claims by reading, not memory: `tests/sc1/main.py`, `behav.py`, `torture_*.py`, `justfile`,
`riscv.md` custom regions, `riscv.opt`, `ls gcc/gcc/config/riscv/rvsc*.h`,
`ls tests/sc*/tests/`.

## Verify

Grep test: every filename, flag, and pattern name mentioned in CLAUDE.md exists in the
tree (`grep -o` the code identifiers and check with `ls`/`grep -rn`).
