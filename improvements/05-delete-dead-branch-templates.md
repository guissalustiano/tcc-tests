# Remove dead raw-asm SLT branch templates from *branch<mode>

## Problem

`define_insn "*branch<mode>"` in `gcc/gcc/config/riscv/riscv.md` (~line 4346) still contains
multi-line asm templates that synthesize LT/GE/LTU/GEU branches inline using hardcoded
scratch registers t2/t3/t4 **without declaring RTL clobbers**. The pattern's condition was
fixed to make them unreachable:

    "!TARGET_XCVBI && (TARGET_SLT
     || GET_CODE (operands[1]) == EQ || GET_CODE (operands[1]) == NE)"

so when `!TARGET_SLT` only EQ/NE can match, and `@cbranch<mode>4` (~line 4526) intercepts
ordered comparisons and emits the slt/sltu synthesis into pseudos. The raw templates are
dead code — but they are a landmine: if the condition ever drifts (or a future pattern
bypasses cbranch4, e.g. via ifcvt/ce passes), combine can again form these insns and
silently corrupt t2–t4. This is exactly corner case #2 in main.typ (§ "Combine-Pass
Substitution of Unclobbered Hard Registers", line 1374-1397); keeping the offending
templates undercuts the fix.

## Fix

In the `*branch<mode>` output C block:

1. Delete the LT/GE/LTU/GEU raw-asm synthesis strings for the `!TARGET_SLT` case.
2. In their place put `gcc_unreachable ();` with a one-line comment pointing at the
   cbranch4 intercept.
3. Keep the legitimate cases: native branches (TARGET_SLT / full ISA), the `!TARGET_BNE`
   NE→beq+lui+addi+jr synthesis, the sc0 `beq zero,zero` form, and the length==20
   long-range EQ form.
4. Check the pattern's `length` attribute computation — remove any length arms that only
   existed for the deleted templates.

## Verify

```sh
cd tests/sc1 && just build install test    # 95 ISA cases
python3 torture_isa.py                     # no forbidden mnemonics
just behav
```

If anything now ICEs at `gcc_unreachable`, that is a path reaching the branch pattern
without going through cbranch4 — investigate; that path was silently corrupting registers
before.
