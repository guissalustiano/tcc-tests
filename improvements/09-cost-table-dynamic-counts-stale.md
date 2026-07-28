# `@tab-synthesis-cost`'s dynamic counts are stale by 2-4x on every looping row

> **STATUS: DONE.** Every row re-measured against the current backend and the table updated.
> The picture is more interesting than "understated 2-4x": the table was wrong in *both*
> directions.
>
> | row | was | now | |
> |---|---|---|---|
> | `srl` (var) | ~170 | **477** | understated 2.8x |
> | `sra` (var) | ~200 | **669** | understated 3.3x |
> | `lb`/`lbu` | ~80 | **608** | understated 7.6x |
> | `lh`/`lhu` | ~80 | **680** | understated 8.5x |
> | `sb` | ~100 | **308** | understated 3.1x |
> | `sh` | ~105 | **215** | understated 2.0x |
> | `slt` | ~60 | **49** | overstated |
> | `sltu` | ~70 | **48** | overstated |
> | `blt`/`bltu` | ~75 | **27** | overstated 2.8x |
> | `bge`/`bgeu` | ~75 | **28** | overstated 2.7x |
>
> The straight-line rows were all correct and are unchanged: `not` 2, `bne` 3, `jal` 5,
> `sll` (const) exactly $b$, `sll` (var) 187 -- measured 187, an exact match, which is what
> gave confidence in the method before trusting it on the rows that moved.
>
> **The constant-shift rows were also already right**, contrary to this task's premise:
> `srl` (const) measures 158 against a published 159, and `sra` (const) 194 against 195.
> They only look right if the operand is chosen correctly, which is the first of two traps.
>
> **Trap 1: the worst case depends on the data, not just the shift amount.** Each bit
> position is a conditional merge, so `srl` by 1 costs 158 instructions on an all-ones
> operand and 127 on zero. Measuring with an arbitrary value like `0x87654321` gives 139 and
> quietly understates the row.
>
> **Trap 2: sub-word loads are worst when *aligned*.** `lb` costs 608 instructions at offset
> 0 and 389 at offset 3, because the extraction shift gets cheaper as the offset grows. Any
> measurement that picks a "worst-case misaligned" address gets the wrong end of the range.
> This is why the earlier spot-check in improvements/06 reported 321 rather than 608: it
> scanned offsets but with a zero-filled buffer, so the data-dependence of trap 1 was
> invisible.
>
> **Method.** Call a one-operation function in a loop, difference the retired-instruction
> count between trip counts of 100 and 200, divide by 100. The loop and call overhead cancels
> exactly, and the per-iteration figure is exact rather than noisy. An earlier attempt
> differencing one call against two was useless -- the operations are pure, so with literal
> arguments GCC folds them into the caller or CSEs the second call away, giving deltas of
> zero and negative numbers. Operands must come from `volatile` storage and the function
> needs `noinline,noipa`. The harness is in the session scratchpad; it is small enough to
> rewrite but the two traps above are worth keeping.
>
> **rvsc0 is not covered.** It has no `jalr`, so there is no call to difference, and its
> costs genuinely differ in both directions: the loop back-edge is one `beq zero,zero`
> against rvsc1's three-instruction `lui`/`addi`/`jr`, while every wide constant costs an
> `addi`/shift construction instead of `lui`+`addi`. For `sh` that nets to 176 on rvsc0
> against 216 on rvsc1. The table now states that its figures are rvsc1 and explains the
> asymmetry rather than implying one number covers both.

Found while doing `improvements/06-cost-table-and-sh-mask-corrections.md`, which asked only
whether the `sh` row still held for rvsc0. It does not hold for **rvsc1** either, and neither
does any other row whose expansion contains a loop.

## Measured, rvsc1 at HEAD (`16de133341e`)

Method: link the single-operation function from `tests/sc1/tests/isa/<op>.c` into a program
that calls it once, and into an identical one that calls it twice at a different offset, and
difference the retired-instruction counts from `spike -g`. Everything but the extra call
cancels, so the difference is one operation plus about 7 instructions of call overhead (the
5-instruction `jal` synthesis, `ret`, argument setup). Offsets were scanned exhaustively
rather than assumed, because the worst case is not where intuition puts it (below).

| Operation | Table | Measured worst case | Ratio |
|---|---|---|---|
| `sb`  | ~100 | 295 (offset 3) | 3.0x |
| `sh`  | ~105 | 188-208 (offset 2) | ~1.9x |
| `lb`  | ~80  | 321 (offset 0) | 4.0x |
| `lbu` | ~80  | 321 (offset 0) | 4.0x |
| `lh`  | ~80  | 340 (offset 0) | 4.3x |
| `lhu` | ~80  | 337 (offset 0) | 4.2x |

Full offset scans, per call:

```
sb:   off0=7    off1=103  off2=199  off3=295
sh:   off0=10   off2=188
lb:   off0=321  off1=302  off2=286  off3=270
lbu:  off0=321  off1=302  off2=286  off3=270
lh:   off0=340  off2=305
lhu:  off0=337  off2=302
```

Two things worth keeping from that scan:

- **Stores and loads have opposite worst cases.** A store gets more expensive with offset
  (7 -> 295 for `sb`) because the value and mask must be shifted further left. A load gets
  *cheaper* (321 -> 270) because the SRL synthesis is a bit-extraction loop whose cost falls
  as the shift amount rises --- the same effect already documented for constant shifts, where
  `shr1` costs 159 instructions and `shr31` only 39. So the worst case for `lb`/`lh` is an
  *aligned* address, which is the opposite of what "worst-case misaligned access" suggests,
  and is why the table's numbers cannot be spot-checked by picking one offset.
- A hand-count of the emitted `test_sh` sequence (16 setup + 93 + 10 + 93 + 4 = 216 for
  bit_off=16) agrees with the 203-208 measured, so the analytic method and the dynamic
  measurement corroborate each other.

## rvsc0 is cheaper than rvsc1 here, not more expensive

`improvements/06` assumed rvsc0's `sh` would cost *more*, since it must build `0xFFFF`
through the `addi`/shift construction rather than `lui`+`addi`, "where the mask alone costs
up to 25 instructions". Counting the emitted sequence (rvsc0 has no `jalr`, so it cannot be
measured by differencing calls) shows the opposite:

| | rvsc0 | rvsc1 |
|---|---|---|
| setup, straight-line | 38 | 16 |
| shift loop x2, bit_off=16 | 63 + 63 | 93 + 93 |
| mid-block + tail | 8 + 4 | 10 + 4 |
| **total** | **176** | **216** (203-208 measured) |

rvsc0 does pay +22 in setup for materializing `0xFFFF` twice without `lui`, exactly as the
corrected prose in main.typ:1072 now describes. But it saves far more in the loops: its back
edge is a single `beq zero,zero,L`, against `lui t0 / addi t0 / jr t0` on rvsc1, so each of
the ~31 continuing iterations is 2 instructions cheaper. The setup penalty is paid once; the
back-edge saving is paid per iteration, and the second wins.

So the `sh` row should eventually be split by target, but in the reverse of the direction 06
anticipated. The same back-edge asymmetry applies to every looping row, which means the
rvsc0 and rvsc1 columns will diverge throughout the table, not just here.

Cross-check on method: the analytic count gives 216 for rvsc1 where differencing measures
203-208 (of which ~7 is call overhead, so a body of ~196-201). Analytic counting therefore
runs roughly 10% high, presumably by charging setup instructions that the scheduler overlaps
or that get hoisted; treat it as an upper bound rather than an exact figure.

## Probable cause

Every synthesis loop's back edge is a jump, and on rvsc1 (`!TARGET_AUIPC`) the `jump` pattern
emits `lui t0,%hi(L); addi t0,t0,%lo(L); jr t0` --- 3 instructions where a plain `j` is 1.
That is +2 per iteration on every loop in every synthesis, which multiplies out to exactly
the kind of 2-4x drift seen here. The figures most likely date from before the `!TARGET_AUIPC`
jump synthesis reached its current form. `improvements/06` item 2 noted in passing that this
back-edge cost is "already load-bearing in the SLL variable-count analysis (main.typ:860)";
it is load-bearing in every row of the table.

## Not yet measured

The remaining looping rows were not measured and should be assumed equally stale:
`sll` (var, 187), `srl` (var, ~170), `sra` (var, ~200), `slt` (~60), `sltu` (~70),
`blt`/`bltu` and `bge`/`bgeu` (~75), and `lui` on rvsc0 (25). The constant-length rows
(`not` 2, `xor` 3/4, `ori`/`andi` 2, `bne` 3, `jump` 1/3, `jal` 5) are straight-line and were
re-derived recently, so they are fine.

## Why this was left as one task rather than folded into 06

Correcting the six memory rows alone would make the table *less* coherent, not more: `sb`
expands to two variable SLL loops, so a table asserting `sb` = 295 next to `sll` (var) = 187
contradicts itself. The rows have to move together, which means measuring all of them and
re-deriving the analytic worst case for each --- a different job from the four small
corrections 06 asked for.

## Suggested method

The differencing harness is a few lines and worth keeping; for rvsc1 it is reliable. Note two
traps found the hard way:

- Repeating the operation on the *same* pointer measures far too little, because GCC hoists
  the mask and shift-amount computation out of the second occurrence. Each repetition needs
  its own pointer and value.
- rvsc0 cannot be measured this way at all: it has no `jalr`, so there is no call to
  difference. Its costs have to come from analytic counting of the `-S` output, which the
  `test_sh` cross-check above shows is accurate to a few percent.

## Verify

Numbers should satisfy the structural identities, e.g. `sb` and `sh` are roughly two variable
shifts plus a handful of RMW instructions, and `lb`/`lh` roughly one variable shift plus a
mask. If a re-derived table does not, something is still wrong.
