# Remove the false "differential against a reference RV32I build" claims

Three passages in §7 (Discussion / Results Summary) and §8 (Contributions) state that the
behavioral tests compare output against a reference RV32I binary. **No such comparison
exists.** §4/§7's own Methods text (main.typ:1291) correctly describes the tests as
self-validating, so the thesis currently contradicts itself.

There are two ways to close this gap: **build** the differential layer, or **stop claiming
it**. This task does the latter, because it is the one that makes the thesis true today.
If the layer is built later, invert the edits below rather than leaving both states in the
document.

## Ground truth

Neither harness involves a second compiler:

- `tests/sc1/behav.py` — compiles with `rvsc1-unknown-elf-gcc`, links against `pk32.ld`
  with `-lsim`, runs `spike --isa=rv32imac_zicsr_zifencei $PK test.elf`, and passes when
  spike exits 0. `ISA = "rv32imac_zicsr_zifencei"` (behav.py:26) is what *pk itself*
  needs, not a reference build.
- `tests/sc0/behav.py` — bare-metal HTIF, `ISA = "rv32i"` (behav.py:27), passes when the
  `tohost` token is 0.

```sh
grep -n 'reference\|gcc17\|riscv32-none' tests/sc1/behav.py tests/sc0/behav.py   # no hits
```

The tests are self-validating C programs that `exit(0)` on success — main.typ:1291 says so:
> "The program returns 0 when every assertion holds, and a distinct nonzero code
> identifying the first failing assertion otherwise. … a test case passes when the
> simulator exits with code 0."

## Passages to fix

1. **main.typ:1548 (§Discussion)**
   > "Behavioral equivalence is established independently by differential execution on
   > Spike: every rvsc1 program produces the same exit code as the reference RV32I binary
   > compiled from the same source, and every rvsc0 single-function program writes the
   > same `tohost` value as its reference."

   Replace with the actual mechanism: each program asserts its own results against values
   computed independently in C (and, for several categories, against an algebraic identity
   cross-check), returning a distinct nonzero code per failing assertion.

2. **main.typ:1562 (§Contributions)**
   > "…a behavioral equivalence suite that executes rvsc1 and rvsc0 binaries on Spike and
   > compares their outputs against a reference RV32I build."

   Same correction. Note the sentence that follows — "correct by execution (the computed
   results are indistinguishable from those of a full-ISA compiler)" — is defensible as
   written only because the expected values are hand-computed; consider rewording to
   "…match the values the C semantics require".

3. **main.typ:1566 (§Results Summary)**
   > "…the differential behavioral tests confirm semantic equivalence across all tested
   > programs."

   Drop "differential".

## Scope note

Do not weaken the correctness claim more than necessary. Self-validating tests are a real
result — 45 rvsc0 cases and 30 rvsc1 cases pass at all five optimization levels, plus
8 111/8 420 torture combinations that *are* genuinely self-checking (they `abort()` on
mismatch). The only thing being removed is the word "differential" and the nonexistent
reference binary.

## If you build the layer instead

A real differential layer would compile each `tests/scN/tests/behav/*.c` with both the
target toolchain and a reference `riscv32-none-elf-gcc` (rv32i), run both on Spike, and
compare. It catches a class the self-validating tests cannot: a *symmetric* miscompile,
where the synthesis and the assertion that checks it are wrong in the same direction.
Note the harness asymmetry that makes this non-trivial — rvsc1 runs under pk and can use
`exit()`, while rvsc0 has no `jalr` and must write its result to `tohost` directly, so the
two targets need different comparison plumbing.

If that is done first, keep the differential wording in §7/§8 and update main.typ:1291
instead, so the Methods and Results chapters still agree.

## Verify

```sh
grep -n -i 'differential\|reference RV32I\|reference build' main.typ
```
should return no hits describing the behavioral harness (§4's Method chapter may still
describe differential testing as a *design option* — check main.typ around the Development
Method chapter and align it too).

Then `typst compile main.typ`.
