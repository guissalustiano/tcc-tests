# Hand-written libgcc assembly emits instructions sc1 does not implement

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
