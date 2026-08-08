# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Repository layout

Everything lives under `/home/salust/p/scgcc/` (the git repo root):

| Path | Purpose |
|------|---------|
| `gcc/gcc/config/riscv/` | RISC-V backend — `riscv.md`, `riscv.opt`, `riscv.cc`, `rvscN.h` headers |
| `gcc/gcc/config/config.gcc` | Triple mapping: `rvscN-*-elf*` → `cpu_type=riscv` |
| `gcc/gcc/config/config.sub` | Triple normalisation: recognises `rvscN` CPU names |
| `binutils-gdb/` | GNU Binutils source (untracked; assembler + linker) |
| `tests/` | Build/test workspace — one subdir per target (`sc0`–`sc2`) |
| `tests/scN/` | Per-target subdir — `justfile`, `build/`, `build-binutils/`, `build/install/`, `tests/` |
| `tests/sc1/tests/` | sc1 test sources — `isa/` (mnemonic allowlist) and `behav/` (run on Spike) |
| `tests/common.just` | Shared justfile recipes (configure, build, install for both binutils and gcc) |
| `main.typ` | Typst academic document (TCC at USP/Poli) |

**Source edits happen in `gcc/gcc/config/riscv/`.** Build directories are never edited directly. Files actually modified for this project: `riscv.md`, `riscv.opt`, `riscv.cc` (constant-legitimacy/synthesis hooks), `predicates.md` (`splittable_const_int_operand`), `rvscN.h` headers (sc1–sc7), `gcc/gcc/config/config.gcc`, `gcc/gcc/config/config.sub`.

## Targets

Eight progressive RISC-V GCC target triples model the Hennessy-Patterson educational processor:

| Target | Triple | ISA | Notes |
|--------|--------|-----|-------|
| sc0 | `rvsc0-unknown-elf` | rv32i subset: `lw sw beq add addi sub and or` | no `jalr`, `lui`, `auipc`; **no function calls possible** — only single-function programs compile correctly |
| sc1 | `rvsc1-unknown-elf` | sc0 + `jalr lui` | no `auipc`/`fence`/shifts/xor/ori/andi/branches/byte+half loads+stores; all synthesized |
| sc2 | `rvsc2-unknown-elf` | rv32i − `fence` | full control flow |
| sc3 | `rvsc3-unknown-elf` | rv32i | first target with `fence` |
| sc4 | `rvsc4-unknown-elf` | rv64i | 64-bit |
| sc5 | `rvsc5-unknown-elf` | rv64im | multiply/divide |
| sc6 | `rvsc6-unknown-elf` | rv64imfd_zicsr | floating point |
| sc7 | `rvsc7-unknown-elf` | rv64imafd_zicsr | atomics |

## Technologies

| Component | Version | Notes |
|-----------|---------|-------|
| GCC | 17.0.0 | Fork at `gcc/`; repo: github.com/guissalustiano/gcc-hannersy-paterson |
| GNU Binutils | upstream | `riscv32-none-elf` (system) for sc0–sc3 utilities; target-specific `rvscN-unknown-elf` as+ld built from `binutils-gdb/` |
| Spike | 1.1.1-dev | Invoked as `spike --isa=rv32i`; `--log-commits` counts retired instructions |

## Build workflow

Each target has its own subdirectory under `tests/` with a `justfile`. The first-time setup builds binutils (assembler + linker) before GCC, since GCC's configure must detect them.

```sh
# First-time setup for sc1 (builds binutils, then gcc)
cd tests/sc1 && just setup

# Rebuild and reinstall after source edits (repeat after riscv.md / riscv.opt changes)
cd tests/sc1 && just build install

# Or explicitly with make
cd tests/sc1/build && make all-gcc -j$(nproc) && make install-gcc
```

Replace `sc1` with the desired target number. The installed toolchain lands at `tests/scN/build/install/bin/`.

## Testing

Three independent layers verify correctness: hand-written ISA compliance (static mnemonic allowlist), hand-written behavioral tests (self-validating, run on Spike), and the GCC torture suite (both checks over 1684 upstream programs, rvsc1 only).

### ISA compliance (`tests/isa/*.c`)

```sh
cd tests/sc1 && just test
# Runs main.py: compiles every .c in tests/sc1/tests/isa/ to an object at
# -O0..-Os, disassembles with riscv32-none-elf-objdump -M no-aliases
# (expands pseudo-instructions), and checks every mnemonic against an
# allowlist. 19 files x 5 levels = 95 cases.
```

The `-M no-aliases` flag is essential — it expands pseudos like `ret` to `jalr x0, 0(ra)` before the allowlist check, so forbidden instructions cannot pass disguised as pseudos.

**ISA compliance test files** (`tests/sc1/tests/isa/`):

| File | Operations exercised |
|------|---------------------|
| `add.c` | ADD and ADDI (native, regression) |
| `andi.c` | ANDI (immediate AND) |
| `branch.c` | BNE, BLT, BGE, BLTU, BGEU |
| `call.c` | Function call (JAL synthesis) |
| `lb.c` | LB (signed byte load) |
| `lbu.c` | LBU (unsigned byte load) |
| `lh.c` | LH (signed halfword load) |
| `lhu.c` | LHU (unsigned halfword load) |
| `loop.c` | Loop with synthesized branch |
| `not.c` | Bitwise NOT (`~`) |
| `ori.c` | ORI (immediate OR) |
| `sb.c` | SB (byte store) |
| `sh.c` | SH (halfword store) |
| `shift.c` | SLL, SRL, SRA with constant counts |
| `sll_var.c` | SLL with variable shift count |
| `slt.c` | SLT and SLTU |
| `sra.c` | SRA with variable shift count |
| `srl.c` | SRL with variable shift count |
| `xor.c` | XOR register and immediate |

sc0 has its own ISA tests in `tests/sc0/tests/isa/` (`arith.c`, `branch.c`, `lb.c`, `lh.c`, `logic.c`, `lui.c`, `not.c`, `sb.c`, `shift.c`, `slt.c`, `sra.c`, `srl.c`) and behavioral tests in `tests/sc0/tests/behav/`. sc2 follows the same `isa/` + `behav/` layout.

### rvsc2 exclusion tests (`tests/sc2/reject.py`)

```sh
cd tests/sc2 && just reject   # or `just`, which runs `test` then `reject`
```

`main.py` only shows the compiler never *chooses* an excluded instruction. `reject.py` asks for each excluded group directly, via inline asm or a builtin, and pins down the three different treatments (10 probes × 5 opt levels = 50 cases):

| Group | Expectation | Mechanism |
|---|---|---|
| `fence`, `fence.i` | no fence emitted | `-mno-fence` from `rvsc2.h`'s `CC1_SPEC` |
| Zicsr `csr*` | **rejected** | arch string is `rv32i`, so the *assembler* refuses the mnemonic even from inline asm |
| `ecall`, `ebreak` | accepted — **not** rejected | RV32I base mnemonics; `__builtin_trap` expands to `ebreak` |

The ordering probes are each compiled a second time with `-mfence` and only pass if the fence appears then — a probe that quietly stopped generating fences would otherwise pass vacuously. (This caught a bad first probe: `asm volatile("" ::: "memory")` is a compiler barrier and never emits a hardware fence.) The `ecall`/`ebreak` cases assert the mnemonic *is* present: that group is a documented limitation in `main.typ`, and the test fails if the toolchain starts suppressing it, keeping document and behavior in step.

### Behavioral tests (`tests/behav/*.c` — rvsc1 only)

Each `tests/behav/*.c` program is compiled and linked by `rvsc1-unknown-elf-gcc` at all five optimization levels against `pk32.ld` with `-lsim` (crt0 + libsim + libc), then executed under the RISC-V proxy kernel: `spike --isa=rv32imac_zicsr_zifencei $PK test.elf`. The tests are self-validating — they call `exit(0)` on success — so no reference compiler is involved; the test passes if Spike exits 0. `$PK` must be set (it is, inside the nix dev shell). The wide `--isa` string is what *pk itself* needs; the sc1 user binary still contains only sc1-subset instructions, which is verified separately by `main.py` and `torture_isa.py`.

```sh
cd tests/sc1 && just behav
```

**Behavioral test files** (`tests/sc1/tests/behav/`, grouped by operation category):

| File | Operations exercised |
|------|---------------------|
| `alias.c` | Adjacent sub-word objects in one word — RMW store ordering (regression) |
| `branch.c` | BLT, BGE, BLTU, BGEU |
| `call.c` | Function call and return |
| `livejump.c` | Values live across synthesized jumps — t0/t1 clobber (regression) |
| `logic.c` | NOT, XOR, ANDI, ORI |
| `mem.c` | LB, LBU, LH, LHU, SB, SH — all four byte lanes and both halfword lanes |
| `shift.c` | SLL, SRL, SRA (constant and variable counts) |
| `slt.c` | SLT, SLTU |

`alias.c` and `livejump.c` cover the two backend defects that only Embench
found (the qrduino sub-word aliasing miscompile fixed in gcc `8a0646efe`, and
the `t0` clobber fixed in gcc `0b3abf3`). Both were verified to *fail* against
a build with their fix reverted — `alias.c` at `-O2`/`-O3`, `livejump.c` at
`-O1` and above — while every other test in the suite passed, which is the
gap they exist to close. Two properties they depend on, worth preserving in
any edit: every expected value is a literal while every stored value comes
from a `volatile` source, so no check can be constant-folded away (a mutation
check confirms each assertion is live at all five levels); and `livejump.c`
carries twenty-four accumulators as separate scalars, not an array, because
only filling the register file makes the allocator park a live value in `t0`
across a jump.

rvsc0 cannot use pk (which reaches `main` via `jalr`), so `tests/sc0/behav.py` runs bare-metal HTIF instead: each `tests/behav/*.c` defines `int run_test(void)`, and `entry.S` provides `_start`, sets up `sp`/`gp`, calls it, and writes the HTIF exit token to `tohost`. Linked with `link32.ld`, run as `spike --isa=rv32i`. These tests use volatile stack locals rather than globals — taking the address of a global needs `lui`, which rvsc0 lacks and cannot synthesize (unlike large integer constants, built with `addi`/`add`, which work at any load address including Spike's `0x80000000`).

### GCC torture suite (rvsc1 only)

`gcc.c-torture/execute` — 1684 programs × 5 opt levels = 8420 combinations.

```sh
cd tests/sc1 && just torture-isa     # compile + static mnemonic check
cd tests/sc1 && just torture-behav   # compile + link + run on Spike via pk (needs $PK)
```

Both scripts classify compile failures instead of folding them into a silent skip:

| Status | Meaning | Effect on exit code |
|--------|---------|--------------------|
| ok | compiled (torture-isa then checks the mnemonics) | — |
| **ICE** | compiler crashed — a backend bug | **fails the run** |
| error | ordinary diagnostic (unsupported feature, missing header) | skip |
| timeout | compiler exceeded 120 s | skip |

Failures are grouped by root cause — ICE crash location, or the first diagnostic line — so one backend bug prints as one entry rather than as the dozens of (test, opt) pairs it affects. The shared classification lives in `tests/common.py` (`CompileStatus`, `classify_compile`, `run_compiler`, `print_grouped`); `run_compiler` uses `communicate()` rather than `wait()`, because a compiler emitting more than the ~64 KB pipe buffer otherwise blocks forever and is misreported as a timeout — which is exactly what an ICE dumping RTL does.

`torture_isa.py` flags: `-j N` (parallel, defaults to `nproc`), `--opt=-O2` (repeatable — needs the `=` form, since argparse reads a bare `-O2` as a flag), `--include-unsupported` (also compile the `KNOWN_UNSUPPORTED` sources; they cannot link but can still reveal an ICE), `--files-per-group N`.

A full `just torture-behav` sweep persists its failures to `tests/sc1/torture-behav-failures.txt`, which is committed. Runtime failures are grouped by a signature derived from how the program died — exit code or fatal signal, plus the first non-register-dump line pk/spike printed with addresses normalised to `<addr>` — so one fault reads as one entry. The file carries no timestamps and orders everything deterministically, so two sweeps of the same toolchain diff cleanly; compile-level skips are counted but not listed, since the compile-budget timeouts among them are load-sensitive and would churn the diff. `SPIKE_TIMEOUT` is deliberately generous (900 s) for the same reason: the slowest correct test, `memcpy-2.c` at `-O0`, retires 1.05e9 instructions and needs ~85 s of Spike alone, but the sweep runs many Spike instances at once, and at the previous 300 s budget it sat close enough to the line to flip between runs on load alone — producing a "failure" with no toolchain change behind it. The header also records a per-opt-level passed/skipped/failed breakdown, which is what `main.typ`'s `@tbl-torture-results` prints — a bare total cannot be split back apart. A partial run (explicit sources or `--opt`) does not overwrite the record; pass `--report PATH` to write elsewhere or `--no-report` to suppress it.

`KNOWN_UNSUPPORTED` (in `torture_behav.py`, imported by `torture_isa.py`) excludes sources that fail for reasons unrelated to sc1: printf-family link gaps, libm, `sys/mman.h`, `_Decimal`, x87 asm, `__int128`, and five upstream "expensive" tests. Both scripts honor each test's `dg-options`; without them 115 programs fail on language dialect (mostly `-std=gnu89`) rather than on anything sc1-related.

Last full static sweep (2026-08-08): 8145 attempted, **8145 ISA-clean, zero ICEs, zero errors, zero timeouts**; the other 275 of the 8420 are the `KNOWN_UNSUPPORTED` exclusions (55 sources × 5), not attempted. Timeout counts are load-sensitive; ICE and violation counts are not.

Last full behavioral sweep (2026-08-08): **8142/8420 passed, 0 failed**, 278 skipped (55 up-front exclusions × 5 levels, plus the three `sprintf` sources that only fail to link at `-O0`). These are the numbers `main.typ` reports.

For quick manual checks:

```sh
export PATH=/home/salust/p/scgcc/tests/sc1/build/install/bin:$PATH

# Emit assembly and inspect
rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/shift.c -o /tmp/out.s

# Verify absence of a native instruction
rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/srl.c -o - \
  | grep -E '^\s+srl' && echo FAIL || echo PASS
```

## Document

`main.typ` is a Typst academic document (TCC at USP/Poli):

- **Title**: GCC target for educational RISC-V processor
- **Author**: Guilherme Stabach Salustiano
- **Advisor**: Bruno de Carvalho Albertini
- **Dept**: Departamento de Engenharia de Computação e Sistemas Digitais (PCS) — Escola Politécnica, USP
- **Year**: 2026

Compile with:

```sh
typst compile main.typ
```

Chapter structure:
1. Introduction — motivation (PCS3225 course at USP), objectives, rationale
2. Related Work — instruction synthesis in embedded compilers, pedagogical ISA tools (Venus, RARS, MARS, BRISC-V)
3. Conceptual Background — RISC-V ISA, single-cycle processor, C ABI, GCC architecture
4. Development Method — study, requirements, synthesis derivation cycle, validation approach
5. Requirements Specification — allowed instruction sets per target, correctness requirements (ISA compliance + behavioral equivalence)
6. Development — synthesis derivations (proofs + assembly), GCC implementation, known limitations
7. Results — ISA compliance tests, Spike behavioral self-tests, GCC torture suite, program size/performance data
8. Conclusion

## GCC backend architecture

The custom targets reuse the upstream RISC-V backend with three layers of configuration:

### 1. Target triple registration

- `gcc/gcc/config/config.sub` — normalises `rvscN-*` triples (pattern match, no CPU name needed).
- `gcc/gcc/config/config.gcc` — maps `rvscN-*-elf*` to `cpu_type=riscv`; sets default `--with-arch` and `--with-abi` per target; appends `riscv/rvscN.h` to `tm_file`.

### 2. Per-target header (`gcc/gcc/config/riscv/rvscN.h`)

Each header overrides `CC1_SPEC` to inject `-mno-*` flags automatically so users never need to pass them manually:

```c
// sc1 example
#define CC1_SPEC "%{!mfence:-mno-fence} %{!mauipc:-mno-auipc} %{!mshift:-mno-shift}" \
  " %{!mslt:-mno-slt} ..."
```

rvsc0 has its own header (`rvsc0.h`), which injects the same flags as `rvsc1.h` plus `%{!mlui:-mno-lui}` (function calls are still impossible regardless, since `jalr` is absent).

### 3. Machine Description (`gcc/gcc/config/riscv/riscv.md`)

The core of all instruction synthesis. Key patterns:

- **`define_expand "<optab>si3"`** — handles all shift types via the `any_shift` code iterator. `(<CODE>) == ASHIFT/LSHIFTRT/ASHIFTRT` are compile-time constants, so all three shift syntheses live in the same expand body with `if ((<CODE>) == ...)` guards. Never add a duplicate `define_expand` with the same name.
  - `ASHIFT` const (sc1): N repeated `add rd, rd, rd` instructions.
  - `ASHIFT` variable (sc1): count-down loop of `add rd, rd, rd`.
  - `LSHIFTRT` (sc1): loop-based bit extraction via `and`/`or`/`add`/`beq`; a sub-loop computes `in_mask = 1 << shamt`.
  - `ASHIFTRT` (sc1): same srl loop inlined, then if sign bit was set, OR in `sign_mask = -1 << (32 − shift)`.
- **`define_expand "<optab>si3"` (logic)** — `and3`/`ior3`/`xor3` share one expand with `(<CODE>) ==` guards:
  - `XOR` (sc1): `(a | b) - (a & b)` — `and ab_and,a,b; or ab_ior,a,b; sub rd,ab_ior,ab_and`. Uses two pseudos so IRA keeps a dataflow edge into the final `sub`; the earlier `~(a&b)&(a|b)` De Morgan form lacked that edge and let IRA alias the NOT result onto an operand register, corrupting `ab_ior` (see riscv.md ~1787 comment).
  - `IOR` immediate (sc1): `li t, imm; or rd, rs, t`.
  - `AND` immediate (sc1): `li t, imm; and rd, rs, t`.
- **`zero_extendhi<GPR:mode>2` expand** — when `!TARGET_HALF && MEM_P`: synthesizes `lhu` as `addr&-4 → lw word → (addr&2)<<3 → lshr → (<<16)>>16` (logical).
- **`zero_extendqi<SUPERQI:mode>2` expand** — when `!TARGET_BYTE && MEM_P`: synthesizes `lbu` identically but using byte mask `addr&3` and shift of 24.
- **`extend<SHORT:mode><SUPERQI:mode>2` expand** — when `!TARGET_BYTE` (QI) or `!TARGET_HALF` (HI) and MEM_P: synthesizes `lb`/`lh` like the unsigned forms but uses `ashr` for sign extension.
- **`movhi` expand** — when `!TARGET_HALF && MEM_P(operands[0])`: synthesizes `sh` as read-modify-write: `addr&-4 → lw word → (addr&2)<<3 → mask 0xFFFF<<bit_off → word &= ~mask → val&0xFFFF<<bit_off → word |= val → sw`. Uses `gen_lowpart(SImode, force_reg(HImode, src))` for the value; the resulting paradoxical subreg is handled by the `*zero_extendhi<GPR:mode>2` split.
- **`movqi` expand** — when `!TARGET_BYTE && MEM_P(operands[0])`: synthesizes `sb` identically but using byte mask `addr&3` and mask `0xFF`.
- **Known-lane sub-word fast path** — all five expands above first call `riscv_subword_const_offset` (riscv.cc). When the object's position within its containing word is a compile-time constant, they take a specialized path (`riscv_emit_subword_load_const` / `riscv_emit_subword_store_const`) instead of the run-time one, and the whole `addr&3 → <<3 → variable shift` chain disappears. Details that matter:
  - **Where the constant comes from.** `MEM_ALIGN` is only a *lower bound*, so it is usable in one direction only: ≥32 bits means offset 0. It cannot say "offset 2" — a MEM_ALIGN of 16 means 0 *or* 2. For non-zero lanes the residue comes from `get_object_alignment_1`, which returns M and N with `&EXPR ≡ N (mod M)`; when M ≥ 32 the residue mod a word is exactly N. `MEM_OFFSET` is added on, and an unknown `MEM_OFFSET` means bail. Getting this wrong is a miscompile (wrong word, or an unaligned `lw`), so every step is conservative.
  - **Extraction is lane-dependent** because a right shift costs roughly in proportion to the bits surviving it while a left shift is one `add` per position. Lane 0 masks (`and 0xFF`, ~4 instructions); lanes 1–3 shift left to the top of the word then do a single logical `>>24`, which is the cheapest right shift since only 8 bits survive — 83/75/67 versus 132/100/67 for the direct `>>8k`.
  - **Do not write that as C.** `(w << 16) >> 24` is canonicalized straight back to `(w >> 8) & 0xFF` by the middle end. Emitting the two shifts in the expand body works because each `gen_*` synthesizes on the spot, before anything can undo the choice.
  - **Signed loads** extract unsigned then subtract twice the sign bit (`u - ((u & 0x80) << 1)`), 4 instructions, rather than routing back through an arithmetic shift.
  - `DATA_ALIGNMENT`/`LOCAL_ALIGNMENT` in `riscv.h` give every static and stack object at least a word on `!TARGET_BYTE`/`!TARGET_HALF` — upstream's `RISCV_EXPAND_ALIGNMENT` bumps only aggregates, which left plain scalar `char`/`short` globals at alignment 1 and therefore permanently on the slow path. This is safe for objects defined elsewhere: `align_variable` applies `DATA_ALIGNMENT` only when `decl_binds_to_current_def_p`, so an `extern char` defined by a library built without it still reads as byte-aligned.
  - The run-time path is untouched, and so is `riscv_subword_container_mem` — the constant path still routes its word accesses through it, so the qrduino aliasing fix continues to hold (`alias.c` covers this).
- **`define_insn_and_split "*zero_extendhi<GPR:mode>2"`** — split body (post-reload) branches on `TARGET_SHIFT`: if set, uses the original `ashift+lshiftrt` by 16; if not (sc1), loads 0xFFFF into `operands[0]` and emits `and op0, src_SI, op0`. Uses `gen_rtx_REG(<GPR:MODE>mode, REGNO(operands[1]))` to access the physical register without creating a new pseudo (which is forbidden post-reload).
- **`define_insn_and_split "*zero_extendqisi2_noandi"`** — handles `andi rd, rs, 0xff` when `!TARGET_ANDI`; splits after reload as `li rd, 255; and rd, rs, rd` with early-clobber to ensure `rd ≠ rs`.
- **`define_insn "*branch<mode>"`** — bne synthesis: `beq a,b,skip; lui t1,%hi(L); addi t1,t1,%lo(L); jr t1; skip:`.
- **`define_insn "jump"`** — unconditional jump synthesis when `!TARGET_AUIPC`: `lui t1,%hi(L); addi t1,t1,%lo(L); jr t1` (needed for back-edges in synthesized loops).
- **`one_cmplsi2` (not)** — when `!TARGET_XOR`: `sub rd, x0, rs; addi rd, rd, -1` (identity `~x = −x − 1`).
- **LUI synthesis (rvsc0)** — `lui` is native in sc1+; for rvsc0 it is synthesized via `riscv_synthesize_const_no_lui` in `riscv.cc` (hooked into `riscv_move_integer`): split the 20-bit immediate into two 10-bit halves, build with `addi`+shift, combine with `add` (not `or` — the two halves don't overlap, and this keeps the whole synthesis to a single accumulator register, safe pre- and post-reload), then shift left 12 and `addi` any remaining low-12-bit remainder. No memory access, so correctness doesn't depend on load address — an earlier constant-pool-based version (`lw rd, %lo(pool)(x0)`) assumed the pool always linked below address 2048, which broke under Spike's `0x80000000` load address.
- **JAL synthesis (rvsc1)** — `jal ra, target` synthesized as: `lui ra, %hi(back); addi ra, ra, %lo(back); lui t0, %hi(target); addi t0, t0, %lo(target); jalr x0, 0(t0); back:`. Cost: 5 instructions, 1 extra register. `auipc` is absent in sc1, so the return address is materialized as an absolute label.
- **`cstore<GPR:mode>4` expand** — when `TARGET_SLT && !TARGET_SLTI && CONST_INT_P(operands[3])`: calls `force_reg` to load the immediate into a register before `riscv_expand_int_scc`, preventing `slti`/`sltiu` emission. When `!TARGET_SLT && SImode`: synthesizes all ordered comparisons (LT, LTU, GE, GEU, GT, GTU, LE, LEU) before calling `riscv_expand_int_scc`. GT/LE/GTU/LEU are reduced to LT/LTU by swapping operands; GE/GEU/LE/LEU invert the result using `sub rd, one, result` (avoids XOR→zero_extract→ashift split that fails with `!TARGET_SHIFT`). `slt` synthesis: `sub diff, a, b; xor t1, a, b; xor t2, a, diff; and t1, t1, t2; xor diff, diff, t1; lshr rd, diff, 31`. `sltu` synthesis: `sub diff, a, b; not t1, a; and t2, t1, b; xor t3, a, b; not t3, t3; and t3, t3, diff; or t2, t2, t3; lshr rd, t2, 31`.
- **`@cbranch<mode>4` expand** — when `!TARGET_SLT && SImode && code ≠ EQ/NE`: emits the same slt/sltu synthesis into a temp register, then calls `riscv_expand_conditional_branch` with `NE` (for LT/LTU/GT/GTU) or `EQ` (for GE/GEU/LE/LEU) so the branch tests `tmp != 0` or `tmp == 0`. This intercepts before `*branch<mode>` so its raw `"slt\t..."` asm templates are never reached with `!TARGET_SLT`.

### 4. Synthesis cost summary

| Operation | Instructions (worst case) | Extra registers | Applies to |
|-----------|--------------------------|-----------------|------------|
| NOT | 2 | 0 | rvsc0, rvsc1 |
| XOR | 3 (reg); 4 (imm) | 1 (reg); 2 (imm) | rvsc0, rvsc1 |
| SLL | 6b + 1 (max 187 at b=31) | 1 | rvsc0, rvsc1 |
| SRL | ~170 | 5 | rvsc0, rvsc1 |
| SRA | ~200 | 6 | rvsc0, rvsc1 |
| SLT | ~60 | 3 | rvsc0, rvsc1 |
| SLTU | ~70 | 4 | rvsc0, rvsc1 |
| BNE | 3 | 1 | rvsc0, rvsc1 |
| LB, LBU | 4 (lane 0) / 67–83 (lanes 1–3) known lane; ~350 unknown | 2 | rvsc0, rvsc1 |
| LH, LHU | 3 (lane 0) / 85 (lane 1) known lane; ~350 unknown | 2 | rvsc0, rvsc1 |
| SB | 7 (lane 0) / 25 (lanes 1–3) known lane; ~210 unknown | 3 | rvsc0, rvsc1 |
| SH | 7 (lane 0) / 24 (lane 1) known lane; ~210 unknown | 3 | rvsc0, rvsc1 |
| LUI | 25 (13 fast path) | 0 | rvsc0 |
| JAL | 5 per call site | 1 | rvsc1 |

The sub-word rows are dynamic retired-instruction counts per access, measured by
differencing a barriered loop against an empty one under `spike -g` (the static
count is misleading here: the unknown-lane path is a *loop*, so it has fewer
static instructions and far more dynamic ones). "Known lane" is the case
`riscv_subword_const_offset` resolves — a global, a stack slot, or a struct
field; "unknown" is a pointer whose alignment the compiler cannot see.

### 5. Target options (`gcc/gcc/config/riscv/riscv.opt`)

Custom boolean flags added for this project:

| Flag | Variable | Effect when 0 |
|------|----------|----------------|
| `-mfence` | `TARGET_FENCE` | `fence`/`fence.i` expands are no-ops |
| `-mauipc` | `TARGET_AUIPC` | PC-relative → absolute `lui+lo12`; calls → `lui+jalr` |
| `-mlui` | `TARGET_LUI` | large constants → addi/shift synthesis (`riscv_synthesize_const_no_lui`, no memory access); symbol/global addresses remain unsupported (still need `lui`); `jump`/`indirect_jump`/`tablejump`/calls gated off (rvsc0 only) |
| `-mshift` | `TARGET_SHIFT` | native `sll`/`srl`/`sra` gated off; synthesis in expand |
| `-mxor` | `TARGET_XOR` | `xor` → `(a\|b)-(a&b)`; `not`/`xori rd,rs,-1` → `sub+addi` |
| `-mori` | `TARGET_ORI` | `ori` → `li t, imm; or` |
| `-mandi` | `TARGET_ANDI` | `andi` → `li t, imm; and`; zero-extend byte handled by special split |
| `-mbne` | `TARGET_BNE` | `bne` → `beq+skip+lui+addi+jr` |
| `-mslt` | `TARGET_SLT` | `slt`/`sltu` → synthesized via sub/xor/and/lshr; `blt`/`bge`/`bltu`/`bgeu` branches use synthesized comparison + `beq`/`bne` |
| `-mslti` | `TARGET_SLTI` | `slti`/`sltiu` → `li t, imm; slt/sltu rd, rs, t` (fires only when `TARGET_SLT && !TARGET_SLTI`; when `!TARGET_SLT`, immediates are handled by the full synthesis path) |
| `-mblt` | `TARGET_BLT` | `blt` → synthesized comparison+`beq+jump` (when `TARGET_SLT`: `slt+beq+jump`) |
| `-mbge` | `TARGET_BGE` | `bge` → synthesized comparison+`beq` (when `TARGET_SLT`: `slt+beq`) |
| `-mbltu` | `TARGET_BLTU` | `bltu` → synthesized comparison+`beq+jump` (when `TARGET_SLT`: `sltu+beq+jump`) |
| `-mbgeu` | `TARGET_BGEU` | `bgeu` → synthesized comparison+`beq` (when `TARGET_SLT`: `sltu+beq`) |
| `-mbyte` | `TARGET_BYTE` | `lb`/`lbu` → `lw`+align+extract; `sb` → `lw`+clear+insert+`sw`; `-mno-byte` synthesizes all via `lw`+shift |
| `-mhalf` | `TARGET_HALF` | `lh`/`lhu` → `lw`+align+extract; `sh` → `lw`+clear+insert+`sw`; `-mno-half` synthesizes all via `lw`+shift |

All have `Init(1)` (enabled by default); the `rvscN.h` header disables the appropriate flags via `CC1_SPEC`.

## Key invariants

- Never add synthesis code in a new `define_expand` with the same `<optab>` name — the iterator already generates e.g. `ashlsi3`. Put synthesis inside the existing expand body using `(<CODE>) == ASHIFT` guards.
- The `define_insn` condition (`"TARGET_SHIFT"`) and the `define_expand` synthesis path (`!TARGET_SHIFT`) must stay in sync — if synthesis fires and emits `DONE`, GCC never tries to match the insn.
- After editing `riscv.md` or `riscv.opt`, rebuild **all** target build dirs that share the same backend (`sc1`–`sc7`) before running cross-target sanity checks.

## Adding a new sc1 synthesis

1. **Add the flag** to `gcc/gcc/config/riscv/riscv.opt`:
   ```
   mfoo
   Target Var(TARGET_FOO) Init(1)
   Enable foo instruction (-mno-foo synthesizes via ...).
   ```

2. **Disable by default** in `gcc/gcc/config/riscv/rvsc1.h` `CC1_SPEC`:
   ```c
   #define CC1_SPEC "... %{!mfoo:-mno-foo}"
   ```

3. **Add the synthesis** inside the relevant `define_expand` in `riscv.md`, guarded by `!TARGET_FOO`. Call `DONE` at the end to prevent GCC from falling through to the native insn match.

4. **Gate the native insn** — add `&& TARGET_FOO` to the condition string of the corresponding `define_insn` so it is never selected when synthesis is active.

5. **Write a test** in `tests/sc1/tests/isa/foo.c` (and a behavioral one in `tests/sc1/tests/behav/foo.c` if the synthesis has runtime semantics worth executing).

6. **Rebuild and test**:
   ```sh
   cd tests/sc1 && just build install test
   ```

### Emit helpers in riscv.md expand bodies

| Goal | RTL helper |
|------|-----------|
| Move a register | `emit_move_insn (dst, src)` |
| Load a small constant | `emit_move_insn (dst, GEN_INT (n))` or `const0_rtx` / `const1_rtx` / `constm1_rtx` |
| Load any 32-bit constant | `emit_move_insn (dst, gen_int_mode (val, SImode))` |
| `add rd, rs1, rs2` | `emit_insn (gen_addsi3 (rd, rs1, rs2))` |
| `and rd, rs1, rs2` | `emit_insn (gen_andsi3 (rd, rs1, rs2))` |
| `or  rd, rs1, rs2` | `emit_insn (gen_iorsi3 (rd, rs1, rs2))` |
| `sub rd, rs1, rs2` | `emit_insn (gen_subsi3 (rd, rs1, rs2))` |
| Conditional branch | `emit_cmp_and_jump_insns (a, b, EQ/NE, NULL_RTX, SImode, 0, label, profile_probability::uninitialized ())` |
| Unconditional branch | `emit_jump_insn (gen_jump (label)); emit_barrier ()` |
| Define a label target | `rtx lbl = gen_label_rtx (); ... emit_label (lbl)` |
| Allocate a temp reg | `rtx t = gen_reg_rtx (SImode)` |
| Force QI operand to SI | `gen_lowpart (SImode, operands[2])` (needed for shift count) |
| Logical right shift | `emit_insn (gen_lshrsi3 (rd, rs, cnt))` |
| Arithmetic right shift | `emit_insn (gen_ashrsi3 (rd, rs, cnt))` |
| Left shift | `emit_insn (gen_ashlsi3 (rd, rs, cnt))` |
| Load from pointer in reg | `emit_move_insn (dst, gen_rtx_MEM (SImode, ptr_reg))` |
| Get address from MEM | `XEXP (operands[1], 0)` — raw address RTL (pass to `force_reg`) |
