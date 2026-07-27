# §6 corrections: `sh` mask on rvsc0, missing jump row, stale synthesis count

Three technical inaccuracies in the Development chapter's synthesis and cost material.
Independent of each other; all small.

## 1. main.typ:1072 — `sh` uses `lui` in a synthesis claimed for rvsc0

> "The `sh` synthesis follows the same read-modify-write pattern as `sb`, with `MASK = 2`
> and mask constant `0xFFFF`. Since `0xFFFF` exceeds the 12-bit `addi` range, it is
> materialized via `lui 0x10; addi -1`."

But `@tab-synthesis-cost` (main.typ:1141) lists `sh` as applying to **rvsc0, rvsc1**, and
rvsc0 has no `lui`. The text describes a sequence that target cannot execute.

The backend already handles this — `gcc/gcc/config/riscv/riscv.md` routes non-`SMALL_OPERAND`
constants through the addi/shift path when `!TARGET_LUI`:

```sh
grep -n 'TARGET_LUI' gcc/gcc/config/riscv/riscv.md | sed -n '1,20p'
# riscv.md:2411  ;; sc0 (!TARGET_LUI): all non-SMALL_OPERAND constants go through the
# riscv.md:2416  if (!TARGET_LUI && !SMALL_OPERAND (mask_val))
# riscv.md:2425  if (!TARGET_LUI && !SMALL_OPERAND (sign_val))
```

**Fix:** add the rvsc0 case — on rvsc1 the mask is `lui 0x10; addi -1`; on rvsc0 it goes
through `riscv_synthesize_const_no_lui` (@sc0-lui). Check whether the ~105-instruction and
3-extra-register figures in the cost table still hold for rvsc0, where the mask alone costs
up to 25 instructions; if they differ, split the row the way the shift rows are split.
The same question applies to the `0xFFFF` load in `*zero_extendhi<GPR:mode>2` — verify
before claiming a number.

## 2. main.typ:1111-1145 — `@tab-synthesis-cost` has no row for the synthesized jump

§8 Contributions (main.typ:1560) lists "call-site code generation (**JAL, JMP**)" among the
syntheses, §6 documents the unconditional-jump synthesis, and `riscv.md` implements it
(`lui t0,%hi(L); addi t0,t0,%lo(L); jr t0` for `!TARGET_AUIPC`; `beq zero,zero,L` for
`!TARGET_LUI`, riscv.md:5633-5636) — but the cost table stops at `jal`.

**Fix:** add a `jump` row. Costs from the backend: 3 instructions / 1 extra register for
rvsc1 (`lui`+`addi`+`jr`), 1 instruction / 0 extra registers for rvsc0 (`beq zero,zero`).
Note that the rvsc1 back-edge cost is already load-bearing in the SLL variable-count
analysis (main.typ:860), so having it in the table helps that argument.

## 3. main.typ:1560 — "eighteen distinct operations" no longer matches the table

`@tab-synthesis-cost` now has 20 rows (the `sll`/`srl`/`sra` const/var split added two in
`c708790`), and adding the `jump` row above makes 21. Either recount and state the new
number, or replace the count with a reference to the table so it cannot drift again — the
latter is preferable.

## 4. Cost-table units are now mixed (consider a footnote)

Since the const/var split, "Worst-case instructions" means two different things in one
column: the const rows are static, straight-line counts (which equal the dynamic count
modulo untaken `or`s), while the var rows are dynamic counts of a loop whose *static* size
is far smaller — e.g. `srl_var` is 26 static instructions but ~170 dynamic.

**Fix:** a footnote on the table stating that counts are dynamic (instructions retired for
the worst-case operand), and that the static footprint of the variable-count rows is much
smaller. This matters because §Program Size and §Program Performance draw on this table for
two different purposes.

## Verify

```sh
export PATH=/home/salust/p/scgcc/tests/sc1/build/install/bin:$PATH
# sh on rvsc1
rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/sh.c -o - | grep -n 'lui\|addi'
# and the rvsc0 equivalent, via tests/sc0
```

Then `typst compile main.typ` and confirm `@tab-synthesis-cost` still renders on one page.
