# Four Embench benchmarks miscompile under rvsc1 (segfault on Spike)

> **STATUS: root cause found and fixed** in gcc `0b3abf309dd`, "riscv: reserve t0 as fixed
> on !TARGET_AUIPC, like t1". `edn`, `sglib-combined`, `wikisort` and `nsichneu` all pass.
> `qrduino` still fails and is now the only open part; see "Remaining: qrduino" at the end.
> The original investigation notes are kept below as written, since the diagnosis they
> reached turned out to be correct.
>
> **Root cause.** The absolute-address sequences that replace `auipc`-relative jumps and
> calls hardcode `t0` inside raw asm template text -- the unconditional jump, six
> ordered-comparison and branch-NE forms, indirect jump, tablejump and both call sequences.
> None declares the clobber in its RTL, so the allocator was free to keep a live value in
> `t0` across such an insn. `t1` had already been reserved as fixed in
> `riscv_conditional_register_usage` for exactly this reason; commit `2666f97a4cb` later
> moved the jump synthesis from `t1` to `t0` to keep it clear of the call-address temporary,
> **but the reservation did not follow**, leaving every plain jump able to destroy a live
> `t0`. The `jump` pattern's own comment asserts `t0` is "never live across a mid-function
> jump" -- that assumption is what fails.
>
> The trace, from a reduced `jpegdct`-only reproducer:
>
> ```
> 10658  addi t0,t0,-556     t0 = jump target
> 1065c  jalr zero,0(t0)     jump synthesis
> 12e04  sw   t0,40(sp)      spills the jump target where an array offset should be
> 1109c  lw   a5,40(sp)      a5 = 0x12dd4
> 110a0  add  s1,s8,a5       wild pointer -> load segfault
> ```
>
> Reserving `t0` fixes the family in one place, where declaring the clobber pattern by
> pattern only ever fixed whichever pattern had been found. Cost is one allocatable register
> on sc0/sc1 and nothing elsewhere.
>
> `nsichneu`'s timeout was the same defect, not slowness: it now retires 14 682 354
> instructions against the 14 689 559 it retired before the defect was introduced. Two
> benchmarks that had been "passing" were also doing large amounts of wasted work --
> `aha-mont64` fell from 413 815 964 retired instructions to 197 361 701 and `depthconv`
> from 1 212 764 378 to 593 772 817 -- so the corruption was inflating results in
> benchmarks that never crashed at all.
>
> Verified: ISA compliance 95/95, behavioral 30/30, `gcc.c-torture` static sweep 8150/8150
> clean with 0 ICEs and 0 violations. @tbl-embench-size and @tbl-embench-perf re-measured
> and updated; the geomean base rose from fourteen benchmarks to seventeen.

Found while re-measuring for `improvements/05-remeasure-embench-after-unroll.md`, with the
backend at `16de133341e`. This is a code defect, not a documentation one — the only item in
the backlog that is.

## Symptom

Four of the nineteen Embench-IoT benchmarks trap under `rvsc1` when run on Spike via pk.
All four exit 255, and all four complete normally under `rvsc2` and `gcc17` from the same
sources and flags, so the fault is in synthesis, not in the benchmark or the environment.

| Benchmark | rvsc2 | rvsc1 |
|---|---|---|
| `edn` | 68 624 356 | segfault |
| `qrduino` | 5 139 825 | segfault |
| `sglib-combined` | 3 005 598 | segfault |
| `wikisort` | (link fails) | segfault |

A fifth, `nsichneu`, now exceeds the 300 s Spike budget where it previously completed in
14.7 M instructions. Worth checking whether it is genuinely slower or stuck in a loop.

## Reproduce

```sh
cd tests/embench-iot && python3 perf_report.py --benchmarks edn qrduino sglib-combined
```

Or standalone, to see the trap rather than just the exit code — compile
`support/main.c support/beebsc.c config/rvsc/boardsupport.c src/edn/*.c` with
`-O2 -ffreestanding -std=gnu11 -DWARMUP_HEAT=0 -DGLOBAL_SCALE_FACTOR=1`, link with
`-T tests/sc1/pk32.ld -lsim -lm`, then
`spike --isa=rv32imac_zicsr_zifencei $PK b.elf`.

`edn` gives:

```
pc 00016d40 va/inst 000379f0 sr 80006020
User load segfault @ 0x000379f0
```

## What is known

The faulting instruction is `lw a2,0(a3)` inside `jpegdct`, and `a3` holds `0x000379f0` —
past the end of `.bss` (which ends at `0x22664`), so `a3` is a wild pointer rather than a
valid object. It sits immediately after a variable-count shift-synthesis loop, whose back
edge is the `!TARGET_AUIPC` `lui t0 / addi t0 / jalr zero,0(t0)` sequence:

```
16d18:  addi  a2,a2,-1
16d1c:  add   a1,a1,a1
16d20:  beq   a2,zero,16d30
16d24:  lui   t0,0x17
16d28:  addi  t0,t0,-744
16d2c:  jalr  zero,0(t0)
16d30:  add   a4,s1,a4
...
16d40:  lw    a2,0(a3)        <-- traps
```

This is the shape of the IRA register-corruption family that `2666f97a4cb`
(`NOTRAMP_REGS`), `ccd24732138` (t0/t1 clobbers on shift-synthesis patterns) and the
`NORA_REGS`/`=&yr` work already addressed for other registers: a synthesis sequence
destroys a register holding a live value because the pattern does not declare it clobbered.
These four cases suggest the enumeration is still incomplete. That has not been proven here
— confirming it means tracing where `a3` is written, e.g. with `spike --log-commits`.

Bisecting by re-enabling one instruction at a time (`-mslt`, `-mbyte`, `-mxor`) does not
make `edn` pass, which is consistent with the shift path but does not isolate it. Note that
`-mshift` cannot be used for this bisect: on rvsc1 it ICEs with "unrecognizable insn" on a
plain `(lshiftrt:SI (reg) (reg))` during `vregs`, because the native shift `define_insn`
stays gated off even when `TARGET_SHIFT` is restored. That is a separate latent bug in a
flag combination the shipped target never uses, but it does violate the "define_insn
condition and define_expand path must stay in sync" invariant in CLAUDE.md.

## Why it was not noticed

`perf_report.py` recorded the retired-instruction count even when the run exited nonzero, so
a crashed benchmark entered `perf.csv` as an ordinary number. `edn` was published as
512 612 605 (a plausible 7.5x overhead); it now reads 4 899 454, or *0.1x* — synthesis
apparently running fourteen times faster than native, which is impossible and was the
tell. The harness has since been changed to record `FAIL(rc=N)` instead of a count, so this
class of failure can no longer be laundered into the table or the geomean.

This is the same defect the thesis already describes for the torture harness at
main.typ:1470 — a measurement tool that cannot distinguish a failure from a result hides
defects in the code it is measuring.

## Remaining: qrduino

The one benchmark the `t0` fix did not resolve. It no longer segfaults; it now runs to
completion and fails its own output check, which is a different and narrower defect.

What is established:

- Fails only at `-O2` and `-O3`; passes at `-O0`, `-O1` and `-Os`. Passes under rvsc2 and
  `gcc17` from identical sources, so it is synthesis, not the benchmark.
- The failure is the output comparison, not the heap check. Splitting
  `verify_benchmark`'s two conditions shows `memcmp (strinbuf, expected, 22)` failing while
  `check_heap_beebs` passes, so nothing is overflowing the BEEBS heap.
- The first wrong byte is index 1 of 22 (byte 0 is correct), so the encoding diverges early
  rather than being truncated or shifted.
- Survives `-fno-inline`, `-fno-schedule-insns2`, `-fno-reorder-blocks`, `-fno-gcse`,
  `-fno-tree-vectorize`, `-fno-ipa-cp` and `-fno-strict-aliasing`, so it is not obviously a
  scheduling or inlining artefact.
- Re-enabling any single instruction (`-mhalf`, `-mslt`, `-mxor`, `-mbne`, `-mori`,
  `-mslti`) does not fix it. `-mbyte` and `-mandi` cannot be used for the bisect: they fail
  to build, which is itself worth a look.
- Compiling any one translation unit at `-O1` while the rest stay at `-O2` makes it pass,
  including `support/main.c`, which cannot affect the encoder's arithmetic and can only be
  changing code layout. Combined with its robustness to the `-fno-*` flags above, that
  points at something layout- or allocation-sensitive rather than a specific transformation.

Suggested next step: the same reduction that cracked `edn`. Cut `qrduino` down to the
encoder function whose output first diverges, then difference the `spike --log-commits`
trace against the rvsc2 build of the same function to find the first instruction whose
result differs. The `edn` reduction took a single function and about forty lines.

## Scope note

@tbl-embench-perf now reports these four as crashes and excludes them from the geomean, so
the thesis is accurate as it stands. Fixing the miscompilation would change that table
again; re-run `just perf` in `tests/embench-iot/` and update the numbers together with the
geomean base stated in the caption.
