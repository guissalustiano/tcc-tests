# Purge pre-unroll "constant shifts are loops" prose from main.typ

Commit `c708790` ("sc1: unroll SRL/SRA synthesis for constant shift counts") made
constant-count SLL/SRL/SRA expand to straight-line code. §6 of main.typ was updated in
that commit; §7 (Results) and §8 (Conclusion) were **not**. Four passages still describe
the pre-unroll behaviour, and one of them proposes the already-completed work as future
work.

## Problems

1. **main.typ:1582 — Future Work proposes work already done.**
   > "Constant-amount shifts are currently synthesized as loops, even though the shift
   > amount is known at compile time and could instead be unrolled statically, reducing
   > the per-shift cost from $6b + 1$ to $2b$ instructions without any new hardware. This
   > would require a separate `define_expand` branch for `CONST_INT_P` shift counts."

   This is exactly what `c708790` implemented. The cost figure is also wrong twice over:
   the achieved SLL constant cost is $b$, not $2b$, and main.typ:858 already says so.

2. **main.typ:1466 — pre-unroll cost claim in §Program Size.**
   > "_Variable-length_ expansions depend on runtime values: SLL, SRL, and SRA use
   > count-down loops whose length is proportional to the shift amount, with worst-case
   > counts of 187, ~170, and ~200 instructions respectively for a shift of 31."

   Only the variable-count forms loop now. The paragraph's two-category split
   (constant-length vs variable-length) needs a third case, or the shift entry needs to
   be qualified as variable-count only.

3. **main.typ:1578 — Limitations.**
   > "The synthesis is inherently sequential: the GCC machine description expands a shift
   > at compile time into a counted loop, which at run time executes one iteration per bit
   > position."

   True only for variable counts. Constant-count shifts are straight-line; the remaining
   limitation is that they are still *linear* in the shift amount (159 instructions for
   `x >> 1`), not that they loop.

4. **main.typ:1550 and 1568 — attribution of the dynamic penalty.**
   - 1550: "the costliest syntheses of the shift loops, each of which re-materializes its
     own back-edge every iteration (@sc1-sll)" — back-edge re-materialization is now a
     variable-count-only cost.
   - 1568: "an outcome expected from the worst-case shift loop depth of 187 instructions
     per operation" — 187 is the variable-count SLL figure; needs the qualifier.

## Fix

- Delete the first paragraph of §Future Work (main.typ:1582) entirely. If a replacement
  future-work item is wanted in its place, the honest one is: *constant-count SRL/SRA are
  unrolled but still linear in the shift amount (159 / 195 instructions worst case); a
  bitmask-and-recombine formulation could bring this down, and the variable-count forms
  still pay 6 instructions per iteration because the back-edge is re-materialized.*
- Rewrite main.typ:1466 to distinguish constant-count (straight-line, worst case 31 / 159
  / 195) from variable-count (looping, worst case 187 / ~170 / ~200). Both sets of numbers
  are already in `@tab-synthesis-cost` (main.typ:1126-1131) — keep them consistent.
- Qualify main.typ:1550, 1568, and 1578 with "variable-count" wherever they attribute cost
  to loop back-edges or per-bit iteration.

Do **not** touch the §6 shift subsections (main.typ:838-911) or the appendices
(`@apx-sll-const-asm`, `@apx-srl-const-asm`, `@apx-sra-const-asm`) — those are already
correct as of `c708790`.

## Verify

The measured constant-count worst cases were reconfirmed against the installed toolchain:

```sh
export PATH=/home/salust/p/scgcc/tests/sc1/build/install/bin:$PATH
rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/srl.c -o /tmp/srl.s
rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/sra.c -o /tmp/sra.s
rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/shift.c -o /tmp/shift.s
```

Per-function instruction counts (excluding labels and directives):

| function | count |
|----------|-------|
| `shift3` (`x << 3`)  | 4   |
| `shr0`  | 1   |
| `shr1`  | **159** (constant-count SRL worst case) |
| `shr3`  | 151 |
| `shr31` | 39  |
| `sra0`  | 1   |
| `sra1`  | **195** (constant-count SRA worst case) |
| `sra3`  | 185 |
| `sra31` | 45  |

After editing, `grep -n 'counted loop\|count-down loop\|6b + 1' main.typ` should return
only hits inside §6's *Variable shift count* paragraphs (main.typ:860, 886, 911) and the
rvsc1 ISA test table row for `sll_var` (main.typ:1391).

Then `typst compile main.typ` must succeed with no unresolved references — note that
deleting the Future Work paragraph removes no labels, so nothing should break.
