#!/usr/bin/env python3
"""Exclusion tests for rvsc2.

main.py checks that the compiler never *chooses* to emit an excluded
instruction while compiling ordinary C.  That leaves the other half of the
rvsc2 requirement unexercised: what happens when a program asks for one
directly, through inline asm or a builtin.  The three excluded groups are not
handled the same way, and this script pins down which is which so the claim in
the thesis cannot drift away from the toolchain:

  ORDERING   fence / fence.i -- suppressed.  Portable C that would emit a
             fence compiles to no fence at all.  Each probe is checked twice,
             once with the default -mno-fence and once with -mfence, so a
             probe that stopped generating fences for an unrelated reason
             fails loudly instead of passing vacuously.

  REJECTED   the Zicsr csr* instructions -- refused.  The target's arch string
             is rv32i, which does not include Zicsr, so the assembler rejects
             the mnemonic even from inline asm.

  ACCEPTED   ecall / ebreak -- *not* refused.  They are RV32I base mnemonics,
             so the assembler takes them from inline asm, and __builtin_trap
             expands to ebreak.  Unreachable from portable C that does not ask
             for them, but nothing in the toolchain prevents them.  These
             cases assert the mnemonic *does* appear: the limitation is
             documented in main.typ, and a test that fails when it disappears
             is what keeps the two in step.
"""

import argparse
import enum
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent.parent))
from common import compile_probe, disassemble_mnemonics, find_tool

COMPILER = "rvsc2-unknown-elf-gcc"
OBJDUMP  = "riscv32-none-elf-objdump"
OPT_LEVELS = ["-O0", "-O1", "-O2", "-O3", "-Os"]


class Expect(enum.Enum):
    ORDERING = "no fence emitted (but -mfence emits one)"
    REJECTED = "refused by the toolchain"
    ACCEPTED = "compiled, mnemonic present"


class Probe:
    def __init__(self, name: str, expect: Expect, source: str,
                 mnemonics: set[str]):
        self.name = name
        self.expect = expect
        self.source = source
        # For ORDERING: must be absent.  For ACCEPTED: must be present.
        self.mnemonics = mnemonics


PROBES = [
    Probe("atomic_thread_fence", Expect.ORDERING,
          "void p(void){ __atomic_thread_fence(__ATOMIC_SEQ_CST); }",
          {"fence", "fence.i", "fence.tso"}),
    Probe("sync_synchronize", Expect.ORDERING,
          "void p(void){ __sync_synchronize(); }",
          {"fence", "fence.i", "fence.tso"}),
    Probe("atomic_load_store", Expect.ORDERING,
          "int v;\n"
          "int  p(void){ return __atomic_load_n(&v, __ATOMIC_SEQ_CST); }\n"
          "void q(int x){ __atomic_store_n(&v, x, __ATOMIC_SEQ_CST); }",
          {"fence", "fence.i", "fence.tso"}),
    Probe("atomic_acquire_release", Expect.ORDERING,
          "int v;\n"
          "int  p(void){ return __atomic_load_n(&v, __ATOMIC_ACQUIRE); }\n"
          "void q(int x){ __atomic_store_n(&v, x, __ATOMIC_RELEASE); }",
          {"fence", "fence.i", "fence.tso"}),

    Probe("asm_csrrw", Expect.REJECTED,
          'void p(unsigned x){ __asm__ volatile("csrrw x0, 0x340, %0" :: "r"(x)); }',
          set()),
    Probe("asm_csrrs", Expect.REJECTED,
          'unsigned p(void){ unsigned r; __asm__ volatile("csrrs %0, 0x340, x0" : "=r"(r)); return r; }',
          set()),
    Probe("asm_csrrwi", Expect.REJECTED,
          'void p(void){ __asm__ volatile("csrrwi x0, 0x340, 1"); }',
          set()),
    Probe("asm_csrr_pseudo", Expect.REJECTED,
          'unsigned p(void){ unsigned r; __asm__ volatile("csrr %0, 0x340" : "=r"(r)); return r; }',
          set()),

    Probe("builtin_trap", Expect.ACCEPTED,
          "void p(void){ __builtin_trap(); }",
          {"ebreak"}),
    Probe("asm_ecall", Expect.ACCEPTED,
          'void p(void){ __asm__ volatile("ecall"); }',
          {"ecall"}),
]


def build(compiler: str, source: str, opt: str, cflags: list[str]):
    src = Path(tempfile.mktemp(suffix=".c"))
    src.write_text(source + "\n")
    try:
        return compile_probe(compiler, src, opt, cflags)
    finally:
        src.unlink(missing_ok=True)


def mnemonics_of(objdump: str, result) -> set[str]:
    try:
        return set(disassemble_mnemonics(objdump, result.obj))
    finally:
        result.obj.unlink(missing_ok=True)


def check(compiler: str, objdump: str, probe: Probe, opt: str,
          cflags: list[str]) -> str | None:
    """Run one probe at one optimization level; return a failure reason or None."""
    res = build(compiler, probe.source, opt, cflags)

    if probe.expect is Expect.REJECTED:
        if res.ok:
            res.obj.unlink(missing_ok=True)
            return "compiled successfully; expected the toolchain to refuse it"
        if res.status.value == "ice":
            return f"compiler crashed rather than diagnosing:\n{res.stderr.strip()}"
        return None

    if not res.ok:
        return f"failed to compile:\n{res.stderr.strip()}"
    found = mnemonics_of(objdump, res)

    if probe.expect is Expect.ACCEPTED:
        missing = probe.mnemonics - found
        if missing:
            return (f"expected {sorted(probe.mnemonics)} in the output but none "
                    f"appeared -- the toolchain now suppresses it, so the "
                    f"limitation recorded in main.typ is stale")
        return None

    # ORDERING: absent by default, present once -mfence re-enables it.
    emitted = probe.mnemonics & found
    if emitted:
        return f"emitted {sorted(emitted)} despite -mno-fence"
    control = build(compiler, probe.source, opt, [*cflags, "-mfence"])
    if not control.ok:
        return f"probe failed to compile with -mfence:\n{control.stderr.strip()}"
    if not (probe.mnemonics & mnemonics_of(objdump, control)):
        return ("probe emits no fence even with -mfence, so it does not "
                "exercise the exclusion")
    return None


def main() -> None:
    parser = argparse.ArgumentParser(
        description="rvsc2 exclusion tests: fence suppressed, Zicsr refused, "
                    "ecall/ebreak reachable"
    )
    parser.add_argument(
        "--cflag", dest="cflags", action="append", default=[],
        metavar="FLAG", help="Extra compiler flag (repeatable)",
    )
    args = parser.parse_args()

    compiler = find_tool(COMPILER)
    objdump  = find_tool(OBJDUMP)

    passed = failed = 0
    for expect in Expect:
        print(f"  {expect.name} -- {expect.value}")
        for probe in (p for p in PROBES if p.expect is expect):
            print(f"    {probe.name}")
            for opt in OPT_LEVELS:
                print(f"      {opt} ...", end=" ", flush=True)
                reason = check(compiler, objdump, probe, opt, args.cflags)
                if reason is None:
                    print("PASS")
                    passed += 1
                else:
                    print("FAIL")
                    for line in reason.splitlines():
                        print(f"        {line}")
                    failed += 1

    total = passed + failed
    print(f"\n{passed}/{total} passed")
    if failed:
        sys.exit(1)


if __name__ == "__main__":
    main()
