#!/usr/bin/env python3
r"""Report what a LaTeX run got wrong, attributed to the file that caused it.

pdflatex exits 0 on an undefined reference, a citation it could not resolve, a
label defined twice, and a line four centimetres into the margin.  All four are
defects, and all four are what a sync from `main.typ` introduces: a `\ref` to a
section that so far only exists in the Typst edition, a `\cite` key added to
`refs.bib` on the other side, a table copied over as `ll` whose cells have since
become paragraphs.  None of them fails a build, and all of them are buried in a
log that is nine parts font declarations.

Two things this does that grepping the log does not.  It reports the *file* each
complaint came from, by following the `(./Cap5-Desenvolvimento.tex ... )` nesting
TeX prints as it opens and closes inputs -- the log itself gives only a line
number, which is ambiguous when eight files are included into one document.  And
it undoes the log's 79-column hard wrap first, so a message split across two
lines is still recognised and a filename split across two lines still tracks.

Usage:  python3 check_log.py [main.log] [--overfull PT] [--quiet]

Exit status is 1 when anything is found, so `just build` fails on a defect
rather than printing a PDF path and leaving the reader to notice.
"""

import argparse
import re
import sys
from collections import defaultdict

# TeX wraps the log at max_print_line columns; a physical line of exactly that
# length is a continuation rather than a complete line.  79 is the default, and
# what this project builds with.
WRAP_COLUMNS = 79

# A path as TeX prints it when opening a file.  Requiring a dot in the last
# component keeps `(1)`, `(see the transcript file)` and the `(Font)` message
# prefixes out of the stack; they would otherwise unbalance it.
FILE_RE = re.compile(r"\(([^()\s{}]*[^()\s{}/]\.[A-Za-z0-9]+)")

UNDEFINED_RE = re.compile(
    r"LaTeX Warning: (Reference|Citation) `([^']*)' on page (\S+) undefined"
)
MULTIDEF_RE = re.compile(r"LaTeX Warning: Label `([^']*)' multiply defined")
BOX_RE = re.compile(
    r"(Overfull|Underfull) \\([hv])box \(([0-9.]+)pt too (?:wide|high)\)"
    r".*?at lines? ([0-9]+)(?:--([0-9]+))?"
)
MISSING_CHAR_RE = re.compile(r"Missing character: There is no (.*?) in font")
ERROR_RE = re.compile(r"^! (.*)")


def unwrap(text):
    """Undo the log's hard wrap, returning logical lines."""
    out, buf = [], None
    for raw in text.split("\n"):
        buf = raw if buf is None else buf + raw
        if len(raw) != WRAP_COLUMNS:
            out.append(buf)
            buf = None
    if buf is not None:
        out.append(buf)
    return out


def walk(lines):
    r"""Yield (line, file) pairs, following TeX's `(file ... )` nesting.

    The stack is best-effort: TeX prints unbalanced parentheses in error context
    and in some package messages, so the file reported is the innermost one that
    still looks open.  A line that itself opens a file is attributed to that
    file, so a complaint printed while `(./fig-datapath.tex` is being read lands
    on the figure rather than on the chapter that inputs it.
    """
    stack = []
    for line in lines:
        opened = FILE_RE.match(line.lstrip()) if line.lstrip().startswith("(") else None
        yield line, (opened.group(1) if opened else (stack[-1] if stack else None))
        i = 0
        while i < len(line):
            ch = line[i]
            if ch == "(":
                m = FILE_RE.match(line, i)
                stack.append(m.group(1) if m else None)
                i = m.end() if m else i + 1
                continue
            if ch == ")" and stack:
                stack.pop()
            i += 1


def collect(path, overfull_pt):
    with open(path, encoding="utf-8", errors="replace") as fh:
        lines = unwrap(fh.read())

    findings = {
        "errors": [],
        "undefined": defaultdict(list),   # (kind, name) -> pages
        "multidef": [],
        "boxes": [],                      # (pt, kind, file, lines)
        "missing_chars": defaultdict(int),
        "underfull": 0,
    }

    for line, where in walk(lines):
        where = where or "<main>"

        m = ERROR_RE.match(line)
        if m:
            findings["errors"].append((where, m.group(1)))
            continue

        m = UNDEFINED_RE.search(line)
        if m:
            findings["undefined"][(m.group(1), m.group(2))].append(m.group(3))
            continue

        m = MULTIDEF_RE.search(line)
        if m:
            findings["multidef"].append((where, m.group(1)))
            continue

        m = MISSING_CHAR_RE.search(line)
        if m:
            findings["missing_chars"][m.group(1)] += 1
            continue

        m = BOX_RE.search(line)
        if m:
            full, box, pt, first, last = m.groups()
            pt = float(pt)
            if full == "Underfull":
                findings["underfull"] += 1
            elif pt >= overfull_pt:
                span = first if last is None else f"{first}--{last}"
                findings["boxes"].append((pt, f"\\{box}box", where, span))
            continue

    return findings


def report(findings, overfull_pt, quiet):
    bad = False

    if findings["errors"]:
        bad = True
        print(f"errors ({len(findings['errors'])}):")
        for where, msg in findings["errors"]:
            print(f"  {where}: {msg}")

    if findings["undefined"]:
        bad = True
        print(f"undefined ({len(findings['undefined'])}):")
        for (kind, name), pages in sorted(findings["undefined"].items()):
            uniq = sorted(set(pages), key=lambda p: (len(p), p))
            print(f"  {kind.lower():9} {name}  (page {', '.join(uniq)})")

    if findings["multidef"]:
        bad = True
        print(f"multiply-defined labels ({len(findings['multidef'])}):")
        for where, name in findings["multidef"]:
            print(f"  {where}: {name}")

    if findings["boxes"]:
        bad = True
        print(f"text in the margin, over {overfull_pt:g}pt "
              f"({len(findings['boxes'])}):")
        for pt, box, where, span in sorted(findings["boxes"], reverse=True):
            print(f"  {pt:8.1f}pt  {box}  {where}:{span}")

    # Not failures.  A missing glyph is usually a character the font genuinely
    # lacks in one encoding and prints correctly elsewhere, and underfull boxes
    # are the price of a justified 16 cm measure; both are worth seeing, neither
    # is worth blocking on.
    if not quiet and findings["missing_chars"]:
        print(f"missing characters ({sum(findings['missing_chars'].values())}):")
        for ch, n in sorted(findings["missing_chars"].items()):
            print(f"  {ch}  ({n}x)")

    if not quiet and findings["underfull"]:
        print(f"underfull boxes: {findings['underfull']} (not checked)")

    if not bad:
        print(f"clean: no undefined references or citations, no duplicate "
              f"labels, nothing over {overfull_pt:g}pt into the margin")

    return bad


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("log", nargs="?", default="main.log",
                    help="LaTeX log to read (default: main.log)")
    ap.add_argument("--overfull", type=float, default=20.0, metavar="PT",
                    help="report overfull boxes at least this wide "
                         "(default: 20pt, about 7mm)")
    ap.add_argument("--quiet", action="store_true",
                    help="omit the informational counts")
    args = ap.parse_args()

    try:
        findings = collect(args.log, args.overfull)
    except FileNotFoundError:
        sys.exit(f"{args.log}: not found -- run `just compile` first")

    sys.exit(1 if report(findings, args.overfull, args.quiet) else 0)


if __name__ == "__main__":
    main()
