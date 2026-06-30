"""Shared utilities for rvscN ISA compliance validation and behavioral testing."""

import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

# "   10: 00450513   addi  a0,a0,4"  →  captures "addi"
_INSN_RE = re.compile(r"^\s+[0-9a-f]+:\s+[0-9a-f]+\s+(\S+)", re.MULTILINE)


def find_tool(name: str) -> str:
    path = shutil.which(name)
    if path is None:
        sys.exit(f"error: tool not found on PATH: {name}")
    return path


def _run(*cmd: str) -> subprocess.CompletedProcess:
    return subprocess.run(list(cmd), check=True, capture_output=True, text=True)


# ── assembly validation pipeline ───────────────────────────────────────────

def compile_to_asm(compiler: str, src: Path, cflags: list[str]) -> str:
    out = Path(tempfile.mktemp(suffix=".s"))
    try:
        try:
            _run(compiler, "-S", "-O1", "-ffreestanding", *cflags, "-o", str(out), str(src))
        except subprocess.CalledProcessError as e:
            sys.exit(f"compile error ({src.name}):\n{e.stderr.strip()}")
        return out.read_text()
    finally:
        out.unlink(missing_ok=True)


def assemble(assembler: str, march: str, asm_text: str) -> Path:
    s = Path(tempfile.mktemp(suffix=".s"))
    o = Path(tempfile.mktemp(suffix=".o"))
    s.write_text(asm_text)
    try:
        try:
            _run(assembler, f"-march={march}", "-o", str(o), str(s))
        except subprocess.CalledProcessError as e:
            o.unlink(missing_ok=True)
            sys.exit(f"assemble error:\n{e.stderr.strip()}")
    finally:
        s.unlink(missing_ok=True)
    return o


def compile_to_obj(compiler: str, src: Path, opt: str, cflags: list[str]) -> Path:
    o = Path(tempfile.mktemp(suffix=".o"))
    try:
        _run(compiler, "-c", opt, "-ffreestanding", *cflags, "-o", str(o), str(src))
    except subprocess.CalledProcessError as e:
        o.unlink(missing_ok=True)
        sys.exit(f"compile error ({src.name}):\n{e.stderr.strip()}")
    return o


def try_compile_to_obj(compiler: str, src: Path, opt: str, cflags: list[str]) -> Path | None:
    """Like compile_to_obj but returns None on failure instead of exiting."""
    o = Path(tempfile.mktemp(suffix=".o"))
    try:
        _run(compiler, "-c", opt, "-ffreestanding", *cflags, "-o", str(o), str(src))
        return o
    except subprocess.CalledProcessError:
        o.unlink(missing_ok=True)
        return None


def validate_source_direct(
    compiler: str,
    objdump: str,
    src: Path,
    opt: str,
    allowed: set[str],
    cflags: list[str],
) -> tuple[bool, list[str]]:
    obj = compile_to_obj(compiler, src, opt, cflags)
    try:
        mnemonics = disassemble_mnemonics(objdump, obj)
    finally:
        obj.unlink(missing_ok=True)
    violations = sorted({m for m in mnemonics if m not in allowed})
    return not violations, violations


def disassemble_mnemonics(objdump: str, obj: Path) -> list[str]:
    try:
        result = _run(objdump, "-M", "no-aliases", "-d", str(obj))
    except subprocess.CalledProcessError as e:
        sys.exit(f"objdump error:\n{e.stderr.strip()}")
    return _INSN_RE.findall(result.stdout)


def validate_source(
    compiler: str,
    assembler: str,
    objdump: str,
    march: str,
    src: Path,
    allowed: set[str],
    cflags: list[str],
) -> tuple[bool, list[str]]:
    asm = compile_to_asm(compiler, src, cflags)
    obj = assemble(assembler, march, asm)
    try:
        mnemonics = disassemble_mnemonics(objdump, obj)
    finally:
        obj.unlink(missing_ok=True)
    violations = sorted({m for m in mnemonics if m not in allowed})
    return not violations, violations


# ── behavioral / spike pipeline ────────────────────────────────────────────

def assemble_file(assembler: str, march: str, src: Path, out: Path) -> None:
    """Assemble a .s/.S file directly to a caller-specified output path."""
    try:
        _run(assembler, f"-march={march}", "-o", str(out), str(src))
    except subprocess.CalledProcessError as e:
        sys.exit(f"assemble error ({src.name}):\n{e.stderr.strip()}")


def compile_c(compiler: str, src: Path, cflags: list[str], out: Path) -> None:
    """Compile a C source file to an object (no -ffreestanding)."""
    try:
        _run(compiler, "-c", *cflags, "-o", str(out), str(src))
    except subprocess.CalledProcessError as e:
        sys.exit(f"compile error ({src.name}):\n{e.stderr.strip()}")


def link_elf(
    linker: str,
    ld_script: Path,
    objects: list[Path],
    out: Path,
    extra_flags: list[str] = (),
    libs: list[str] = (),
) -> None:
    try:
        _run(
            linker, *extra_flags,
            "-T", str(ld_script),
            *[str(o) for o in objects],
            *libs,
            "-o", str(out),
        )
    except subprocess.CalledProcessError as e:
        sys.exit(f"link error:\n{e.stderr.strip()}")


class SpikeTimeout(Exception):
    pass


def run_spike(isa: str, elf: Path, timeout: int = 30) -> int:
    try:
        r = subprocess.run(
            ["spike", f"--isa={isa}", str(elf)],
            capture_output=True, text=True,
            timeout=timeout,
        )
        return r.returncode
    except subprocess.TimeoutExpired:
        raise SpikeTimeout(elf.name)


def run_spike_with_stdout(isa: str, elf: Path, timeout: int = 30) -> tuple[int, str]:
    """Run spike and return (returncode, stdout). Raises SpikeTimeout on timeout."""
    try:
        r = subprocess.run(
            ["spike", f"--isa={isa}", str(elf)],
            capture_output=True, text=True,
            timeout=timeout,
        )
        return r.returncode, r.stdout
    except subprocess.TimeoutExpired:
        raise SpikeTimeout(elf.name)
