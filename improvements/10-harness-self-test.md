# Add a self-test to the ISA compliance harness (guard against vacuous passes)

## Problem

The ISA compliance check (`tests/common.py: validate_source_direct` — compile → assemble →
`objdump -M no-aliases` → regex-extract mnemonics → allowlist check) fails **open**: if the
mnemonic-extraction regex breaks (objdump output format change, regex typo, empty
disassembly section), it extracts zero mnemonics and every test passes vacuously. Nothing
currently detects that failure mode.

## Fix

Add a negative control to `tests/sc1/main.py` (and `tests/sc0/main.py`), run before the
real tests:

1. **Forbidden-mnemonic canary**: compile one shift-heavy source
   (`tests/isa/shift.c` works) with the *reference* compiler
   `riscv32-none-elf-gcc -march=rv32i -mabi=ilp32 -O1`, run it through the exact same
   assemble/disassemble/extract pipeline, and **assert the extracted set contains
   `srl`/`sra`/`sll` (i.e. the allowlist check FAILS)**. If the reference output passes the
   rvsc1 allowlist, the pipeline is broken → abort the whole run with a clear error.
2. **Non-empty extraction assert**: in `validate_source_direct`, if the extracted mnemonic
   list is empty, treat it as an error (a compiled function always contains at least a
   return/branch), not a pass.

Both checks are a few lines; no new dependencies (the reference toolchain is already
required by the project setup).

## Verify

```sh
cd tests/sc1 && just test     # canary runs first, then 95/95
```

Then sabotage the regex in common.py (e.g. make it match nothing) and confirm the run
aborts at the canary instead of printing 95/95 PASS.

## Update docs

One sentence in main.typ §sc1-isa-tests (~line 1555): the harness validates itself against
a reference compiler before each run, ensuring the mnemonic check cannot pass vacuously.
