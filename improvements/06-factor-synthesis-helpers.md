# Factor duplicated synthesis sequences into riscv.cc helpers

## Problem

Three synthesis sequences are duplicated across `gcc/gcc/config/riscv/riscv.md` expand
bodies. Beyond maintenance risk, the thesis presents each synthesis as ONE proven
derivation (main.typ §sc1-synthesis); a single canonical emitter per derivation makes the
code↔proof correspondence auditable.

### Duplication 1: slt/sltu synthesis (2 copies)

- `@cbranch<mode>4` expand (~riscv.md:4526): emits sub/xor/and/xor/lshr (slt) or
  sub/not/and/xor/not/and/or/lshr (sltu) into a temp, then branches NE/EQ vs 0.
- `cstore<mode>4` expand (~riscv.md:4744): same sequences for LT/LTU, plus EQ/NE via
  `snez = lshr(diff | -diff, 31)` and inversions via `1 - result`.

Extract into riscv.cc (declare in riscv-protos.h):

    rtx riscv_emit_slt_synth (rtx dest, rtx a, rtx b, bool unsignedp);

Both expands call it; cstore keeps its inversion/EQ logic around the call.

### Duplication 2: no-LUI constant construction (~5 copies)

The "build 0xFFFF by 16 add-self doublings when !TARGET_LUI" idiom appears in:
- `zero_extendhi<GPR:mode>2` expand (~1983), two paths
- `*zero_extendhi<GPR:mode>2` split body (~2085)
- `extend<SHORT:mode><SUPERQI:mode>2` expand (~2315) — mask + sign-bit constants
- `movhi` expand (~3023), twice (mask and value paths)

Extract:

    rtx riscv_emit_const_no_lui (machine_mode mode, rtx dest, HOST_WIDE_INT val);

Note: the post-reload split copy (~2085) cannot call gen_reg_rtx — give the helper a
"no new pseudos" contract (write only into dest) so it is usable both pre- and post-reload,
or keep the split copy separate with a comment cross-referencing the helper.

### Duplication 3: two XOR identities

- SImode (~1787): `(a|b) - (a&b)`
- `*xorhi3_noxor` (~3162): `a + b - 2*(a&b)`

Pick one identity (the SImode one — fewer insns, and it is the one to be documented per
improvements/04) and use it in both places.

## Verify

Pure refactor — the generated assembly should be identical:

```sh
cd tests/sc1
# before refactor: save .s output of every ISA test at -O1/-O2
just build install test && just behav && python3 torture_isa.py
# spot-diff a few .s files against the saved copies
```

Rebuild all sharing targets afterwards (CLAUDE.md invariant: sc1–sc7 share the backend).
