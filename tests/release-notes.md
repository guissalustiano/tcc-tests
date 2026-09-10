Prebuilt GCC 17.0.0 cross-toolchains for the eight `rvscN` targets — the
progressive RISC-V subsets modelling the Hennessy-Patterson single-cycle
processor used in PCS3225 at Escola Politécnica, USP.

Each archive is a self-contained `x86_64-linux` toolchain: binutils (`as`, `ld`,
`objcopy`, `objdump`), the C compiler, and — from sc1 up — newlib and libgcc.
Binaries are stripped; build from source with `just setup` if you need symbols.

| Target | ISA | Notes |
|---|---|---|
| sc0 | `lw sw beq add addi sub and or` | no `jalr`/`lui`, so no function calls; single-function programs only, no libc |
| sc1 | sc0 + `jalr` + `lui` | everything else synthesized: shifts, `xor`, `slt`, ordered branches, byte/halfword access |
| sc2 | rv32i − `fence` | full control flow |
| sc3 | rv32i | first target with `fence` |
| sc4 | rv64i | 64-bit |
| sc5 | rv64im | multiply/divide |
| sc6 | rv64imfd_zicsr | floating point |
| sc7 | rv64imafd_zicsr | atomics |

No `-mno-*` flag needs to be passed by hand: each target's header injects the
right set, so the restricted ISA is the default for that triple.

### Using one

```sh
tar xf rvsc1-unknown-elf-gcc17.0.0-x86_64-linux.tar.xz
export PATH=$PWD/rvsc1-unknown-elf-gcc17.0.0-x86_64-linux/bin:$PATH

rvsc1-unknown-elf-gcc -O2 -S prog.c -o prog.s          # inspect synthesis
rvsc1-unknown-elf-objdump -d -M no-aliases prog.o      # check the mnemonics
```

To produce an image for the processor's memory, link bare-metal against your own
linker script and convert:

```sh
rvsc1-unknown-elf-gcc -O2 -ffreestanding -nostdlib -T flat.ld \
    entry.S prog.c -o prog.elf
rvsc1-unknown-elf-objcopy -O binary prog.elf prog.bin
rvsc1-unknown-elf-objcopy -O verilog --verilog-data-width=4 prog.elf prog.hex
```

The README covers both steps in full, including the linker-script layout a flat
image needs.

### Verification

`SHA256SUMS` lists the checksum of every archive.

### Known limitation

sc0 has no `jalr`, so any construct that needs a libgcc helper call — integer
multiply and divide among them — cannot be compiled for it. This is a property
of the ISA subset, not of the build.
