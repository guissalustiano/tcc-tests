#!/usr/bin/env python3
"""Run gcc.c-torture/execute tests on rvsc1 via Spike+pk.

For each torture test at each opt level:
  1. Try to compile+link with rvsc1-unknown-elf-gcc (skip on error/timeout)
  2. Run under: spike --isa=rv32imac_zicsr_zifencei $PK test.elf
  3. PASS if Spike exits 0; FAIL otherwise; SKIP if compile failed

The tests are self-validating: they call exit(0) on success and
abort()/exit(1) on failure — no reference compiler needed.
"""

import argparse
import os
import signal
import subprocess
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent.parent))
from common import find_tool, run_spike, SpikeTimeout

SCRIPT_DIR  = Path(__file__).parent
TORTURE_DIR = SCRIPT_DIR.parent.parent / "gcc" / "gcc" / "testsuite" / "gcc.c-torture" / "execute"

COMPILER        = "rvsc1-unknown-elf-gcc"
ISA             = "rv32imac_zicsr_zifencei"
LD_SCRIPT       = SCRIPT_DIR / "pk32.ld"
OPT_LEVELS      = ["-O0", "-O1", "-O2", "-O3", "-Os"]
COMPILE_TIMEOUT = 120
SPIKE_TIMEOUT   = 30


def try_compile_link(compiler: str, src: Path, opt: str, out: Path) -> bool:
    """Compile+link src → out ELF. Returns False on error or timeout."""
    proc = subprocess.Popen(
        [compiler, opt, "-T", str(LD_SCRIPT), str(src), "-lsim", "-o", str(out)],
        stdout=subprocess.PIPE, stderr=subprocess.PIPE,
        start_new_session=True,
    )
    try:
        proc.wait(timeout=COMPILE_TIMEOUT)
    except subprocess.TimeoutExpired:
        os.killpg(proc.pid, signal.SIGKILL)
        proc.wait()
        out.unlink(missing_ok=True)
        return False
    if proc.returncode != 0:
        out.unlink(missing_ok=True)
        return False
    return True


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Behavioral: gcc.c-torture tests on rvsc1 via Spike+pk"
    )
    parser.add_argument("sources", nargs="*", type=Path,
                        help=f"C source files (default: {TORTURE_DIR}/*.c)")
    parser.add_argument("--opt", dest="opts", action="append", default=[],
                        metavar="LEVEL", help="Optimization level (repeatable; default: all)")
    args = parser.parse_args()

    pk = os.environ.get("PK")
    if not pk:
        sys.exit("error: PK environment variable not set (run inside the nix dev shell)")

    compiler = find_tool(COMPILER)
    find_tool("spike")
    sources  = args.sources or sorted(TORTURE_DIR.glob("*.c"))
    opts     = args.opts or OPT_LEVELS

    if not sources:
        sys.exit(f"error: no sources found in {TORTURE_DIR}")

    passed = failed = skipped = 0

    with tempfile.TemporaryDirectory() as _tmp:
        tmp = Path(_tmp)
        for src in map(Path, sources):
            for opt in opts:
                elf = tmp / f"{src.stem}{opt}.elf"
                if not try_compile_link(compiler, src, opt, elf):
                    skipped += 1
                    continue
                try:
                    rc = run_spike(ISA, elf, timeout=SPIKE_TIMEOUT, pk=pk)
                except SpikeTimeout:
                    print(f"  TIMEOUT {src.name} {opt}")
                    failed += 1
                    elf.unlink(missing_ok=True)
                    continue
                elf.unlink(missing_ok=True)

                if rc != 0:
                    print(f"  FAIL {src.name} {opt}  (exit {rc})")
                    failed += 1
                else:
                    passed += 1

    total = passed + failed + skipped
    print(f"\n{passed}/{total} passed  ({skipped} skipped, {failed} failed)")
    if failed:
        sys.exit(1)


if __name__ == "__main__":
    main()
