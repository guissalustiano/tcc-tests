# Four Embench benchmarks miscompile under rvsc1 (segfault on Spike)

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

## Scope note

@tbl-embench-perf now reports these four as crashes and excludes them from the geomean, so
the thesis is accurate as it stands. Fixing the miscompilation would change that table
again; re-run `just perf` in `tests/embench-iot/` and update the numbers together with the
geomean base stated in the caption.
