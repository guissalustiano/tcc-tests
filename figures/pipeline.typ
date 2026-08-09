// GCC compilation pipeline, marking the point where this work's synthesis
// happens (the RTL expansion pass, where `define_expand` bodies run).
//
// Drawn with cetz so the figure is reproducible from source.  Conventions:
//   - solid boxes / arrows : the representations and the passes between them
//   - dashed grey boxes    : machine-description constructs acting at that step
#import "@preview/cetz:0.4.2"

#let ir-fill = luma(245)
#let note-stroke = (paint: luma(140), thickness: 0.5pt, dash: "dashed")

#let pipeline-figure = {
  set text(size: 8pt)
  set par(leading: 0.5em, first-line-indent: 0pt, justify: false)
  cetz.canvas(length: 0.8cm, {
    import cetz.draw: *

    set-style(stroke: 0.6pt)

    let bx1 = 2.2
    let bx2 = 6.4
    let ax = 4.3 // x of the vertical flow arrows

    let stage(y, body, fill: ir-fill) = {
      rect((bx1, y - 0.45), (bx2, y + 0.45), fill: fill, stroke: 0.6pt)
      content(((bx1 + bx2) / 2, y), align(center, body))
    }
    // Vertical arrow between two stages, with the pass name to its left.
    let step(y1, y2, body) = {
      line((ax, y1 - 0.45), (ax, y2 + 0.45), mark: (end: "straight", scale: 0.55))
      content(
        (ax - 0.25, (y1 + y2) / 2),
        text(size: 7pt, align(right, body)),
        anchor: "east",
      )
    }
    let note(y1, y2, target, body) = {
      rect((10.2, y1), (18.1, y2), stroke: note-stroke, fill: none)
      content(
        (10.4, y1 - 0.2),
        text(size: 7pt, fill: luma(60), body),
        anchor: "north-west",
      )
      line(
        (10.2, target), (ax + 0.15, target),
        stroke: note-stroke,
        mark: (end: "straight", scale: 0.5),
      )
    }
    let phase(y1, y2, body) = {
      line((-0.5, y1), (-0.5, y2), stroke: (paint: luma(120), thickness: 0.6pt))
      line((-0.5, y1), (-0.3, y1), stroke: (paint: luma(120), thickness: 0.6pt))
      line((-0.5, y2), (-0.3, y2), stroke: (paint: luma(120), thickness: 0.6pt))
      content(
        (-0.85, (y1 + y2) / 2),
        std.rotate(-90deg, reflow: true, text(size: 7pt, fill: luma(80), body)),
      )
    }

    // --- the representations ----------------------------------------------
    stage(0)[C source]
    stage(-1.9)[GENERIC (AST)]
    stage(-3.9)[GIMPLE, SSA form]
    stage(-6.3)[RTL, pseudo-registers]
    stage(-8.4)[RTL, hard registers]
    stage(-10.2)[assembly (`.s`)]
    stage(-12.0)[ELF object]

    // --- the passes between them ------------------------------------------
    step(0, -1.9)[parse]
    step(-1.9, -3.9)[gimplify, \ SSA construction]
    step(-3.9, -6.3)[*RTL expansion*]
    step(-6.3, -8.4)[combine, register \ allocation (IRA/LRA), \ post-reload splits]
    step(-8.4, -10.2)[final: output \ templates]
    step(-10.2, -12.0)[`as` (binutils)]

    content(
      (bx2 + 0.3, -3.9),
      text(size: 7pt, fill: luma(80), style: "italic")[
        target-independent \ optimisation passes
      ],
      anchor: "west",
    )

    // --- phase brackets ----------------------------------------------------
    phase(0.5, -4.4)[front end + middle end]
    phase(-4.9, -10.7)[back end (target dependent)]

    // --- what the machine description contributes, and where ---------------
    rect((10.2, 0.5), (18.1, -1.15), stroke: note-stroke, fill: none)
    content(
      (10.4, 0.3),
      text(size: 7pt, fill: luma(60))[
        `rvscN.h` `CC1_SPEC` injects `-mno-shift`, `-mno-xor`, ... \
        which clear the `riscv.opt` flags `TARGET_SHIFT`, \
        `TARGET_XOR`, ... tested by every condition below
      ],
      anchor: "north-west",
    )
    line(
      (13.4, -1.15), (13.4, -3.7),
      stroke: note-stroke,
      mark: (end: "straight", scale: 0.5),
    )

    note(-3.7, -5.7, -5.1)[
      `define_expand` --- *where the synthesis happens.* \
      With `-mno-shift`, `ashlsi3` expands to a chain of `add` \
      instructions and calls `DONE`, so the `sll` pattern is never \
      reached: the operation ceases to exist as RTL.
    ]
    note(-6.5, -8.0, -7.35)[
      `define_insn_and_split` --- splits that must run \
      after register allocation, such as replacing \
      `andi rd,rs,0xff` by `li` + `and`.
    ]
    note(-8.5, -10.0, -9.3)[
      `define_insn` --- output templates. A pattern whose \
      condition is false (`TARGET_SHIFT` on rvsc1) is \
      invisible to instruction selection.
    ]
  })
}
