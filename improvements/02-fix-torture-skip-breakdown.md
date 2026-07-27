# Fix the torture-suite skip breakdown in main.typ (numbers do not add up)

main.typ:1442 explains the "Skipped" column of `@tbl-torture-results`. The explanation
double-counts, omits a category, and misattributes the dominant cause. The paragraph was
rewritten in commit `4f423ef`, which is also the commit that added the libm entries the
paragraph forgets to mention.

## Ground truth

`KNOWN_UNSUPPORTED` in `tests/sc1/torture_behav.py:55-129` has **54 entries**, categorised
by the comments in that set:

| Category | Sources | Notes |
|----------|---------|-------|
| `printf`/`sprintf`/`fprintf`/`vfprintf` family | **40** | undefined `_vfprintf_r`, `_svfprintf_r`, `_vfiprintf_r` in this newlib build |
| upstream-flagged "expensive" | 5 | `memclr.c`, `memcpy-a{1,2,4,8}.c` — compile time alone exceeds `COMPILE_TIMEOUT` |
| `__int128` | 3 | `pr93213.c`, `pr84748.c`, `pr105613.c` |
| libm (`pow`, `floor`) | **2** | `980709-1.c`, `float-floor.c` — no libm linked for this target |
| `sys/mman.h` | 2 | `loop-2f.c`, `loop-2g.c` |
| `_Decimal` | 1 | `pr80692.c` |
| x87 inline asm | 1 | `990413-2.c` |
| **Total** | **54** | matches the 54-per-level skip count in `@tbl-torture-results` |

Count it mechanically:

```sh
python3 - <<'EOF'
import re
s = open('tests/sc1/torture_behav.py').read()
m = re.search(r'KNOWN_UNSUPPORTED: set\[str\] = \{(.*?)\n\}', s, re.S)
print(len(re.findall(r'"([^"]+\.c)"', m.group(1))), 'entries')
EOF
```

## Problems in the current text

1. **The 54 is attributed entirely to printf.**
   > "The overwhelming majority (54 sources, filtered at every optimization level) trace
   > back to a single cause … `printf`-family …"

   Only 40 of the 54 are printf-family.

2. **The other categories are then presented as additional, outside the 54.**
   > "The remaining sources are excluded up front regardless of optimization level: five
   > upstream-flagged 'expensive' tests …, one using `_Decimal` …, one using x87-specific
   > inline asm, three using `__int128` …, and two using `sys/mman.h` …"

   Those 12 are *inside* the 54, so the paragraph reads as 54 + 12 = 66 — contradicting
   the table's own 54-per-level figure.

3. **The 2 libm sources are missing entirely.** 40 + 12 = 52, not 54. `980709-1.c` and
   `float-floor.c` were added to `KNOWN_UNSUPPORTED` by `4f423ef` but never made it into
   the prose.

## Fix

Rewrite main.typ:1442 so the categories partition the 54 rather than overlap it. Suggested
shape (keep the existing framing that none of this is sc1-related):

- One sentence: 54 sources are filtered at every level, and the table below breaks them
  down — consider replacing the prose enumeration with an actual small table, since seven
  categories in one sentence is what caused the error.
- Keep the printf explanation (40 sources, the `_vfprintf_r` / `_svfprintf_r` /
  `_vfiprintf_r` gap) as the dominant cause but state the count as 40.
- Add libm (2 sources, undefined `pow`/`floor`) — same class of build/link configuration
  gap as printf, so it can share that sentence.
- Keep the `-O0`-only trio (57 vs 54) exactly as written; that part is correct.

## Cross-check while editing

The uncommitted paragraph at main.typ:1450 reports the static sweep and is **consistent**
with the corrected breakdown — its 35 front-end rejections are `__int128` (3 sources × 5),
`sys/mman.h` (2 × 5), x87 (1 × 5), `_Decimal` (1 × 5) = 35, and libm/printf correctly do
not appear there because those compile fine and only fail at link. Do not "fix" it.

## Verify

- Category counts in the paragraph sum to exactly 54.
- 54 matches the `-O1`/`-O2`/`-O3`/`-Os` Skipped column in `@tbl-torture-results`
  (main.typ:1433-1436), and 54 + 3 = 57 matches `-O0` (main.typ:1432).
- `typst compile main.typ`.
