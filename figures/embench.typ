// Embench-IoT results: the two measurement tables, the per-benchmark overhead
// chart, and the aggregate figures the surrounding prose quotes.
//
// Nothing here is typed in by hand.  Everything is read from the CSVs that the
// measurement harness writes --- tests/embench-iot/size.csv (from
// size_report.py) and perf.csv (from perf_report.py) --- including the backend
// revision printed in the captions, which each file records in a provenance
// comment on its first line.  Re-running the harness therefore updates the
// tables, the chart, the geometric means and the revision stamps together; the
// class of defect this removes is a table that silently keeps reporting a
// compiler that no longer exists, which this chapter has already suffered once.
#import "@preview/cetz:0.4.2"

// ---------------------------------------------------------------------------
// Reading the measurement files
// ---------------------------------------------------------------------------

// Read as text rather than with csv(): the provenance comment has no commas,
// and typst's CSV parser rejects a row with fewer fields than the header.
#let _load(path) = {
  let lines = read(path).split("\n").map(l => l.trim()).filter(l => l != "")
  let meta = (:)
  for tok in lines.filter(l => l.starts-with("#")).join(" ").split(" ") {
    if tok.contains("=") {
      let kv = tok.split("=")
      meta.insert(kv.at(0), kv.at(1))
    }
  }
  let body = lines.filter(l => not l.starts-with("#")).map(l => l.split(","))
  let idx = (:)
  for (i, name) in body.first().enumerate() { idx.insert(name, i) }
  (meta: meta, idx: idx, rows: body.slice(1))
}

// A cell holds a count, or a word (TIMEOUT, LINKFAIL, FAIL(rc=N)) when the run
// did not produce one.  Only the former is a measurement.
#let _count(row, idx, col) = {
  let cell = row.at(idx.at(col))
  if cell.match(regex("^[0-9]+$")) == none { none } else { int(cell) }
}

#let _series(data, cols) = {
  let out = ()
  for row in data.rows {
    let e = (name: row.at(0))
    for c in cols { e.insert(c, _count(row, data.idx, c)) }
    out.push(e)
  }
  out
}

#let _size = _load("../tests/embench-iot/size.csv")
#let _perf = _load("../tests/embench-iot/perf.csv")

// ---------------------------------------------------------------------------
// Formatting
// ---------------------------------------------------------------------------

// Fixed number of decimals: str(calc.round(7.10, digits: 2)) is "7.1", and a
// column of ratios that drops trailing zeros reads as sloppy typesetting.
#let _fixed(v, digits) = {
  let s = str(calc.round(v, digits: digits))
  if digits == 0 { return s.split(".").at(0) }
  if not s.contains(".") { s = s + "." }
  let frac = s.split(".").at(1)
  s + "0" * (digits - frac.len())
}

// Thousands separated by a non-breaking space, as elsewhere in the document.
#let _grouped(n) = {
  let s = str(n)
  let parts = ()
  while s.len() > 3 {
    parts.insert(0, s.slice(s.len() - 3))
    s = s.slice(0, s.len() - 3)
  }
  parts.insert(0, s)
  parts.join("\u{00A0}")
}

#let _geomean(vs) = calc.exp(vs.map(v => calc.ln(v)).sum() / vs.len())

// ---------------------------------------------------------------------------
// Aggregates the prose quotes
// ---------------------------------------------------------------------------

#let _static = _series(_size, ("gcc17", "sc2", "sc1")).filter(e => (
  e.gcc17 != none and e.sc1 != none
))
#let _dynamic = _series(_perf, ("gcc17", "sc2", "sc1")).filter(e => (
  e.sc2 != none and e.sc1 != none
))

#let embench = (
  // Backend revision and measurement date, straight out of the CSV headers.
  size-meta: _size.meta,
  perf-meta: _perf.meta,
  n-static: _static.len(),
  n-dynamic: _dynamic.len(),
  geo-static: _geomean(_static.map(e => e.sc1 / e.gcc17)),
  geo-dynamic: _geomean(_dynamic.map(e => e.sc1 / e.sc2)),
  // sc2 against the stock GCC 17 rv32i build: the check that the custom target
  // itself costs nothing.  1.000 is the claim the prose makes.
  geo-sc2-static: _geomean(_static.map(e => e.sc2 / e.gcc17)),
  static-ratio: _static.fold((:), (d, e) => { d.insert(e.name, e.sc1 / e.gcc17); d }),
  dynamic-ratio: _dynamic.fold((:), (d, e) => { d.insert(e.name, e.sc1 / e.sc2); d }),
)

// What produced a table, for its caption.  Each file carries its own stamp, so
// a chapter measured in two sittings says so instead of quoting one revision
// for both.
#let _stamp(meta) = [measured with the backend at revision #raw(meta.at("gcc-fork")) on #meta.at("measured")]
#let size-stamp = _stamp(_size.meta)
#let perf-stamp = _stamp(_perf.meta)

// Ratio of one benchmark, formatted for prose: #ratio-static("ud") -> "1.42".
#let ratio-static(name, digits: 2) = _fixed(embench.static-ratio.at(name), digits)
#let ratio-dynamic(name, digits: 1) = _fixed(embench.dynamic-ratio.at(name), digits)
#let geo-static(digits: 2) = _fixed(embench.geo-static, digits)
#let geo-dynamic(digits: 1) = _fixed(embench.geo-dynamic, digits)
#let geo-sc2-static(digits: 3) = _fixed(embench.geo-sc2-static, digits)
#let retired(name, toolchain) = _grouped(
  _dynamic.find(e => e.name == name).at(toolchain),
)

// ---------------------------------------------------------------------------
// Tables
// ---------------------------------------------------------------------------

#let embench-size-table = table(
  columns: (auto, auto, auto, auto),
  align: (left, right, right, right),
  [*Benchmark*], [*gcc17*], [*rvsc1*], [*rvsc1 / gcc17*],
  ..(_static
    .map(e => (
      raw(e.name),
      _grouped(e.gcc17),
      _grouped(e.sc1),
      _fixed(e.sc1 / e.gcc17, 2),
    ))
    .flatten()
    .map(c => [#c])),
  [*Geomean*], [], [], [*#geo-static()*],
)

#let embench-perf-table = table(
  columns: (auto, auto, auto, auto),
  align: (left, right, right, right),
  [*Benchmark*], [*rvsc2 (native)*], [*rvsc1 (synth)*], [*Overhead*],
  ..(_dynamic
    .map(e => (
      raw(e.name),
      _grouped(e.sc2),
      _grouped(e.sc1),
      _fixed(e.sc1 / e.sc2, 1) + "×",
    ))
    .flatten()
    .map(c => [#c])),
  [*Geomean*], [], [], [*#geo-dynamic()#sym.times*],
)

// ---------------------------------------------------------------------------
// Per-benchmark overhead chart
// ---------------------------------------------------------------------------
//
// Both series are ratios against an unsynthesized build of the same source, so
// 1× is parity and the axis is logarithmic: the spread runs over two orders of
// magnitude, and on a linear axis every benchmark under 10× would collapse
// against the left edge.  The tables above carry the exact figures; what the
// chart is for is the shape of the distribution, which 19 rows of digits hide.
//
// The two series differ in lightness rather than in hue, so the figure survives
// greyscale printing, and only the extremes are labelled.

#let static-fill = luma(45)
#let dynamic-fill = luma(175)

#let embench-overhead-figure = {
  let data = _static
    .filter(e => embench.dynamic-ratio.at(e.name, default: none) != none)
    .map(e => (
      name: e.name,
      static: embench.static-ratio.at(e.name),
      dynamic: embench.dynamic-ratio.at(e.name),
    ))
    // Descending by dynamic overhead: the ordering is itself the finding.
    .sorted(key: e => -e.dynamic)

  let peak = calc.max(..data.map(e => calc.max(e.static, e.dynamic)))
  let ticks = (1, 2, 5, 10, 20, 50, 100, 200, 500).filter(t => t <= peak * 1.35)
  let xmax = ticks.last() * 1.1

  let max-dyn = calc.max(..data.map(e => e.dynamic))
  let min-dyn = calc.min(..data.map(e => e.dynamic))
  let max-stat = calc.max(..data.map(e => e.static))
  let min-stat = calc.min(..data.map(e => e.static))

  set text(size: 8pt)
  set par(leading: 0.5em, first-line-indent: 0pt, justify: false)
  cetz.canvas(length: 1cm, {
    import cetz.draw: *

    let w = 10.9 // plot width, canvas units
    let row = 0.5 // vertical pitch, one benchmark
    let bar = 0.18 // bar thickness
    let top = 0.0
    let bottom = top - data.len() * row

    let x(v) = w * calc.log(v) / calc.log(xmax)

    // --- grid and axis ----------------------------------------------------
    for t in ticks {
      line(
        (x(t), top), (x(t), bottom),
        stroke: (paint: luma(200), thickness: 0.4pt),
      )
      content((x(t), bottom - 0.24), text(size: 7pt, fill: luma(60))[#t#sym.times])
    }
    line((0, bottom), (w, bottom), stroke: (paint: luma(120), thickness: 0.5pt))

    // --- bars -------------------------------------------------------------
    for (i, e) in data.enumerate() {
      let yc = top - (i + 0.5) * row
      content((-0.15, yc), anchor: "east", text(size: 7.5pt, raw(e.name)))
      rect(
        (0, yc + 0.03), (x(e.static), yc + 0.03 + bar),
        fill: static-fill, stroke: none,
      )
      rect(
        (0, yc - 0.03 - bar), (x(e.dynamic), yc - 0.03),
        fill: dynamic-fill, stroke: none,
      )
      // Only the extremes are labelled; the tables carry every figure.
      let lbl(v, y) = content(
        (x(v) + 0.12, y),
        anchor: "west",
        text(size: 6.5pt, fill: luma(60))[#_fixed(v, 1)#sym.times],
      )
      if e.static == max-stat or e.static == min-stat {
        lbl(e.static, yc + 0.03 + bar / 2)
      }
      if e.dynamic == max-dyn or e.dynamic == min-dyn {
        lbl(e.dynamic, yc - 0.03 - bar / 2)
      }
    }

    // --- legend -----------------------------------------------------------
    let ly = top + 0.44
    rect((0, ly - 0.09), (0.34, ly + 0.09), fill: static-fill, stroke: none)
    content((0.46, ly), anchor: "west", text(size: 7.5pt)[static (`.text` bytes)])
    rect((3.5, ly - 0.09), (3.84, ly + 0.09), fill: dynamic-fill, stroke: none)
    content(
      (3.96, ly),
      anchor: "west",
      text(size: 7.5pt)[dynamic (retired instructions)],
    )
  })
}
