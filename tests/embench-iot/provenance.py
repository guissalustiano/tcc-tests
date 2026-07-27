"""Provenance header for the Embench measurement CSVs.

The size and performance tables in main.typ silently drifted once already: they
were measured before the constant-shift unroll (c708790) and the !TARGET_AUIPC
register-clobber fix, and nothing in the recorded output said which compiler had
produced them.  Every CSV now carries the backend revision it was measured with,
so the next drift is visible by inspection rather than by archaeology.
"""

import subprocess
from datetime import date
from pathlib import Path

GCC_SRC = Path("/home/salust/p/scgcc/gcc")


def _run(cmd: list[str], cwd: Path | None = None) -> str | None:
    try:
        r = subprocess.run(cmd, cwd=cwd, capture_output=True, text=True, timeout=30)
    except (OSError, subprocess.SubprocessError):
        return None
    return r.stdout.strip() if r.returncode == 0 else None


def backend_revision() -> str:
    """Short git revision of the GCC fork, with -dirty if the tree has edits."""
    rev = _run(["git", "rev-parse", "--short", "HEAD"], cwd=GCC_SRC)
    if rev is None:
        return "unknown"
    if _run(["git", "status", "--porcelain"], cwd=GCC_SRC):
        rev += "-dirty"
    return rev


def spike_version() -> str:
    # `spike --help` exits nonzero and may write to either stream, so take both
    # and ignore the status rather than going through _run().
    try:
        r = subprocess.run(["spike", "--help"], capture_output=True, text=True,
                           timeout=30)
    except (OSError, subprocess.SubprocessError):
        return "unknown"
    for line in (r.stdout + r.stderr).splitlines():
        if "Spike RISC-V ISA Simulator" in line:
            return line.split("Simulator")[-1].strip()
    return "unknown"


def header(extra: str = "") -> str:
    """One CSV comment line naming what produced the numbers below it."""
    parts = [f"gcc-fork={backend_revision()}", f"measured={date.today().isoformat()}"]
    if extra:
        parts.append(extra)
    return "# " + " ".join(parts)
