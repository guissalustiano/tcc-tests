// Single-cycle datapath of the Hennessy-Patterson eight-instruction subset.
//
// Drawn with cetz so the figure is reproducible from source.  Coordinates are
// in canvas units; `length` below fixes the unit at just under a centimetre so
// the whole drawing fits the 16 cm text block of the thesis.
//
// Layout conventions used throughout:
//   - solid black lines  : datapath (values)
//   - dashed grey lines  : control signals
//   - dashed grey box    : paths the subset does *not* have
#import "@preview/cetz:0.4.2"

#let box-fill = luma(245)
#let ctrl-stroke = (paint: luma(110), thickness: 0.5pt, dash: "dashed")
#let absent-stroke = (paint: luma(140), thickness: 0.5pt, dash: "dashed")

#let datapath-figure = {
  set text(size: 8pt)
  set par(leading: 0.45em, first-line-indent: 0pt, justify: false)
  cetz.canvas(length: 0.85cm, {
    import cetz.draw: *

    set-style(stroke: 0.6pt, mark: (end: none, scale: 0.5))

    let unit(x1, y1, x2, y2, body) = {
      rect((x1, y1), (x2, y2), fill: box-fill, stroke: 0.6pt)
      content(((x1 + x2) / 2, (y1 + y2) / 2), align(center, body))
    }
    let mux(x1, y1, x2, y2) = {
      rect((x1, y1), (x2, y2), fill: luma(225), stroke: 0.6pt)
      content(
        ((x1 + x2) / 2, (y1 + y2) / 2),
        std.rotate(-90deg, reflow: true, text(size: 6pt)[MUX]),
      )
    }
    // Orthogonal wire through a list of points, arrow on the last segment.
    let wire(..pts) = line(..pts.pos(), mark: (end: "straight", scale: 0.55))
    let plain(..pts) = line(..pts.pos())
    let dot(p) = circle(p, radius: 0.06, fill: black, stroke: none)
    let ctrl(..pts) = line(..pts.pos(), stroke: ctrl-stroke, mark: (end: "straight", scale: 0.5))
    let ctrl-plain(..pts) = line(..pts.pos(), stroke: ctrl-stroke)
    let clbl(p, body, anchor: "west") = content(
      p, text(size: 6.5pt, fill: luma(90), style: "italic", body), anchor: anchor,
    )

    // --- blocks -----------------------------------------------------------
    mux(0, -0.9, 0.5, 0.9)
    unit(1.15, -0.45, 2.0, 0.45)[PC]
    unit(2.9, -0.95, 4.6, 0.95)[Instruction \ memory]
    rect((5.7, -1.35), (7.6, 1.15), fill: box-fill, stroke: 0.6pt)
    content((6.65, 0.95), text(size: 7.5pt)[Register file])
    unit(5.7, -2.75, 7.3, -1.95)[Imm \ gen]
    mux(8.2, -1.55, 8.7, 0.35)
    unit(9.35, -1.35, 10.85, 1.05)[ALU]
    rect((11.5, -1.55), (13.45, 0.75), fill: box-fill, stroke: 0.6pt)
    content((12.475, 0.55), text(size: 7pt)[Data memory])
    mux(14.0, -1.25, 14.5, 0.9)
    unit(2.9, -4.05, 4.6, -3.05)[Control]
    unit(3.3, 2.3, 4.6, 3.0)[PC + 4]
    unit(5.7, 3.55, 7.4, 4.3)[PC + imm]

    // --- instruction fetch ------------------------------------------------
    wire((0.5, 0), (1.15, 0))
    plain((2.0, 0), (2.45, 0))
    wire((2.45, 0), (2.9, 0))
    dot((2.45, 0))

    // PC feeding the two address adders
    plain((2.45, 0), (2.45, 4.9))
    dot((2.45, 1.9))
    plain((2.45, 1.9), (4.2, 1.9))
    wire((4.2, 1.9), (4.2, 2.3))
    plain((2.45, 4.9), (6.55, 4.9))
    wire((6.55, 4.9), (6.55, 4.3))

    // PC + 4 back to the PC multiplexer
    plain((3.3, 2.65), (-0.65, 2.65))
    plain((-0.65, 2.65), (-0.65, 0.5))
    wire((-0.65, 0.5), (0, 0.5))

    // branch target back to the PC multiplexer
    plain((7.4, 3.925), (8.0, 3.925))
    plain((8.0, 3.925), (8.0, 5.4))
    plain((8.0, 5.4), (-1.15, 5.4))
    plain((-1.15, 5.4), (-1.15, 0))
    wire((-1.15, 0), (0, 0))

    // --- decode -----------------------------------------------------------
    plain((4.6, 0.2), (5.7, 0.2))
    wire((5.6, 0.2), (5.7, 0.2))
    dot((4.85, 0.2))
    plain((4.85, 0.2), (4.85, -3.55))
    wire((4.85, -3.55), (4.6, -3.55))
    dot((5.15, 0.2))
    plain((5.15, 0.2), (5.15, -2.35))
    wire((5.15, -2.35), (5.7, -2.35))

    // immediate to the branch adder
    plain((5.7, -2.6), (5.4, -2.6))
    plain((5.4, -2.6), (5.4, 3.9))
    wire((5.4, 3.9), (5.7, 3.9))

    // --- execute ----------------------------------------------------------
    wire((7.6, 0.55), (9.35, 0.55))
    wire((7.6, -0.25), (8.2, -0.25))
    plain((7.3, -2.35), (7.95, -2.35))
    plain((7.95, -2.35), (7.95, -1.15))
    wire((7.95, -1.15), (8.2, -1.15))
    wire((8.7, -0.6), (9.35, -0.6))

    // --- memory -----------------------------------------------------------
    plain((10.85, -0.1), (11.15, -0.1))
    wire((11.15, -0.1), (11.5, -0.1))
    dot((11.15, -0.1))
    plain((11.15, -0.1), (11.15, 1.45))
    plain((11.15, 1.45), (13.7, 1.45))
    plain((13.7, 1.45), (13.7, 0.55))
    wire((13.7, 0.55), (14.0, 0.55))
    wire((13.45, -0.6), (14.0, -0.6))

    // store data: second register read port to the data memory
    dot((7.75, -0.25))
    plain((7.75, -0.25), (7.75, -1.75))
    plain((7.75, -1.75), (11.25, -1.75))
    plain((11.25, -1.75), (11.25, -1.2))
    wire((11.25, -1.2), (11.5, -1.2))

    // --- write back -------------------------------------------------------
    plain((14.35, -1.25), (14.35, -3.4))
    plain((14.35, -3.4), (6.4, -3.4))
    wire((6.4, -3.4), (6.4, -1.35))

    // --- control ----------------------------------------------------------
    ctrl-plain((3.75, -4.05), (3.75, -4.4))
    ctrl-plain((0.25, -4.4), (14.9, -4.4))
    ctrl((0.25, -4.4), (0.25, -0.9))
    ctrl((7.45, -4.4), (7.45, -1.35))
    ctrl((8.45, -4.4), (8.45, -1.55))
    ctrl((12.8, -4.4), (12.8, -1.55))
    ctrl-plain((14.9, -4.4), (14.9, -0.2))
    ctrl((14.9, -0.2), (14.5, -0.2))
    // Signal names sit under their riser, staggered over two rows so the
    // longer ones do not run into each other.
    clbl((0.25, -5.25), [PCSrc = Branch $and$ Zero], anchor: "north")
    clbl((7.45, -4.7), [RegWrite], anchor: "north")
    clbl((8.45, -5.25), [ALUSrc], anchor: "north")
    clbl((12.8, -5.25), [MemRead / MemWrite], anchor: "north")
    clbl((14.9, -4.7), [MemtoReg], anchor: "north")

    ctrl((9.7, -4.4), (9.7, -1.35))
    clbl((9.7, -4.7), [ALUOp], anchor: "north")

    // ALU zero flag back to the control unit
    ctrl((10.4, -1.35), (10.4, -4.4))
    clbl((10.55, -2.55), [Zero])

    // --- port labels, inside the blocks they belong to --------------------
    let port(p, body, anchor: "east") = content(p, text(size: 5.5pt, body), anchor: anchor)
    port((7.5, 0.55), [read data 1])
    port((7.5, -0.25), [read data 2])
    port((5.8, -1.05), [write data], anchor: "west")
    port((11.6, -0.1), [address], anchor: "west")
    port((11.6, -1.2), [write data], anchor: "west")
    port((13.35, -0.6), [read data])

    // --- what the subset does not have ------------------------------------
    rect((9.6, 2.2), (16.65, 4.7), stroke: absent-stroke, fill: none)
    content(
      (9.8, 4.5),
      text(size: 7pt, fill: luma(70))[
        #set par(leading: 0.5em)
        *Absent in the eight-instruction subset* \
        no upper-immediate path into the register file (`lui`) \
        no PC + 4 write-back into the register file (`jal`, `jalr`) \
        no register #sym.arrow PC path (`jalr`) \
        no PC-relative address path (`auipc`)
      ],
      anchor: "north-west",
    )
    line((14.25, 2.2), (14.25, 0.95), stroke: absent-stroke, mark: (end: "straight", scale: 0.5))
  })
}
