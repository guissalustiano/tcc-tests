# Rewrite the XOR derivation in main.typ: code no longer uses De Morgan

## Problem

The implementation changed but the thesis didn't. `gcc/gcc/config/riscv/riscv.md` (~line
1787, the `<optab><mode>3` any_or expand) synthesizes XOR as:

    a ^ b = (a | b) - (a & b)

with a comment explaining why: the old De Morgan form `~(a&b) & (a|b)` had no data edge
between the NOT result and `ab_ior`, so the register allocator aliased `neg` to op1's
register, corrupting `ab_ior` (an instruction-scheduling/RA hazard). There is also a second
identity in `*xorhi3_noxor` (riscv.md ~3162): `a + b - 2*(a & b)`.

But main.typ still presents De Morgan everywhere:

- §sc1-xor (main.typ:740-779): full De Morgan proof + truth table + cost table (6 insns, 1 reg).
- §sc1-example worked example (main.typ:1421-1430): traces the De Morgan expansion
  (`andsi3, one_cmplsi2, iorsi3, andsi3`) — no longer what the compiler emits.
- The `define_expand "xorsi3"` listing in §sc1-md (main.typ:1329-1342) shows the old body.
- ISA test tables (main.typ:1514, 1589): "XOR via De Morgan".
- CLAUDE.md also describes De Morgan.

## Fix

1. **§sc1-xor**: replace the derivation with `(a|b) - (a&b)`. Proof sketch: for each bit,
   a+b = (a XOR b) + 2*(a AND b) (full-adder identity), summed over bits with carries:
   a + b = (a^b) + 2*(a&b); also a|b = (a^b) + (a&b). Subtract: (a|b) - (a&b) = a^b.
   All arithmetic is exact modulo 2^32. New cost: 3 insns (or, and, sub), 1 temp — cheaper
   than the 6-insn De Morgan form; update the cost table and the synthesis cost summary
   table (both in main.typ and CLAUDE.md §4).
2. **§sc1-md listing**: paste the actual expand body from riscv.md ~1787.
3. **Worked example §sc1-example**: retrace with the new sequence (`iorsi3, andsi3, subsi3`).
4. **Add a 4th corner case** to §sc1-corner-cases (main.typ:1346): "Register aliasing in
   dataflow-disconnected synthesis sequences" — describe the De Morgan RA hazard from the
   riscv.md comment (~line 1787). It is a genuine finding of the same caliber as the three
   documented ones and motivates the identity change.
5. Decide whether `*xorhi3_noxor`'s `a+b-2*(a&b)` should be unified with the SI identity
   (see improvements/06); if kept, footnote it.
6. Update the two test-table cells and CLAUDE.md.

## Verify

```sh
rvsc1-unknown-elf-gcc -S -O1 -o - <<'EOF' | grep -E 'xor|not'
unsigned f(unsigned a, unsigned b){ return a ^ b; }
EOF
```
Empty output; the .s should show or/and/sub. Then `typst compile main.typ`.
