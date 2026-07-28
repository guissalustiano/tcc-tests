# A linked sc1 program is not ISA-clean, even though every compiled object is

Found while fixing `improvements/10`, by doing the thing that item's "Also worth doing"
section suggested: running the mnemonic allowlist over a linked ELF instead of over objects.

## Symptom

Every check in this project passes and the linked program still contains instructions sc1
does not implement:

```sh
CC=tests/sc1/build/install/bin/rvsc1-unknown-elf-gcc
OBJ=tests/sc1/build/install/bin/rvsc1-unknown-elf-objdump
$CC -O2 -ffreestanding prog.c -T tests/sc1/pk32.ld -lsim -o prog.elf
$OBJ -d -M no-aliases prog.elf \
  | awk '$1 ~ /^[0-9a-f]+:$/ && NF>=3 {print $3}' | sort -u \
  | grep -vwE 'lw|sw|beq|add|addi|sub|and|or|lui|jalr'
```

gives `andi auipc bgeu bltu bne csrrw ecall jal sb slli`.

This is not a regression and does not affect any result in the thesis: Spike runs with an
`--isa` wide enough to execute all of it, so every behavioral and Embench number stands. It
matters for what §7 is entitled to claim. "Every object the compiler produced contains only
the ten instructions sc1 implements" is true and is what the suites verify. "A student can
run the binary on the processor they built" is stronger, and is currently false.

## Two independent causes

### 1. `auipc` from middle-end libcalls (a backend gap)

Ordinary calls are fine. Compiling

```c
extern int ext (int);
int f (int x) { return ext (x) + 1; }
```

gives `lui` + `jalr`, no `auipc`, as the `!TARGET_AUIPC` call synthesis intends.

But a libcall the middle end emits itself does not take that path. In `_divdi3.o`, the
reference to `__mulsi3` is:

```
4b90:  00000097   auipc ra,0x0
       R_RISCV_CALL_PLT  __mulsi3
4b94:  000080e7   jalr  ra,0(ra)
```

That is the assembler expanding a `call` pseudo-instruction, and the linker does not relax
it away. So the `!TARGET_AUIPC` handling covers calls that go through the backend's call
patterns but not whatever path emits these. Worth checking
`riscv_legitimize_call_address` against `emit_library_call` targets, and whether the
`SYMBOL_REF` for a libcall is being classified differently from a normal function symbol.

This one is squarely this work's own defect and is the part worth fixing.

### 2. The C runtime (a scope question, not obviously a defect)

`csrrw` and `ecall` come from the HTIF/syscall layer, and the remaining mnemonics from
newlib objects. Some of this is unavoidable in any runtime that has to talk to a host: a
bare-metal sc1 processor has no `ecall` target to talk to.

The honest resolution is probably to decide what the claim covers, and to say so in §7:
either the user program only, in which case the runtime is explicitly out of scope, or the
whole image, which then requires an sc1-clean newlib and a syscall-free runtime for the
bare-metal case. rvsc0's own behavioral harness already goes the second way, running
bare-metal with a hand-written `entry.S` and no libc at all.

## Suggested fix

Add a linked-ELF allowlist check to the behavioral harnesses, which subsumes the per-object
check and would have caught both this and the libgcc `.S` problem immediately. Report it
separately from the per-object result so the two claims stay distinguishable, since they are
genuinely different claims and only one of them currently holds.

## Verify

The per-object checks (`main.py`, `torture_isa.py`) should continue to pass unchanged; the
new check is the one that should go from failing to passing as each cause is addressed.
