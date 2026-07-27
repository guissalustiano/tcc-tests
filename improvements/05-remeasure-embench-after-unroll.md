# Re-measure Embench size and performance — current tables predate the const-shift unroll

`@tbl-embench-size` (main.typ:1470-1502) and `@tbl-embench-perf` (main.typ:1516-1542) were
measured with a compiler that no longer exists. Two commits have changed code generation
since:

- `c708790` — "sc1: unroll SRL/SRA synthesis for constant shift counts". Constant-count
  shifts went from looping to straight-line. This changes **static size** (up, per
  occurrence: an unrolled `x >> 1` is 159 instructions of `.text` where the loop was ~15)
  and **dynamic count** (down, often sharply: the loop paid 4-5 instructions per iteration
  *plus* a re-materialized back-edge, the unrolled form pays neither).
- The `!TARGET_AUIPC` `t1` register-clobber fix described at main.typ:1444, which changed
  register allocation around every synthesized call and long branch.

Neither commit touched the two tables (`git log --stat -- main.typ` confirms `c708790`'s
main.typ hunks are confined to §6 shifts, the cost table, and the appendices).

## Why the numbers are likely to move

The affected benchmarks are the constant-shift-heavy ones. `crc32` (×21.8), `md5sum`
(×13.3) and `nettle-aes` (×36.7) are dominated by fixed-width shifts and rotates, which are
exactly what `c708790` unrolled. The headline figures — ×4.94 static (main.typ:1504, 1550,
1568) and ×13.7 dynamic (main.typ:1544, 1550, 1568) — are quoted in six places, so a
re-measure ripples.

It is also possible that some of the five current timeouts (`aha-mont64`, `huffbench`,
`nettle-sha256`, `picojpeg`, `qrduino`) now complete within the 300 s Spike budget, which
would change "thirteen benchmarks that completed on both toolchains" and the geomean base.

## Task

1. Re-run the Embench-IoT size and performance measurements against the current
   `tests/sc1/build/install/` and `tests/sc2/build/install/` toolchains. Script it rather
   than transcribing by hand — sizes from `riscv32-none-elf-size` on each `.text`, dynamic
   counts from `spike --log-commits` (or an instruction-count option) under the same 300 s
   budget — and emit CSV that the two tables are generated from. The measurements have now
   drifted silently once; a script plus a recorded compiler revision is what prevents a
   second time.
2. Update both tables and every quoted aggregate:
   - main.typ:1504 (×4.94, ×1.41 `ud`, ×16.39 `statemate`)
   - main.typ:1514 ("Five benchmarks exceeded a 300-second Spike budget")
   - main.typ:1541 (caption: "thirteen benchmarks that completed on both toolchains")
   - main.typ:1544 (×13.7, ×1.0 `matmult-int`, ×1.3 `ud`, ×113.9 `xgboost`, ×73.1 `statemate`)
   - main.typ:1550 (×4.94 and ×13.7 again, plus the causal claim below)
   - main.typ:1568 (×4.94, ×16.39, ×13.7, "five benchmarks timing out")
3. Record the compiler revision used, in the table captions or a footnote. The absence of
   that is why this drift went unnoticed; adding it makes the next drift detectable.

## Also revisit the causal explanation

main.typ:1550 currently attributes the dynamic penalty to shift loops "each of which
re-materializes its own back-edge every iteration (@sc1-sll)". After the unroll that
mechanism only applies to variable-count shifts, and if the re-measured overhead drops, the
explanation may need to shift toward the synthesized comparisons and byte/halfword
accesses. Write the explanation from the new data, not from the old one.
`improvements/01-purge-const-shift-loop-prose.md` covers the same sentence from the prose
side — coordinate so one of the two owns it.

## Verify

- 19 benchmarks in `@tbl-embench-size`; every row present in `@tbl-embench-perf`.
- Timeout count in main.typ:1514 equals the `_timeout_` rows in `@tbl-embench-perf`.
- Geomean base stated in the caption equals 19 − (timeouts) − (`_linkfail_` rows;
  `wikisort` currently fails to link under rvsc2).
- Every ×N figure quoted in prose appears identically in the table it cites.
- `typst compile main.typ`.
