#!/usr/bin/env python3
"""ISA compliance of the *linked* rvsc1 program, not just of compiled objects.

main.py and torture_isa.py disassemble what the compiler produced.  That is the
right check for the compiler, and it is what @sc1-isa-tests reports, but it says
nothing about the code a program is linked against.  Exactly that gap let
libgcc's hand-written div.S and muldi3.S ship native slli/srli for as long as
they did: every object was clean, every linked program executed instructions the
target does not implement, and nothing looked.  Spike could not catch it either,
since it runs with the wide --isa that the proxy kernel needs.

This check disassembles the whole linked ELF and splits the result in two,
because they are different claims and only the first is fully established:

  program + compiler-generated libraries
      Everything GCC emitted, including libgcc.  Must contain only the ten sc1
      instructions.  Any violation here is a defect.

  hand-written runtime
      crt0 and the newlib syscall stubs.  These are hand-written assembly that
      never passes through the machine description, so -mno-shift and friends
      have no effect on them.  They are listed explicitly below with a reason
      each, and reported separately rather than silently ignored.

What is left in the second partition is only `ecall`, and that one is genuinely
unavoidable for a program that talks to a host -- a bare-metal sc1 processor has
nothing to make a syscall to, which is why rvsc0's own harness runs without libc
at all.  newlib's assembly memset/memcpy/memmove/strcmp used to be here too, and
were the same kind of defect as the libgcc one; they are gone now that the rvsc
targets have their own newlib machine directory (libc/machine/rvsc), which keeps
only setjmp.S -- itself rewritten to avoid seqz -- and lets the generic C string
routines in libc/string be selected instead.
"""

import argparse
import re
import subprocess
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent.parent))
from common import find_tool, link_elf, compile_c

SCRIPT_DIR = Path(__file__).parent
COMPILER   = "rvsc1-unknown-elf-gcc"
OBJDUMP    = "rvsc1-unknown-elf-objdump"
LD_SCRIPT  = SCRIPT_DIR / "pk32.ld"
TEST_GLOB  = "tests/behav/*.c"
OPT_LEVELS = ["-O0", "-O1", "-O2", "-O3", "-Os"]

ALLOWED = {"lw", "sw", "beq", "add", "addi", "sub", "and", "or", "lui", "jalr"}

# symbol -> why it is hand-written assembly outside the machine description
RUNTIME_EXEMPT = {
    "_start":   "crt0, hand-written assembly",
    "_init":    "crt0, hand-written assembly",
    "_fini":    "crt0, hand-written assembly",
    "_exit":    "libgloss syscall stub (ecall)",
    "_read":    "libgloss syscall stub (ecall)",
    "_write":   "libgloss syscall stub (ecall)",
    "_open":    "libgloss syscall stub (ecall)",
    "_close":   "libgloss syscall stub (ecall)",
    "_lseek":   "libgloss syscall stub (ecall)",
    "_fstat":   "libgloss syscall stub (ecall)",
    "_stat":    "libgloss syscall stub (ecall)",
    "_isatty":  "libgloss syscall stub (ecall)",
    "_sbrk":    "libgloss syscall stub (ecall)",
    "_kill":    "libgloss syscall stub (ecall)",
    "_getpid":  "libgloss syscall stub (ecall)",
    "_times":   "libgloss syscall stub (ecall)",
    "_gettimeofday": "libgloss syscall stub (ecall)",
    "_unlink":  "libgloss syscall stub (ecall)",
    "_link":    "libgloss syscall stub (ecall)",
}

_FUNC_RE = re.compile(r"^[0-9a-f]+ <([^>]+)>:")
_INSN_RE = re.compile(r"^\s+[0-9a-f]+:\s+[0-9a-f ]+\t(\S+)")


def scan(objdump: str, elf: Path) -> dict[str, set[str]]:
    """Map function name -> set of disallowed mnemonics it contains."""
    out = subprocess.run([objdump, "-d", "-M", "no-aliases", str(elf)],
                         capture_output=True, text=True, check=True).stdout
    bad: dict[str, set[str]] = {}
    fn = "?"
    for line in out.splitlines():
        m = _FUNC_RE.match(line)
        if m:
            fn = m.group(1)
            continue
        m = _INSN_RE.match(line)
        if m and m.group(1) not in ALLOWED:
            bad.setdefault(fn, set()).add(m.group(1))
    return bad


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("sources", nargs="*", type=Path)
    ap.add_argument("--opt", dest="opts", action="append", default=[], metavar="LEVEL")
    args = ap.parse_args()

    sources = args.sources or sorted(SCRIPT_DIR.glob(TEST_GLOB))
    if not sources:
        sys.exit(f"error: no sources (looked for {SCRIPT_DIR / TEST_GLOB})")
    opts = args.opts or OPT_LEVELS

    cc = find_tool(COMPILER)
    objdump = find_tool(OBJDUMP)

    checked = 0
    defects: dict[str, set[str]] = {}
    runtime: dict[str, set[str]] = {}

    with tempfile.TemporaryDirectory() as _tmp:
        tmp = Path(_tmp)
        for src in map(Path, sources):
            for opt in opts:
                elf = tmp / f"{src.stem}{opt}.elf"
                obj = tmp / f"{src.stem}{opt}.o"
                compile_c(cc, src, [opt, "-c"], obj)
                r = subprocess.run([cc, opt, str(obj), "-T", str(LD_SCRIPT),
                                    "-lsim", "-o", str(elf)],
                                   capture_output=True, text=True)
                if r.returncode != 0:
                    sys.exit(f"link failed for {src.name} {opt}:\n{r.stderr}")
                checked += 1
                for fn, mnemonics in scan(objdump, elf).items():
                    target = runtime if fn in RUNTIME_EXEMPT else defects
                    target.setdefault(fn, set()).update(mnemonics)

    print(f"scanned {checked} linked ELFs "
          f"({len(sources)} sources x {len(opts)} optimization levels)\n")

    if runtime:
        print("hand-written runtime (expected, see module docstring):")
        for fn in sorted(runtime):
            print(f"  {fn:<16}{' '.join(sorted(runtime[fn])):<28}"
                  f"  {RUNTIME_EXEMPT[fn]}")
        print()

    if defects:
        print("VIOLATIONS in program or compiler-generated code:")
        for fn in sorted(defects):
            print(f"  {fn:<16}{' '.join(sorted(defects[fn]))}")
        sys.exit(1)

    print("program and compiler-generated libraries: ISA-clean")


main()
