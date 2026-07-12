# Script the missing Program Size / Performance data for the Results chapter

## Problem

Two Results sections in main.typ are TODO placeholders with the exact commands already
written in comments:

- **Program Size** (main.typ:1678-1685): needs static instruction counts for programs
  compiled by rvsc0/rvsc1/rvsc3, via
  `riscv32-none-elf-objdump -d <elf> | grep -c '^\s\+[0-9a-f]\+:'`.
  Wanted table: Program | rvsc3 insns (native) | rvsc1 insns | expansion ratio.
- **Program Performance** (main.typ:1693-1714): needs dynamic retired-instruction counts
  via `spike --log-commits --isa=rv32i <elf> 2>&1 | grep -c '^[0-9]'`.
  The SLL table (main.typ:1695-1707) has a "rvsc1 (measured)" column full of TODOs, with
  predictions 3+4b for b ∈ {0,1,8,16,31}.

The comparison target rvsc3 needs a built toolchain (`tests/sc3/` — check whether `just
setup` has been run there; if not, that's a prerequisite; alternatively use
`riscv32-none-elf-gcc -march=rv32i` as the "native" baseline, which is what the reference
compiler already is — simpler and equivalent for counting).

## Fix

Create `tests/sc1/measure.py`:

1. **Size**: for each of a fixed program list (suggestion: `tests/behav/logic.c` (xor),
   `tests/behav/shift.c`, `tests/behav/mem.c` (sb)) compile with rvsc1 and the reference
   rv32i toolchain at -O1, count objdump instruction lines per the command above, print a
   markdown/typst-ready table with the ratio.
2. **Perf**: small dedicated sources per shift amount (a `volatile` operand shifted by
   0/1/8/16/31), compiled both ways, run under Spike with `--log-commits`, count retired
   instructions. To isolate the SLL cost from startup overhead, also run an empty-body
   baseline and subtract, or use bare-metal linking like the sc0 flow (entry.S) instead of
   pk (pk boot retires millions of instructions — subtracting a baseline is essential if
   pk is used).
3. Add `justfile` recipes: `measure-size`, `measure-perf` writing into `results/*.csv`.
4. Fill main.typ: replace the two TODO blocks and the SLL TODO column with generated
   numbers; sanity-check measured SLL counts against the 3+4b prediction (they should match
   within the setup-instruction constant; if not, investigate before publishing).
5. Then write the Discussion section (main.typ:1716-1728 TODO) — the three paragraphs are
   already outlined in the comment.

## Verify

`just measure-size measure-perf` reproduces the tables from a clean build;
`typst compile main.typ` renders without TODO markers in ch-results.
