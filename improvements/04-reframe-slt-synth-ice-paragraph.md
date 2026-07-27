# Reframe the `*branch<mode>_slt_synth` ICE paragraph — it undersells the result

main.typ:1446 opens:

> "Two further **pre-existing, unrelated** internal compiler errors (ICEs) surfaced among
> the skipped programs: `*branch<mode>_slt_synth` — the pattern that catches
> ordered-comparison branches combine constructs directly … declared its comparison
> operands with a predicate but no constraint string."

The sentence contradicts itself. `*branch<mode>_slt_synth` is a pattern **this work added**
(it exists only to synthesize ordered-comparison branches when `!TARGET_SLT`). The missing
constraint string is therefore a defect in this project's own backend — neither
"pre-existing" (it did not exist before this work) nor "unrelated" (it is squarely in the
synthesis machinery the thesis is about).

## Why this matters beyond wording

As written, the paragraph reads as "we tripped over two upstream GCC bugs", which is a
throwaway observation. What actually happened is a considerably better result for the
thesis and should be told as such:

1. The harness could not distinguish an ICE from an unsupported-feature diagnostic, so two
   crashes in this project's own code sat inside an undifferentiated skip count.
2. Fixing the harness classification (see `tests/common.py`: `CompileStatus`,
   `classify_compile`, `run_compiler`, `print_grouped`) surfaced them.
3. The fix — adding the constraints that the sibling `*branch<mode>` pattern already had —
   cleared both with zero regressions.

That is the validation methodology justifying its own existence, which is the argument
§7 is trying to make anyway (main.typ:1295 already says "folding those crashes into a skip
count is what allowed the two defects described in @sc1-torture-tests to go unnoticed").

## Fix

- main.typ:1446 — drop "pre-existing, unrelated". Say plainly that both ICEs were in this
  work's own `*branch<mode>_slt_synth` pattern, that they were invisible while compile
  failures were folded into a single skip count, and that they were found once the harness
  began classifying them.
- Keep the technical explanation as-is; the LRA / "no constraint to act on" /
  post-reload-split narrative and the two witnesses (`pr10352-1.c` → "could not split
  insn", `arith-rand.c` → ICE in `patch_jump_insn`) are accurate and worth keeping.
- Consider merging the reframed paragraph with main.typ:1448 ("Both defects were found by
  hand rather than reported by the harness…"), which currently repeats the same point from
  the other direction.

## Related inaccuracy in the same thread (fix together)

main.typ:1295 (§Test Strategies → GCC Torture Suite) says skip-folding is what allowed
**both** defects to go unnoticed. Only the two `slt_synth` ICEs were hidden that way. The
other defect — the `!TARGET_AUIPC` `t1` register-clobber bug described at main.typ:1444 —
surfaced as **timeouts**, not skips, and was found by root-causing them with
`spike --log-commits`. Split the claim:

- skip-folding hid the ICEs;
- the undrained-pipe bug (also described at main.typ:1448) is what *made* an ICE look like
  a timeout in the first place.

## Verify

- No sentence in §7 describes a defect in `riscv.md` or `riscv.cc` as "pre-existing" or
  "unrelated" unless it genuinely predates this work in upstream GCC.
- main.typ:1295 and main.typ:1444-1448 tell the same story about which defect was hidden
  by which harness shortcoming.
- `typst compile main.typ`.
