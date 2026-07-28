# Hand-written libgcc assembly emits instructions sc1 does not implement

> **STATUS: DONE**, fixed in gcc `f2e7bfaecbb`. The check it prompted also found a larger
> issue, tracked separately as item 11.
>
> Fixed by replacing `div.S` and `muldi3.S` with `libgcc/config/riscv/divmul_rvsc.c`, via a
> new `t-rvsc-noshift` fragment applied to **rvsc0 and rvsc1 only**. `libgcc.a` for both now
> contains **zero** shift instructions. rvsc2 and above implement shifts natively, so the
> assembly is legal there and is kept -- scoping this wrongly to every rvsc target cost rvsc2
> a factor of two on 64-bit-multiply-heavy benchmarks and pushed its geomean against upstream
> GCC 17 from 1.004 to 1.774, breaking its role as a faithful baseline.
>
> Two further things had to be scoped the same way, having previously applied to every rvsc
> target: the `multi3_rvsc.c` replacement and the blanket `-O0` on `libgcc2.c`. Both are
> workarounds for IRA misbehaviour inside synthesis loops, which exist only where the ISA is
> missing the instruction, and both were slowing rvsc2 for nothing.
>
> Note that "option 1" as written below -- drop the `.S` files and let `libgcc2.c` supply the
> C versions -- does not work: `libgcc2.c` has no SImode divide or multiply units at all. The
> five symbols those two files actually provide here are `__divsi3`, `__modsi3`, `__udivsi3`,
> `__umodsi3` (from `div.S`) and `__mulsi3` (from `muldi3.S`, which renames `__muldi3` to it
> when `__riscv_xlen == 32`). Every DImode routine already comes from `libgcc2.c` and was
> untouched. So the replacement had to be written, not merely enabled.
>
> The C is written for cheap synthesis rather than idiomatically: **it contains no right
> shifts**. On these targets a constant `>> 1` expands to a bit-extraction loop of about 159
> instructions while `<< 1` is a single `add`, so a textbook shift-add multiply would have
> cost roughly 32 x 159 instructions per call. Both routines walk bits upward instead,
> shifting the operand or the mask left. Division-by-zero semantics follow the RISC-V
> specification, matching the `div.S` being replaced: all ones for the quotient, the dividend
> for the remainder.
>
> **The larger finding.** Extending the check to the linked ELF, as the "Also worth doing"
> section below suggested, shows the library was never the whole story. A linked sc1 program
> still contains `auipc`, `andi`, `bgeu`, `bltu`, `bne`, `csrrw`, `ecall`, `jal`, `sb` and
> `slli`. Two separate sources:
>
> 1. **`auipc` from libcalls.** Ordinary calls in compiler output correctly use
>    `lui`/`jalr` -- verified on a one-line test -- but a middle-end libcall such as the
>    `__mulsi3` reference inside `_divdi3.o` is emitted as a `call` pseudo, which the
>    assembler expands to `auipc ra / jalr ra` with an `R_RISCV_CALL_PLT` relocation that the
>    linker does not relax away. That is a backend gap, not an assembly-source gap, and it is
>    not fixed here.
> 2. **The C runtime.** `csrrw` and `ecall` come from the HTIF/syscall layer, and the rest
>    from newlib objects. Whether those are in scope depends on whether the pedagogical claim
>    covers the runtime or only the user program.
>
> Neither affects any measurement in the thesis, since Spike executes all of it. Both are
> tracked as item 11 rather than silently folded in here, because "the linked program is
> ISA-clean" is a materially stronger claim than "every object the compiler produced is
> ISA-clean", and only the second one is currently true.

Found while fixing `improvements/08`. Independent of it, and not covered by any existing
test, because every ISA-compliance check in this project inspects *compiler output* and
never inspects the library the program is linked against.

## Symptom

`libgcc.a`, built by the sc1 compiler itself, contains native shift instructions:

```sh
OBJ=tests/sc1/build/install/bin/rvsc1-unknown-elf-objdump
$OBJ -d -M no-aliases \
  tests/sc1/build/install/lib/gcc/rvsc1-unknown-elf/17.0.0/libgcc.a \
  | awk '/file format/{f=$1} /\t(slli|srli|srai|sll|srl|sra)\t/{print f, $0}'
```

```
muldi3.o:   14:  0015d593   srli  a1,a1,0x1
muldi3.o:   18:  00161613   slli  a2,a2,0x1
div.o:      24:  00161613   slli  a2,a2,0x1
div.o:      28:  00169693   slli  a3,a3,0x1
div.o:      40:  0016d693   srli  a3,a3,0x1
div.o:      44:  00165613   srli  a2,a2,0x1
```

`srli`/`slli` are not in the sc1 instruction set. Any sc1 program that multiplies or
divides calls `__mulsi3` / `__divsi3` and executes them.

## Cause

These two objects are not compiled from C. Upstream libgcc ships `libgcc/config/riscv/div.S`
and `libgcc/config/riscv/muldi3.S`, hand-written assembly. `-mno-shift` is a compiler flag
and has no effect on `.S` sources, so the whole synthesis mechanism is bypassed. The
restriction is enforced on everything GCC *generates* and silently not enforced on anything
GCC merely *assembles*.

This is why it survived: `main.py` and `torture_isa.py` both disassemble compiler-produced
objects. Neither ever looks at `libgcc.a`, and the behavioral tests run on Spike with
`--isa=rv32imac_zicsr_zifencei` (what pk needs), which happily executes the forbidden
instructions rather than trapping. So the gap is invisible from both directions at once --
the static checker does not look, and the dynamic checker cannot fail.

## Why it matters

It does not affect any measurement in the thesis: Spike executes the instructions, so all
behavioral and Embench results stand. It matters for the thesis's central claim. §7 states
that every generated object "contained only the ten instructions sc1 implements"; that
remains true as written, but a *linked program* does not have that property, and the
pedagogical promise is that a student can run the binary on the processor they built. On real
sc1 hardware, any program using `/`, `%` or `*` on values the compiler cannot fold would hit
an illegal instruction.

## Fix options

1. Force the C implementations. libgcc's `t-rvsc` fragment (already used by these targets to
   set `HOST_LIBGCC2_CFLAGS += -O0`) can drop `div.S`/`muldi3.S` from `LIB1ASMFUNCS` so the
   generic `libgcc2.c` versions are compiled instead, going through the normal synthesis
   path. Cheapest and most in keeping with the rest of the port.
2. Provide sc1 variants of the two `.S` files with the shifts written out as `add`/loop
   sequences. Duplicates synthesis logic in assembly, which is exactly what the machine
   description exists to avoid.

Option 1 is the obvious one; the shift-by-one operations in these routines are the cheapest
possible case for the synthesis (`slli x,1` is one `add`).

## Also worth doing

Extend the ISA check to the linked artefact rather than only to objects: disassembling the
final ELF of each behavioral test and running the same allowlist over it would have caught
this on day one, and would catch any future library gap. That is a stronger check than the
per-object one and subsumes it.

## Verify

After fixing, the awk command above should print nothing, and a linked behavioral ELF should
pass the allowlist check end to end.


## Postscript: the trap this exposed

Enabling C `__mulsi3` initially broke 24 torture cases, and the cause was neither the C nor
the backend. `include/longlong.h` defines `__muluw3` as inline asm calling `__mulsi3` with a
clobber list of only `"ra", "a2", "a3"`, under the comment *"We rely on the fact that MULUW3
doesn't clobber the t-registers."* That is a property of `muldi3.S`, not of the symbol, and
nothing enforces it. A C `__mulsi3` uses whatever caller-saved registers the allocator picks,
so the asm silently corrupted its caller: `__muldi3` returned wrong cross terms whenever the
high word of either operand was nonzero, surfacing as wrong results from any 64-bit multiply.

Targets without the assembly now define `__RVSC_NO_MULASM__` and get an ordinary
multiplication with a compiler-generated clobber set; every other target keeps the asm form
untouched.

Worth noting how this was diagnosed, because the obvious reading was wrong: `__mulsi3` itself
was verified correct against 605 host-computed products, and `__divsi3`/`__modsi3`/`__udivsi3`/
`__umodsi3` against a further 4 441 cases. Comparing against the rvsc2 toolchain was actively
misleading, since its `libgcc` was a different build; only checking against host-computed
values isolated the fault to the caller rather than the callee.
