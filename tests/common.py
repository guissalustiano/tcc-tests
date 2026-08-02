"""Shared utilities for rvscN ISA compliance validation and behavioral testing."""

import dataclasses
import enum
import os
import re
import shutil
import signal
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


# ── compile outcome classification ─────────────────────────────────────────

class CompileStatus(enum.Enum):
    """How a compile attempt ended.

    ICE is deliberately distinct from ERROR: an ICE is a backend bug worth
    fixing, while an ERROR is nearly always an unsupported language feature or
    a build/link configuration gap.  Folding the two into one silent "skip"
    bucket is how the *branch<mode>_slt_synth crashes stayed invisible until
    they were tripped over by hand.
    """
    OK = "ok"
    ICE = "ice"
    ERROR = "error"
    TIMEOUT = "timeout"


# An ICE announces itself with one of these.  "during RTL pass:" is not in the
# list on purpose -- gcc prints it above ordinary hard errors too, so matching
# it would classify unsupported-feature diagnostics as compiler crashes.
_ICE_RE = re.compile(
    r"internal compiler error:"
    r"|could not split insn"
    r"|unrecognizable insn"
    r"|in verify_\w+, at "
)
_ICE_MSG_RE  = re.compile(r"internal compiler error:\s*(.+)")
_ICE_ALT_RE  = re.compile(r"error:\s*(could not split insn|unrecognizable insn)")
_ICE_PASS_RE = re.compile(r"during (\w+) pass:\s*(\S+)")
_DIAG_RE     = re.compile(r"\b(?:fatal error|error):\s*(.+)")


def ice_signature(stderr: str) -> str:
    """Collapse an ICE report to a one-line key that groups by root cause.

    "…: internal compiler error: in patch_jump_insn, at cfgrtl.cc:1360"
      → "in patch_jump_insn, at cfgrtl.cc:1360 [during RTL pass: jump2]"

    Grouping matters because one backend bug typically fires across dozens of
    (test, opt-level) pairs; the signature is what makes that one line instead
    of dozens.
    """
    m = _ICE_MSG_RE.search(stderr) or _ICE_ALT_RE.search(stderr)
    sig = m.group(1).strip() if m else "unknown ICE"
    p = _ICE_PASS_RE.search(stderr)
    if p:
        sig += f" [during {p.group(1)} pass: {p.group(2)}]"
    return sig


def error_signature(stderr: str) -> str:
    """First diagnostic of an ordinary compile error, as a grouping key."""
    m = _DIAG_RE.search(stderr)
    return m.group(1).strip() if m else "(no diagnostic)"


def classify_compile(returncode: int | None, stderr: str) -> CompileStatus:
    """Map a finished compiler process onto a CompileStatus."""
    if returncode == 0:
        return CompileStatus.OK
    # gcc exits 1 for ordinary diagnostics; death by signal (negative) or any
    # other code means it fell over rather than rejecting the program.
    crashed = returncode is not None and (returncode < 0 or returncode > 1)
    if _ICE_RE.search(stderr) or crashed:
        return CompileStatus.ICE
    return CompileStatus.ERROR


@dataclasses.dataclass(frozen=True)
class CompileResult:
    status: CompileStatus
    stderr: str = ""
    returncode: int | None = None
    obj: Path | None = None

    @property
    def ok(self) -> bool:
        return self.status is CompileStatus.OK

    @property
    def signature(self) -> str:
        """Grouping key appropriate to this result's status."""
        if self.status is CompileStatus.ICE:
            return ice_signature(self.stderr)
        if self.status is CompileStatus.ERROR:
            return error_signature(self.stderr)
        if self.status is CompileStatus.TIMEOUT:
            return "compiler did not finish within the timeout"
        return "compiled cleanly"


def run_compiler(cmd: list[str], timeout: int) -> CompileResult:
    """Run a compiler command to completion and classify how it ended.

    Uses communicate() rather than wait(): with stdout/stderr as pipes, a
    compiler that emits more than the ~64 KB pipe buffer blocks on write and
    never exits, so wait() would report a hang.  An ICE dumps the offending
    RTL insn and routinely clears that threshold, which made exactly the
    interesting case look like a timeout.

    The child gets its own process group so a genuine hang can be killed along
    with whatever it spawned (cc1, as, ld).
    """
    try:
        proc = subprocess.Popen(
            cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE,
            text=True, errors="replace", start_new_session=True,
        )
    except OSError as e:
        return CompileResult(CompileStatus.ERROR, f"error: cannot run compiler: {e}")
    try:
        _, stderr = proc.communicate(timeout=timeout)
    except subprocess.TimeoutExpired:
        os.killpg(proc.pid, signal.SIGKILL)
        _, stderr = proc.communicate()
        return CompileResult(CompileStatus.TIMEOUT, stderr or "")
    return CompileResult(classify_compile(proc.returncode, stderr), stderr, proc.returncode)


def format_grouped(
    title: str,
    entries: list[tuple[str, str, str]],
    limit: int | None = None,
) -> list[str]:
    """Render a report section of (source name, opt level, signature) entries.

    Entries are grouped by signature and ranked most frequent first, because a
    single backend bug typically fires across dozens of (test, opt) pairs and
    is far more actionable as one line than as dozens.  Ties are broken by
    signature text and every inner list is sorted, so the same set of entries
    always renders byte-identically -- that is what makes a persisted report
    diffable between runs.  An empty section renders as no lines at all.
    """
    if not entries:
        return []
    groups: dict[str, dict[str, list[str]]] = {}
    for name, opt, sig in entries:
        groups.setdefault(sig, {}).setdefault(name, []).append(opt)

    lines = [f"── {title} — {len(entries)} across {len(groups)} distinct ──"]
    ranked = sorted(groups.items(),
                    key=lambda kv: (-sum(len(v) for v in kv[1].values()), kv[0]))
    for sig, srcs in ranked:
        count = sum(len(v) for v in srcs.values())
        lines.append(f"  {sig}  ({count})")
        shown = sorted(srcs.items())
        for name, opts in shown[:limit]:
            lines.append(f"      {name}  {' '.join(sorted(opts))}")
        if limit is not None and len(shown) > limit:
            lines.append(f"      … and {len(shown) - limit} more files")
    return lines


def print_grouped(
    title: str,
    entries: list[tuple[str, str, str]],
    limit: int | None = None,
) -> None:
    """Print what format_grouped renders, preceded by a blank line."""
    lines = format_grouped(title, entries, limit)
    if lines:
        print()
        print("\n".join(lines))


def compile_probe(
    compiler: str,
    src: Path,
    opt: str,
    cflags: list[str],
    timeout: int = 120,
) -> CompileResult:
    """Compile src to a temporary object, classifying the outcome.

    On success the caller owns result.obj and is responsible for unlinking it;
    on any failure the object is already cleaned up.
    """
    o = Path(tempfile.mktemp(suffix=".o"))
    res = run_compiler(
        [compiler, "-c", opt, "-ffreestanding", *cflags, "-o", str(o), str(src)],
        timeout,
    )
    if res.ok:
        return dataclasses.replace(res, obj=o)
    o.unlink(missing_ok=True)
    return res


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


@dataclasses.dataclass(frozen=True)
class SpikeRun:
    returncode: int
    stdout: str
    stderr: str


def run_spike_capture(isa: str, elf: Path, timeout: int = 30,
                      pk: str | None = None) -> SpikeRun:
    """Run spike and return its exit code together with what it printed.

    The output matters for failure triage: an aborting test, a pk trap report
    and a bad syscall all surface as a nonzero exit code, and only the text
    distinguishes them.
    """
    cmd = ["spike", f"--isa={isa}"]
    if pk:
        cmd.append(pk)
    cmd.append(str(elf))
    try:
        r = subprocess.run(cmd, capture_output=True, text=True,
                           errors="replace", timeout=timeout)
    except subprocess.TimeoutExpired:
        raise SpikeTimeout(elf.name)
    return SpikeRun(r.returncode, r.stdout or "", r.stderr or "")


def run_spike(isa: str, elf: Path, timeout: int = 30, pk: str | None = None) -> int:
    """Run spike and return the exit code. Pass pk= to run under the proxy kernel."""
    return run_spike_capture(isa, elf, timeout, pk).returncode
