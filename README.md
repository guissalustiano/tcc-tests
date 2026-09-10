# Hannersy patterson compiler

A GCC target for the educational single-cycle RISC-V processor built in PCS3225 at
Escola Politécnica, USP. The processor implements only part of RV32I, so the backend
*synthesizes* every missing instruction from the ones the hardware actually has:
`xor` becomes `(a|b) - (a&b)`, a shift becomes repeated self-addition, a byte load
becomes a word load plus masking, and so on.

Eight progressive triples model the course's hardware stages:

| Target | Triple | ISA |
|---|---|---|
| sc0 | `rvsc0-unknown-elf` | `lw sw beq add addi sub and or` — no `jalr`, so no function calls |
| sc1 | `rvsc1-unknown-elf` | sc0 + `jalr` + `lui` |
| sc2 | `rvsc2-unknown-elf` | rv32i − `fence` |
| sc3–sc7 | `rvsc3..7-unknown-elf` | rv32i, rv64i, rv64im, rv64imfd, rv64imafd |

No `-mno-*` flag is ever passed by hand: each target's header injects the right set
through `CC1_SPEC`, so the restricted ISA is the default for that triple.

## Building the toolchain

Sources sit side by side under the repo root. All three carry their own git
history and are ignored by this repository, so a fresh checkout clones them:

```sh
git clone git@github.com:guissalustiano/gcc-hannersy-paterson.git gcc
git -C gcc checkout hannersy-patterson     # 32d629dcf2e4
git clone git@github.com:guissalustiano/binutils-gdb.git
git -C binutils-gdb checkout master        # eaf407cc
git clone git@github.com:guissalustiano/newlib-src.git
git -C newlib-src checkout master          # f4c2d6a8d0a5
```

Each target builds out of tree under `tests/scN/`.

```sh
cd tests/sc1
just setup        # binutils → gcc → newlib → libgcc, into build/install/
```

After editing `gcc/gcc/config/riscv/*`, rebuild just the compiler:

```sh
cd tests/sc1 && just build install
```

`just setup` is the four stages below in order; run them individually if a step
fails. The order is not arbitrary — GCC's `configure` must find the target
assembler and linker already installed, and newlib must be built by the compiler
it will be linked against.

```sh
# 1. binutils (as, ld, objcopy, objdump for the target)
just configure-binutils build-binutils install-binutils

# 2. gcc (C only, --with-newlib, binutils reused rather than rebuilt)
just configure build install

# 3. newlib (libc; skip for sc0, which cannot call functions)
just configure-newlib build-newlib install-newlib

# 4. libgcc, built against the newlib just installed
just build-libgcc install-libgcc
```

The result is a self-contained toolchain in `tests/scN/build/install/bin/`.

## Using the compiler

```sh
export PATH=$PWD/tests/sc1/build/install/bin:$PATH

# Compile to assembly, to see what synthesis produced
rvsc1-unknown-elf-gcc -O2 -S prog.c -o prog.s

# Compile to an object file
rvsc1-unknown-elf-gcc -O2 -c prog.c -o prog.o

# Check no forbidden instruction slipped through. -M no-aliases expands
# pseudo-instructions, so nothing hides behind "ret" or "li".
rvsc1-unknown-elf-objdump -d -M no-aliases prog.o
```

The individual flags stay available for experiments: `-mshift` re-enables native
shifts on an rvsc1 build, `-mno-shift` forces the synthesis on an rvsc2 build.
Full flag list in [CLAUDE.md](CLAUDE.md#5-target-options-gccgccconfigriscvriscvopt).

## Generating a binary for the processor's memory

A program for the real hardware has no OS and no proxy kernel: it needs an entry
point, a stack pointer, and a linker script placing sections where the hardware
decodes them. `tests/sc0/entry.S` is a working entry point.

```sh
rvsc1-unknown-elf-gcc -O2 -ffreestanding -nostdlib -fomit-frame-pointer \
    -T flat.ld entry.S prog.c -o prog.elf
```

The linker script must lay sections out **contiguously** for a flat image — the
scripts under `tests/` deliberately pin `.data` a megabyte above `.text` so two
builds stay byte-comparable, which `objcopy` would turn into a megabyte of zero
padding. A minimal contiguous `flat.ld`:

```ld
OUTPUT_ARCH("riscv")
ENTRY(_start)

SECTIONS
{
    . = 0x00000000;          /* start of instruction memory */
    .text   : { *(.text.entry) *(.text .text.*) }
    .rodata : { *(.rodata .rodata.*) }
    .data   : { *(.data .data.*) *(.sdata .sdata.*) }
    PROVIDE(__global_pointer$ = . + 0x800);
    .bss    : { *(.sbss .sbss.*) *(.bss .bss.*) *(COMMON)
                . = ALIGN(4); _end = .; }
    . = ALIGN(16);
    . += 0x1000;             /* 4 KiB stack */
    _stack_top = .;
}
```

Then strip the ELF down to the bytes as they sit in memory:

```sh
# Raw image: first byte = lowest load address, no header
rvsc1-unknown-elf-objcopy -O binary prog.elf prog.bin

# Verilog hex, one 32-bit word per line, for $readmemh
rvsc1-unknown-elf-objcopy -O verilog --verilog-data-width=4 prog.elf prog.hex

# Intel HEX, for loaders that expect it
rvsc1-unknown-elf-objcopy -O ihex prog.elf prog.ihex
```

`--verilog-data-width=4` matters: without it `objcopy` emits one byte per entry,
and a word-addressed memory loaded from that file runs the program byte-reversed
and four times too short.

Two checks worth running once on any new linker script:

```sh
rvsc1-unknown-elf-size prog.elf     # does it fit in the memory available?
od -A n -t x4 -v prog.bin | head    # first word must be _start's first insn
```

If `prog.bin` is far larger than `size` suggests, the script has a gap: `objcopy`
pads every address between the lowest and highest loadable section. `-j .text
-j .rodata` restricts the conversion when the layout cannot be changed.

On sc0 the same commands work with the `rvsc0-unknown-elf-` prefix, with one ISA
restriction: without `jalr` there is no return from a call, so the program must be
a single non-returning function.

## Testing

```sh
cd tests/sc1
just test          # ISA compliance: mnemonic allowlist over compiler output
just behav         # self-validating programs run on Spike via pk
just linked-isa    # allowlist over the whole linked ELF, libgcc and newlib included
just torture-isa   # same allowlist over gcc.c-torture/execute (1684 programs)
just torture-behav # those programs run on Spike
```

## Document

The written work lives in `tcc-latex/` (abntex2) and `main.typ` (Typst).

```sh
cd tcc-latex && just build
typst compile main.typ
```

Appendix A of the document covers the same toolchain usage as this README, with the
reasoning behind each step.
