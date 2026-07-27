# §7 small corrections: malformed asm, target mismatch, appendix line counts

Low-risk copy-level fixes in the Results chapter and appendices. None change a claim; all
are things a careful reader (or examiner) will catch.

## 1. Malformed `not` synthesis, twice

main.typ:1321 (rvsc0 ISA test table) and main.typ:1386 (rvsc1 ISA test table) both read:

> "NOT — synthesized as `sub x0, rs; addi rd, rd, -1`"

`sub` is missing its destination. The actual sequence (CLAUDE.md, and the `one_cmplsi2`
expand in `riscv.md`) is:

```asm
sub   rd, x0, rs
addi  rd, rd, -1
```

Fix both cells. Cross-check against main.typ's §6 NOT derivation, which is correct.

## 2. Same illustration, two different targets

- main.typ:1552 (§Discussion): "a student can compile the same source for rvsc1 and
  **rvsc3**, compare the `-S` output …"
- main.typ:1570 (§Results Summary): "compiling the same source for rvsc1 and **rvsc2** and
  diffing the assembly output …"

Same pedagogical point, two targets. Use **rvsc2** in both: it is the target the Embench
comparison actually uses as the native baseline (`@tbl-embench-perf` column header is
"rvsc2 (native)"), and main.typ:1566 already credits rvsc2 with a geomean ratio of 1.000
against upstream GCC 17. rvsc3 differs from rvsc2 only by `fence`, which is irrelevant to
the comparison and just invites the question of why that target.

## 3. Appendix listing lengths are off by one

- main.typ:1686: "The full **182**-line listing is reproducible via
  `rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/srl.c`"
- main.typ:1743: "The full **217**-line listing is reproducible via
  `rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/sra.c`"

Measured from the function label through its `ret`, `shr3` is **181** lines and `sra3` is
**216**:

```sh
export PATH=/home/salust/p/scgcc/tests/sc1/build/install/bin:$PATH
rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/srl.c -o /tmp/srl.s
rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/sra.c -o /tmp/sra.s
awk '/^shr3:/,/^\s+ret/' /tmp/srl.s | wc -l    # 181
awk '/^sra3:/,/^\s+ret/' /tmp/sra.s | wc -l    # 216
```

The consistent +1 suggests a different counting boundary (perhaps including the `.size`
directive). Since the text presents the command as reproducible, either match the boundary
the reader will use, or state what is being counted ("181 instructions between the label
and `ret`"). Instruction counts, if preferred, are 151 for `shr3` and 185 for `sra3`.

## 4. `-O0` skip explanation — confirm the mechanism

main.typ:1442 states three sources fail to link only at `-O0` "where the unoptimized
`sprintf` call survives to link time; at higher optimization levels GCC eliminates or
transforms the call before it reaches the linker." This is plausible and matches 57 vs 54,
but it is asserted rather than shown. Worth confirming which three sources they are and
that the mechanism is constant-folding of `sprintf` (rather than, say, DCE of an unused
call), so the sentence can name them. Related: `improvements/02-fix-torture-skip-breakdown.md`
rewrites the surrounding paragraph — do this at the same time.

## Verify

```sh
grep -n 'sub x0, rs' main.typ          # no hits after the fix
grep -n 'rvsc1 and rvsc3' main.typ     # no hits after the fix
typst compile main.typ
```
