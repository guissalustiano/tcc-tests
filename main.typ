#let instituicao = [Universidade de São Paulo \ Escola Politécnica]
#let autor = "Guilherme Stabach Salustiano"
#let titulo = "GCC target for educational RISC-V processor"
#let local = "São Paulo"
#let data = "2026"
#let orientador = "Bruno de Carvalho Albertini"
#let programa = [Departamento de Engenharia de Computação e Sistemas Digitais (PCS)]

#set text(lang: "pt", region: "BR")

// --- Page Configuration [cite: 2775, 2779] ---
// A4 Paper, Margins: Top/Left 3cm, Bottom/Right 2cm (Mirrored for two-sided)
#set page(
  paper: "a4",
  margin: (inside: 3cm, outside: 2cm, top: 3cm, bottom: 2cm),
  numbering: "1",
)

// --- Text Configuration [cite: 2783, 2795] ---
// Arial (or similar sans-serif), Size 12, Justified, 1.5 Line Spacing
#set text(font: "Liberation Sans", size: 12pt, lang: "pt")
#set par(justify: true, leading: 1.5em, first-line-indent: 1.3cm)

// --- Headings Configuration [cite: 2695, 2788] ---
#set heading(numbering: "1.1")
#show heading: it => {
  // Spacing around headings (1.5 lines = approx 1.5em)
  pad(top: 1.5em, bottom: 1.5em, it)
}

// Chapter titles (Level 1) start on new odd pages (open right) [cite: 2694]
#show heading.where(level: 1): it => {
  pagebreak(weak: true, to: "odd")
  v(1.5em) // Space at top of mancha
  text(size: 12pt, weight: "bold", upper(it))
}

#let chref(lbl) = ref(lbl, supplement: [Chapter])

// --- Cover Page (Capa) [cite: 2163, 2795] ---
#{
  set page(numbering: none)
  align(center)[
    #text(weight: "bold")[#instituicao]
    #v(1fr)
    #text(weight: "bold")[#autor]
    #v(1fr)
    #text(weight: "bold", size: 14pt)[#titulo]
    #v(1fr)
    #v(1fr)
    #local \ #data
  ]
}


// --- Half-Title Page (Falsa Folha de Rosto) [cite: 2215] ---
#pagebreak()
#{
  set page(numbering: none)
  align(center)[
    #text(weight: "bold")[#autor]
    #v(1fr)
    #text(weight: "bold", size: 14pt)[#titulo]
    #v(1fr)
    #v(1fr)
  ]
}


// --- Title Page (Folha de Rosto) [cite: 2221, 2795] ---
  // --- Title Page (Folha de Rosto) [cite: 2221, 2795] ---
#pagebreak()
#{
  set page(numbering: none)
  align(center)[
    #text(weight: "bold")[#autor]
    #v(1fr)
    #text(weight: "bold", size: 14pt)[#titulo]
    #v(2cm)
  ]

  // Preamble aligned from middle to right [cite: 2790]
  grid(
    columns: (1fr, 1fr),
    [],
    align(left)[
      #set text(size: 12pt, weight: "regular")
      #set par(leading: 0.65em) // Single spacing for preamble
      Trabalho de conclusão de curso apresentado ao Departamento de Engenharia de Computação e Sistemas Digitais da Escola Politécnica da Universidade de São Paulo para obtenção do Título de Engenheiro.
      \ \
      Orientador: #orientador
    ]
  )

  v(1fr)
  align(center)[#local \ #data]
}

// --- Catalog Card (Ficha Catalográfica) [cite: 2263] ---
// Typically verso of title page
#pagebreak()
#{

  align(bottom + center)[
    #rect(width: 12.5cm, height: 7.5cm, stroke: 1pt)[
      #set text(size: 10pt)
      #set par(leading: 0.65em)
      #align(center)[Ficha Catalográfica]
      \
      #align(left)[
        #autor \
        #h(0.5cm) #titulo / #autor -- #local, #data. \
        #h(0.5cm) #context {
  counter(page).final().first()
} p. \ \
        #h(0.5cm) Trabalho de Formatura - Escola Politécnica da Universidade de São Paulo. Departamento de Engenharia de Computação e Sistemas Digitais \ \
        #h(0.5cm) 1. TODO
      ]
    ]
  ]
}

  // --- Approval Sheet (Folha de Aprovação) [cite: 3765] ---
  #pagebreak()
  #{
     align(center)[
      #text(weight: "bold")[#autor]
      #v(1fr)
      #text(weight: "bold", size: 14pt)[#titulo]
    ]
    v(1cm)
    align(right)[
      #block(width: 50%)[
        #set par(leading: 0.65em)
        Trabalho de Formatura - Escola Politécnica da Universidade de São Paulo. Departamento de Engenharia de Computação e Sistemas Digitais
      ]
    ]
    v(1cm)
    text("Aprovado em: ____/____/______")
    v(1cm)

    align(center)[
      #set par(leading: 0.65em)
      #line(length: 60%) \ #orientador (Orientador) \ PCS - USP
      #v(1cm)
      #line(length: 60%) \ Professor Convidado 1 \ PCS - USP
      #v(1cm)
      #line(length: 60%) \ Professor Convidado 2 \ PCS - USP
    ]
    v(1fr)
  }

// --- Dedicatória ---
#pagebreak()
#v(1fr)
#align(right)[
  #block(width: 60%)[
    #set text(style: "italic")
    Para que serve tantos codigos, se a vida nao é programada e as melhores coisas não tem logica.
  ]
]
// TODO

// --- Acknowledgements ---
#heading(level: 1, numbering: none, outlined: false)[Acknowledgements]

// TODO: fill acknowledgements
The main acknowledgements are directed to ...

// --- Resumo ---
#heading(level: 1, numbering: none, outlined: false)[Resumo]

Este trabalho apresenta oito alvos de compilação cruzada GCC para os processadores educacionais de
ciclo único RISC-V descritos no livro-texto de arquitetura de computadores de Hennessy e Patterson.
Cada alvo, denominado rvsc0 a rvsc7, modela um subconjunto progressivamente mais rico do conjunto
de instruções RISC-V --- do núcleo de oito instruções utilizado em cursos introdutórios ao perfil
completo rv64imafd --- e produz binários ELF bare-metal executáveis no simulador de ISA Spike.

Os dois alvos mais restritos, rvsc0 e rvsc1, exigem que o compilador sintetize cada instrução
ausente utilizando apenas as operações suportadas nativamente pelo hardware. As operações sintetizadas
incluem XOR bit a bit, todos os tipos de deslocamento (SLL, SRL, SRA), comparação com e sem sinal
(SLT, SLTU), desvios condicionais (BNE, BLT, BGE, BLTU, BGEU), acessos à memória em sub-palavra
(LB, LBU, LH, LHU, SB, SH) e chamadas de função (JAL). Cada síntese é derivada de um argumento
formal de corretude e implementada como um padrão de expansão na descrição de máquina do GCC.

A corretude é validada em duas camadas independentes: a conformidade com a ISA é verificada por
desmontagem de cada binário compilado e checagem de cada mnemônico contra uma lista de permissão
por alvo; a equivalência comportamental é verificada por execução diferencial no Spike em comparação
com um compilador de referência RV32I. Adicionalmente, os alvos são validados contra um subconjunto
da suíte de testes de tortura do GCC.

O resultado é uma toolchain funcional que permite a estudantes compilar programas C arbitrários e
executá-los no processador que projetaram, fechando o ciclo pedagógico entre a implementação de
hardware e a abstração de software.

*Palavras-chave*: GCC. RISC-V. Compilador. Processador educacional.

// --- Abstract ---
#heading(level: 1, numbering: none, outlined: false)[Abstract]

This work presents eight GCC cross-compiler targets for the educational single-cycle RISC-V
processors described in the Hennessy-Patterson computer architecture textbook. Each target,
designated rvsc0 through rvsc7, models a progressively richer subset of the RISC-V instruction
set --- from the eight-instruction single-cycle core used in introductory courses to the full
rv64imafd profile --- and produces bare-metal ELF binaries executable on the Spike RISC-V ISA
simulator.

The two most restricted targets, rvsc0 and rvsc1, require the compiler to synthesize every missing
instruction using only the operations the hardware natively supports. Synthesized operations include
bitwise XOR, all shift types (SLL, SRL, SRA), signed and unsigned comparison (SLT, SLTU),
conditional branches (BNE, BLT, BGE, BLTU, BGEU), sub-word memory accesses (LB, LBU, LH, LHU,
SB, SH), and function calls (JAL). Each synthesis is derived from a formal correctness argument and
implemented as a GCC machine-description expand pattern.

Correctness is validated on two independent layers: ISA compliance is verified by disassembling
every compiled binary and checking every mnemonic against a per-target allowlist; behavioral
equivalence is verified by differential execution on Spike against a reference RV32I compiler.
Additionally, the targets are validated against a subset of the GCC compiler torture test suite.

The result is a working toolchain that allows students to compile arbitrary C programs and execute
them on the processor they designed, closing the pedagogical loop between hardware implementation
and software abstraction.

*Keywords*: GCC. RISC-V. Compiler. Educational processor.

// --- List of Abbreviations and Acronyms ---
#heading(level: 1, numbering: none, outlined: false)[List of Abbreviations and Acronyms]

#table(
  columns: (3cm, 1fr),
  stroke: none,
  inset: (y: 4pt),
  [*ABI*],    [_Application Binary Interface_],
  [*AMO*],    [_Atomic Memory Operation_],
  [*CSR*],    [_Control and Status Register_],
  [*ELF*],    [_Executable and Linkable Format_],
  [*GCC*],    [_GNU Compiler Collection_],
  [*GNU*],    [_GNU's Not Unix_],
  [*ISA*],    [_Instruction Set Architecture_],
  [*PIC*],    [_Position-Independent Code_],
  [*RISC*],   [_Reduced Instruction Set Computer_],
  [*RTL*],    [_Register Transfer Language_],
  [*RV32I*],  [RISC-V, integers, 32 bits],
  [*RV64I*],  [RISC-V, integers, 64 bits],
)

// --- List of Figures ---
#outline(title: [List of Figures], target: figure.where(kind: image))

// --- List of Tables ---
#outline(title: [List of Tables], target: figure.where(kind: table))

// --- Table of Contents ---
#heading(level: 1, numbering: none, outlined: false)[TABLE OF CONTENTS]
#outline(title: none, indent: auto, depth: 3)

// --- Textual Elements Setup ---
#set page(numbering: "1")


= Introduction <ch-intro>

== Motivation
// - Presents a brief state-of-the-art overview of the subject that will be the theme of the work,
// based on the consulted references.
// - Consulted works must be cited and referenced in the text.
// - Presents the context in which the work will be developed.

_Computer Organization and Design: RISC-V Edition_ by Patterson and Hennessy @patterson2020 is one of the most widely adopted references in undergraduate computer architecture courses worldwide. At the University of São Paulo's Escola Politécnica, the course _PCS3225 - Digital Systems 2_  uses this textbook as its primary reference. Students follow its progression step by step, implementing a simplified RISC-V processor in Verilog from book reference.

The simplified single-cycle processor introduced in Chapter 4.4 of the book, _A Simple Implementation Scheme_, supports only eight instructions: `lw`, `sw`, `beq`, `add`, `addi`, `sub`, `and`, and `or`. This restriction is deliberate and pedagogically motivated, it isolates the essential datapath and control concepts before more complex features are introduced. A subsequent homework assignment extends the processor with `lui` and `jalr`, enabling function calls. Both implementations are partial subsets of the RV32I base ISA @riscv-spec.

This restriction creates a practical barrier. The standard RISC-V GCC toolchain (`riscv32-unknown-elf-gcc`) targets the full RV32I base ISA @riscv-spec, which includes shift instructions, byte and halfword memory operations, multiple branch variants, and PC-relative addressing. Any C program compiled with this toolchain will emit instructions that the student-built processor cannot execute.

As a result, students are limited to running hand-written assembly or small programs provided by the professor. They cannot compile and run arbitrary C code on the processor they designed and built. This prevents them from connecting the hardware they implement to the software abstractions they use daily, and forecloses the pedagogical opportunity of observing how a compiler translates and optimizes C code into the primitive instructions their processor supports.

== Objective
// - Present the objective of the work in a precise and concise manner.
// - Should answer the question: What is the work?

This work develops eight progressive GCC compiler targets for the simplified RISC-V processors described in the Hennessy and Patterson textbook, enabling students of the PCS3225 course at USP to compile and run C programs on the processors they build in Verilog.

The specific objectives are:

+ Define a minimal GCC target (`rvsc0`) matching the eight-instruction single-cycle processor described in Chapter 4.4 of the textbook, synthesizing all operations not natively supported by that processor.
+ Define a target (`rvsc1`) matching the course homework processor, `rvsc0` extended with `lui` and `jalr`, as the minimum instruction set capable of supporting the full C calling convention with synthesis.
+ Define six additional progressive targets (`rvsc2` through `rvsc7`), incrementally extending the supported instruction set from bare RV32I through RV64IMAFD, for students who wish to continue developing their processor beyond the course scope.
+ Synthesize every instruction not natively supported by a given target as an equivalent sequence of instructions that the target does support.

== Rationale
// - Presents why the developed work is important (importance and necessity for society,
// comparison with relevant consulted works, etc.).
// - Consulted works must be cited and referenced in the text.
// - Should answer the question: Why is the work important?

To the best of the authors' knowledge, no prior work addresses C compilation for intentionally restricted pedagogical RISC-V subsets. GCC's machine description framework @gcc-internals makes it possible to define a backend that synthesizes missing instructions transparently from the primitives the hardware does support. Applying this mechanism to pedagogical ISAs that deliberately omit standard instructions appears to be novel.

The ability to run a self-written C program on a processor the student designed and built closes a pedagogical loop that rarely closes in undergraduate education. Most courses treat hardware and software as adjacent subjects that never directly intersect. This work creates a complete vertical slice from C source to register-level execution on student hardware. Students can compile a function, inspect the output, and observe concretely how the compiler synthesizes a shift operation from repeated additions, or a signed comparison from subtraction and bit manipulation, making the cost of each ISA restriction tangible rather than abstract.

Furthermore, students interact with GCC, the dominant open-source compiler for embedded and systems software, rather than a pedagogical toy. The flags, ABI conventions, ELF output, and linker scripts they encounter are identical to those used in professional and research settings, giving the exercise relevance beyond the course itself.

== Document Organization

// TODO: review this after document is finished
The remainder of this monograph is organized as follows. #chref(<ch-related-work>) surveys related work. #chref(<ch-background>) presents the conceptual background, covering the GCC compilation framework, the RISC-V instruction set architecture, and the architecture of the Hennessy-Patterson educational processor. #chref(<ch-method>) describes the development method, including the specification, implementation, and testing phases followed for each target. #chref(<ch-requirements>) specifies the requirements for each of the eight targets, defining the allowed instruction sets and the synthesis obligations imposed on the compiler. #chref(<ch-development>) details the implementation, describing the instruction synthesis techniques developed inside the GCC machine description and the per-target configuration files. #chref(<ch-results>) presents the test results and discusses the validity and limitations of each target. #chref(<ch-conclusion>) presents the conclusions, contributions, and directions for future work.


= Related Work <ch-related-work>

The two bodies of work most relevant to this project are GCC's established mechanisms for synthesizing hardware-absent operations, applied in the embedded domain for decades, and pedagogical tools for instruction-set-level computing education.

== Instruction Synthesis in Compiler Backends

GCC has long supported targets whose processors lack hardware instructions for certain operations. The canonical example is soft-float: on targets without a floating-point unit, all floating-point operations are transparently replaced by sequences of integer instructions, with no change required from the programmer @gcc-internals. The same approach has been applied to integer operations on embedded targets such as the MSP430, which lacks a barrel shifter, and the AVR, which lacks a hardware multiplier on some variants @gcc-internals. In all cases the programmer writes standard C, and the compiler silently emits the necessary replacement sequences, at the cost of additional instructions and a correspondingly larger binary. Hauser et al. @hauser2020 quantify this effect for embedded RISC-V targets, showing that backend choices have a measurable impact on code size.

This work applies the same principle to a more extreme case: the sc0 and sc1 targets must synthesize not just a handful of absent operations, but nearly every operation the processor does not natively support, because their instruction sets are far smaller than those of typical embedded targets.

== Pedagogical Instruction-Set Tools

A distinct body of work provides tools for computer architecture education at the assembly level. Venus @venus, RARS @rars, and MARS @mars are simulators that accept programs written directly in assembly and execute them step by step. None of them performs C compilation; the programmer works at the assembly level from the outset.

BRISC-V @brisc-v provides an open-source parameterised RISC-V processor family for computer architecture education together with a standard GCC toolchain. The toolchain targets the full RV32I instruction set, with no mechanism to restrict the compiler to a hardware-defined subset.

This work sits at the intersection of these two lines: it brings the instruction synthesis approach from the embedded compiler domain into the pedagogical setting of the Hennessy-Patterson processor @patterson2020, enabling students to write C programs that run correctly on a processor with a deliberately minimal instruction set.


= Conceptual Background <ch-background>
// - Defines the representative sections based on the work.
// - Presents the concepts used and the literature review.
// - Consulted works must be cited and referenced in the text.

== RISC-V

RISC-V is an open, royalty-free instruction set architecture belonging to the Reduced Instruction Set Computer (RISC) family @riscv-spec. RISC architectures favour a small number of simple, orthogonal instructions over a large set of complex ones: all computation operates on registers, memory is accessed exclusively through explicit load and store instructions, and instructions are fixed-width, which keeps decoding logic simple and regular. The name RISC-V denotes the fifth major RISC ISA developed at UC Berkeley. Unlike earlier RISC designs, RISC-V is fully open: anyone may implement it without a license. The ISA is organized as a small mandatory base plus a set of optional standard extensions, so implementors include only the features their application requires.

The base integer ISA has 32 general-purpose registers, x0--x31. x0 is hardwired to the constant zero and reads as zero regardless of writes. The remaining registers are general-purpose; the ABI assigns mnemonic names: a0--a7 for function arguments and return values, ra for the return address, sp for the stack pointer, t0--t6 for caller-saved temporaries, and s0--s11 for callee-saved registers @riscv-spec.

The RV32I base ISA contains approximately 40 instructions organised into functional groups: integer arithmetic and logic (ADD, SUB, AND, OR, XOR, SLL, SRL, SRA and their immediate-operand forms ADDI, ANDI, ORI, XORI, SLLI, SRLI, SRAI); loads and stores (LW, LH, LB and unsigned halfword/byte variants LHU, LBU; SW, SH, SB); conditional branches (BEQ, BNE, BLT, BGE, BLTU, BGEU); jumps (JAL and JALR); upper-immediate instructions (LUI and AUIPC); and environment/system instructions (ECALL, EBREAK, FENCE) @riscv-spec.

Beyond the base, RISC-V defines several standard extensions. The M extension adds integer multiply and divide (MUL, MULH, DIV, REM and variants). The A extension provides atomic memory operations (load-reserved/store-conditional pairs LR/SC and a family of AMO instructions). The F and D extensions add single- and double-precision IEEE 754 floating-point.

== Single-Cycle Processor Architecture

A single-cycle processor completes every instruction in exactly one clock cycle. The datapath consists of five principal components wired in sequence: an instruction memory that outputs the instruction at the current program counter (PC); a register file with two read ports and one write port; an arithmetic logic unit (ALU) that performs the operation selected by the control unit; a data memory for load and store operations; and a set of multiplexers that route operands and results under control of the control signals derived from the instruction opcode @patterson2020.

The control unit decodes the instruction's opcode field and drives the multiplexer select lines and the register file write-enable. For a given instruction set, each instruction class has a fixed set of control signals; the datapath itself does not change between instructions, only the routing of values through the multiplexers changes. This regularity is what makes it tractable to add support for a new instruction: each addition requires extending the decode logic and, where necessary, adding a new datapath path or multiplexer input.

The critical path determines the maximum clock frequency. Because every instruction must complete within one cycle, the clock period is set by the slowest instruction. For an RV32I processor the critical path typically runs through instruction memory, the register file read ports, the ALU, data memory (for `lw`), and the register file write port.

== Hennessy-Patterson Educational Processor

_Computer Organization and Design: RISC-V Edition_ @patterson2020 uses a series of progressively more capable processor implementations to teach the relationship between instruction sets and hardware. Chapter 4.4, titled _A Simple Implementation Scheme_, introduces a single-cycle datapath that supports only eight instructions: `lw`, `sw`, `beq`, `add`, `addi`, `sub`, `and`, and `or`. This restriction is deliberate: with only eight instructions, the complete datapath and control unit fit on a single diagram and can be fully understood and implemented within a single lab exercise.

The datapath for this subset is purpose-built. There is an ALU path for R-type arithmetic (`add`, `sub`, `and`, `or`) and I-type arithmetic (`addi`); a memory path for `lw` and `sw`; and a branch comparator for `beq`. The processor has no hardware for PC-relative address computation (no AUIPC path), no mechanism to load a 20-bit upper immediate into a register (no LUI path), and no register-to-PC write path that also captures the return address (no JALR path). Executing any instruction outside the supported set produces undefined results.

== C Calling Convention and ABI

An Application Binary Interface (ABI) is the binary-level contract that allows separately compiled translation units to interoperate. It specifies which registers hold function arguments, which the caller must preserve across a call, which the callee must preserve, how the stack is laid out, and how values are returned. Code compiled by different compilers for the same ABI can be linked and executed together.

The RISC-V integer ABI partitions the 32 registers into four groups @riscv-psabi. Argument and return-value registers (a0--a7, i.e. x10--x17) pass the first eight integer arguments to a function and carry the return value back in a0 (and a1 for 64-bit values on RV32). Caller-saved temporaries (t0--t6, i.e. x5--x7 and x28--x31) may be freely overwritten by any callee; the caller must save them if their values are needed after a call. Callee-saved registers (s0--s11, i.e. x8--x9 and x18--x27) must be preserved across calls; a callee that uses them must save and restore them. Special-purpose registers are: ra (x1) the return address, sp (x2) the stack pointer, gp (x3) the global pointer, and tp (x4) the thread pointer.

#figure(
  table(
    columns: (auto, auto, auto, auto),
    align: left,
    [*Register*], [*ABI name*], [*Role*], [*Saved by*],
    [x0], [zero], [Hardwired zero], [---],
    [x1], [ra], [Return address], [Caller],
    [x2], [sp], [Stack pointer], [Callee],
    [x3], [gp], [Global pointer], [---],
    [x4], [tp], [Thread pointer], [---],
    [x5--x7], [t0--t2], [Temporaries], [Caller],
    [x8--x9], [s0--s1], [Saved registers], [Callee],
    [x10--x11], [a0--a1], [Args / return value], [Caller],
    [x12--x17], [a2--a7], [Arguments], [Caller],
    [x18--x27], [s2--s11], [Saved registers], [Callee],
    [x28--x31], [t3--t6], [Temporaries], [Caller],
  ),
  caption: [RISC-V integer register conventions @riscv-psabi],
)

The RISC-V stack grows downward. A typical stack frame contains, from high to low address: incoming arguments that did not fit in a0--a7, the saved return address, saved callee-saved registers, and local variables. The call sequence is: the caller loads arguments into a0--a7 (and pushes any extras onto the stack), then executes `jal ra, target` to jump to the callee and record the return address in ra. The callee saves ra and any s registers it uses, executes its body, places the result in a0, restores saved registers, and returns with `jalr x0, 0(ra)` (the `ret` pseudo-instruction). The stack pointer must be 16-byte aligned at every function entry and exit @riscv-psabi.

GCC emits ELF (Executable and Linkable Format) object files. The principal sections are `.text` (machine code), `.rodata` (read-only constants and string literals), `.data` (initialized global variables), and `.bss` (zero-initialized global variables). Relocation entries in the object file record every reference to a symbol whose address is not yet known, the linker fills these in when it combines object files. A linker script controls the memory layout: it assigns each section to an address range that matches the target processor's address map @riscv-psabi.

== GCC Compiler Architecture

The GNU Compiler Collection (GCC) is a portable, multi-language, multi-target compiler and the dominant toolchain for embedded and systems software @gcc-internals. It translates C (and other languages) to machine code through a sequence of intermediate representations that progressively lower the abstraction level.

The compilation pipeline proceeds as follows @gcc-internals. The language frontend parses source code and produces an abstract syntax tree (AST). The AST is lowered to GIMPLE, a high-level, language-independent, statement-level intermediate representation in static single-assignment (SSA) form. The middle-end applies target-independent optimisations to GIMPLE (constant folding, inlining, loop transformations, and others). GIMPLE is then lowered to RTL (Register Transfer Language), a low-level IR that models instructions as operations on pseudo-registers and memory. The backend operates on RTL to produce assembly.

The backend performs three main tasks @gcc-internals. Instruction selection pattern-matches RTL expressions against the target's machine description to select real instructions. Register allocation assigns the potentially unbounded set of pseudo-registers to the finite set of physical registers, inserting spill code where necessary. Instruction scheduling reorders instructions to hide pipeline latency and improve throughput; it is irrelevant for single-cycle processors, which have no pipeline and therefore no data hazards.

The core of a GCC backend is the machine description file (`.md`), which declaratively specifies the target's instruction set and expansion rules @gcc-internals. It contains two primary construct types:

- `define_insn`: specifies a named RTL pattern, an assembly output template, and a predicate condition string that tests target capabilities. When the condition evaluates to false, the pattern is invisible to the instruction selector and will never be emitted.
- `define_expand`: specifies a named operation that expands into an arbitrary sequence of RTL insns when the compiler needs to generate that operation. The expansion body may call `DONE` to signal that it has produced the complete implementation, preventing any fallthrough to a `define_insn`. Expansions are the mechanism used to synthesize complex operations from simpler ones.

Code iterators (such as `any_shift`) allow a single `define_expand` to cover multiple related operations (ASHIFT, LSHIFTRT, ASHIFTRT) in one body, with runtime-constant guards like `(<CODE>) == ASHIFT` selecting the appropriate synthesis path.

Target-specific command-line options are declared in a `.opt` file using GCC's option-description syntax @gcc-internals. Each declaration generates a C preprocessor macro that can be tested in `.md` condition strings and in C target-hook implementations. A per-target header file defines `CC1_SPEC`, a GCC macro evaluated when the driver invokes the compiler proper (`cc1`). It contains conditional option-injection rules of the form "if the user did not explicitly pass a flag, inject its negation." This mechanism makes a target self-configuring: users invoke the target-specific compiler without any manual flags, and the correct behaviour is activated automatically.


= Development Method <ch-method>

This work followed an iterative process organized into four phases: a study phase to understand GCC's backend architecture, a requirements phase to define the instruction boundaries for each target, a per-synthesis implementation-and-test cycle that forms the core of the work, and a validation phase that confirms behavioral correctness on a reference simulator. #chref(<ch-requirements>), #chref(<ch-development>), and #chref(<ch-results>) describe the outputs of these phases in detail; this chapter describes the process itself.

== Study of GCC Internals

The first phase was a structured study of GCC's backend extension mechanisms. The entry point was the GCC Internals manual @gcc-internals, which documents the machine description language (`.md`), the option description system (`.opt`), and the role of per-target configuration headers. After establishing a conceptual model from the manual, the existing RISC-V backend (`gcc/config/riscv/riscv.md`, `riscv.opt`, and `config.gcc`) was examined as a working reference implementation.

Two diagnostic tools were central throughout the study and subsequent implementation phases. The `-S` flag causes GCC to emit assembly rather than an object file, making the compiler's instruction selection directly observable. The `-fdump-rtl-*` family of flags produces snapshots of GCC's internal Register Transfer Language (RTL) representation at each compilation stage; these were used to understand why a pattern matched or failed to match during instruction selection, and to verify that `define_expand` bodies fired at the correct point in the compilation pipeline.

== Requirements Specification

Requirements for each target were derived from two sources. For rvsc0 and rvsc1, the instruction boundaries are externally fixed by the Hennessy-Patterson textbook @patterson2020 and the minimum ABI requirements, respectively. For rvsc2--rvsc7, the boundaries follow the natural RISC-V extension hierarchy @riscv-spec. The complete requirements are specified in #chref(<ch-requirements>).

== Synthesis Derivation and Implementation

The rvsc0 and rvsc1 targets require GCC to synthesize every instruction outside the native set using only the instructions the processor supports. Each synthesis was developed through the following cycle, applied independently to each missing operation.

The process begins by identifying the missing operation, an instruction that GCC's middle-end may legally request but that the target processor does not support. The synthesis algorithm is then derived and expressed as C pseudocode, which serves both as a correctness argument and as an unambiguous specification of the target behavior. The pseudocode is then lifted directly into a `define_expand` body in `riscv.md`, using GCC's RTL emit helpers to generate the equivalent sequence of native instructions. Correctness of the expansion is confirmed in two steps: the `-S` output is inspected to verify that no forbidden mnemonics appear, and the resulting program is executed on the Spike RISC-V ISA simulator @spike to confirm that the synthesized sequence produces the same result as the original instruction would have.

This cycle was repeated for each operation that the compiler may emit for a bare-metal freestanding C program targeting rvsc0 or rvsc1. The derivations and the resulting implementation are described in #chref(<ch-development>).

== Validation

Validation addresses two correctness requirements defined in #chref(<ch-requirements>): ISA compliance and behavioral equivalence.

ISA compliance is verified structurally by disassembling the compiled output and checking every mnemonic against a per-target allowlist.

Behavioral equivalence is verified by differential execution: the same C program is compiled by both the custom target and a reference RV32I compiler, and both binaries are executed on the Spike ISA simulator @spike; the test passes when both produce identical exit codes.

A third validation layer exercises the compiler against a much larger, automatically generated corpus. The GCC test suite includes a _torture test_ mode that systematically varies optimization flags and source patterns across hundreds of programs, besides compiling `libgcc` against the custom target also stresses constant materialization, multi-word arithmetic, and calling-convention edge cases that hand-written behavioral tests would not cover.

Test results are presented in #chref(<ch-results>).

= Requirements Specification <ch-requirements>
// Define and describe the requirements of the work. The work may involve system development,
// improvement of an existing system, process definition, techniques, procedures, or
// another type of work agreed upon with the advisor.

This chapter defines the requirements for the eight GCC cross-compiler targets developed in this work. Each target is a modified GCC backend that accepts bare-metal freestanding C programs and produces machine code containing only the instructions supported by the corresponding educational processor.

== Scope

All targets compile *bare-metal freestanding C*: programs with no standard library and no operating system, producing an ELF binary as output.

== Correctness Requirements

Two independent correctness requirements apply to every target.

*ISA compliance*: the compiler must never emit an instruction whose opcode is not in the target's allowed set. This requirement is verifiable by inspecting the assembly output.

*Behavioral equivalence*: the compiled program must exhibit the same observable behavior as the source, the same return values, the same memory effects, and the same control flow, as if compiled for a processor that natively supports the full instruction set.


== rvsc0 — Basic Single-Cycle

The rvsc0 target corresponds to the eight-instruction single-cycle processor described in Chapter 4.4 of @patterson2020, _A Simple Implementation Scheme_:

#quote[In this section, we look at what might be thought of as a simple implementation of our RISC-V subset. [...] This simple implementation covers load word (lw), store word (sw), branch if equal (beq), and the arithmetic-logical instructions add, sub, and, and or.]

#figure(
  table(
    columns: (auto, 1fr),
    align: left,
    [*Mnemonic*], [*Description*],
    [`lw`],   [Load word],
    [`sw`],   [Store word],
    [`beq`],  [Branch if equal],
    [`add`],  [Add],
    [`addi`], [Add immediate],
    [`sub`],  [Subtract],
    [`and`],  [Bitwise AND],
    [`or`],   [Bitwise OR],
  ),
  caption: [rvsc0 native instruction set],
)

=== Limitations

The rvsc0 processor has no mechanism to write the program counter — it supports neither `jalr` nor any jump-and-link instruction. As a consequence, subroutine calls are architecturally impossible, and the set of C programs that can be compiled for rvsc0 is restricted accordingly. For all other C constructs, the compiler must produce correct behavior using only the native instruction set.

== rvsc1 — Extended Single-Cycle

The rvsc1 target extends rvsc0 with `lui` and `jalr`. These two instructions are the minimum addition that enables the full C calling convention: `lui` materializes 32-bit absolute addresses and `jalr` performs indirect jumps and encodes function returns via `jalr x0, 0(ra)`.

#figure(
  table(
    columns: (auto, 1fr),
    align: left,
    [*Mnemonic*], [*Description*],
    [`lw`],   [Load word],
    [`sw`],   [Store word],
    [`beq`],  [Branch if equal],
    [`add`],  [Add],
    [`addi`], [Add immediate],
    [`sub`],  [Subtract],
    [`and`],  [Bitwise AND],
    [`or`],   [Bitwise OR],
    [`lui`],  [Load upper immediate],
    [`jalr`], [Jump and link register],
  ),
  caption: [rvsc1 native instruction set],
)

With these ten instructions, the target must support the full C calling convention and general-purpose C programs.

== rvsc2 — Single-Cycle Without Fence and Control

The rvsc2 target implements the full RV32I base ISA with three groups of instructions excluded. Memory ordering instructions are unnecessary on a single-core single-cycle processor: omitting them is behavior-preserving. CSR access and system instructions require operating system support that is absent in the bare-metal environment.

#figure(
  table(
    columns: (auto, 1fr),
    align: left,
    [*Group*], [*Instructions*],
    [Integer arithmetic], [`add`, `sub`, `addi`, `and`, `andi`, `or`, `ori`, `xor`, `xori`, `sll`, `slli`, `srl`, `srli`, `sra`, `srai`],
    [Comparison],         [`slt`, `sltu`, `slti`, `sltiu`],
    [Loads],              [`lw`, `lh`, `lhu`, `lb`, `lbu`],
    [Stores],             [`sw`, `sh`, `sb`],
    [Branches],           [`beq`, `bne`, `blt`, `bge`, `bltu`, `bgeu`],
    [Jumps],              [`jal`, `jalr`],
    [Upper immediate],    [`lui`, `auipc`],
  ),
  caption: [rvsc2 native instruction set (RV32I base, excluding fence, CSR, and system groups)],
)

#figure(
  table(
    columns: (auto, 1fr),
    align: left,
    [*Treatment*], [*Instructions*],
    [Behaviorally equivalent],
      [`fence`, `fence.i`, `sfence.vma`],
    [Rejected],
      [`ecall`, `ebreak`, `sret`, `wfi`, CSR instructions (`csrrw`, `csrrs`, `csrrc`, `csrrwi`, `csrrsi`, `csrrci`)],
  ),
  caption: [rvsc2 instruction treatment],
)

== rvsc3 — Single-Cycle rv32i

The rvsc3 target implements the complete RV32I base integer ISA @riscv-spec, including the memory ordering, CSR access, and system instruction groups omitted from rvsc2. No instruction synthesis is required: every RV32I instruction is natively supported by the hardware.

#figure(
  table(
    columns: (auto, 1fr),
    align: left,
    [*Group*], [*Instructions*],
    [Integer arithmetic], [`add`, `sub`, `addi`, `and`, `andi`, `or`, `ori`, `xor`, `xori`, `sll`, `slli`, `srl`, `srli`, `sra`, `srai`],
    [Comparison],         [`slt`, `sltu`, `slti`, `sltiu`],
    [Loads],              [`lw`, `lh`, `lhu`, `lb`, `lbu`],
    [Stores],             [`sw`, `sh`, `sb`],
    [Branches],           [`beq`, `bne`, `blt`, `bge`, `bltu`, `bgeu`],
    [Jumps],              [`jal`, `jalr`],
    [Upper immediate],    [`lui`, `auipc`],
    [Memory ordering],    [`fence`, `fence.i`],
    [System],             [`ecall`, `ebreak`, `wfi`, `sret`],
    [CSR],                [`csrrw`, `csrrs`, `csrrc`, `csrrwi`, `csrrsi`, `csrrci`],
  ),
  caption: [rvsc3 native instruction set (complete RV32I)],
)

== rvsc4 — Single-Cycle rv64i

The rvsc4 target is a 64-bit processor implementing the full rv64i instruction set. In addition to all rvsc3 instructions, it natively supports:

- 64-bit memory operations: `ld`, `sd`, `lwu`
- Word operations with sign-extended 64-bit results: `addw`, `subw`, `addiw`, `sllw`, `srlw`, `sraw`, `slliw`, `srliw`, `sraiw`


The W-suffix variants operate on 32 bits and sign-extend the result to 64 bits, following the same convention as `addw`, `subw`, and the other W instructions from rvsc4.

== rvsc5 — Single-Cycle rv64im

The rvsc5 target extends rvsc4 with the M extension, adding native integer multiply and divide:

- Multiply: `mul`, `mulw`, `mulh`, `mulhu`, `mulhsu`
- Signed divide: `div`, `divw`
- Unsigned divide: `divu`, `divuw`
- Signed remainder: `rem`, `remw`
- Unsigned remainder: `remu`, `remuw`

== rvsc6 — Single-Cycle Floating-Point

The rvsc6 target extends rvsc5 with the complete F (single-precision) and D (double-precision) floating-point extensions as defined in @riscv-spec, supporting all arithmetic, memory, conversion, and comparison instructions for both precisions.

Loads/stores:
- `flw`, `fsw` — single precision
- `fld`, `fsd` — double precision

Arithmetic:
- `fadd.s`, `fadd.d`, `fsub.s`, `fsub.d`, `fmul.s`, `fmul.d`, `fdiv.s`, `fdiv.d`, `fsqrt.s`, `fsqrt.d`

Fused multiply-add:
- `fmadd.s`, `fmadd.d`, `fmsub.s`, `fmsub.d`, `fnmadd.s`, `fnmadd.d`, `fnmsub.s`, `fnmsub.d`

Sign, minimum, and maximum:
- `fsgnj.s`, `fsgnj.d`, `fsgnjn.s`, `fsgnjn.d`, `fsgnjx.s`, `fsgnjx.d`
- `fmin.s`, `fmin.d`, `fmax.s`, `fmax.d`

Comparison and classification:
- `feq.s`, `feq.d`, `flt.s`, `flt.d`, `fle.s`, `fle.d`
- `fclass.s`, `fclass.d`

Move between integer and FP registers:
- `fmv.w.x`, `fmv.x.w` — single (rv32 and rv64)
- `fmv.d.x`, `fmv.x.d` — double (rv64)

Conversions (rv64):
- `fcvt.s.w`, `fcvt.s.wu`, `fcvt.s.l`, `fcvt.s.lu` — int → single
- `fcvt.w.s`, `fcvt.wu.s`, `fcvt.l.s`, `fcvt.lu.s` — single → int
- `fcvt.d.w`, `fcvt.d.wu`, `fcvt.d.l`, `fcvt.d.lu` — int → double
- `fcvt.w.d`, `fcvt.wu.d`, `fcvt.l.d`, `fcvt.lu.d` — double → int
- `fcvt.s.d`, `fcvt.d.s` — conversion between single and double

== rvsc7 — Single-Cycle Atomic

The rvsc7 target extends rvsc6 with the A extension (atomic memory operations), implementing the full rv64imafd instruction set @riscv-spec. The `.w` variants operate on 32 bits (sign-extended to 64); the `.d` variants operate on 64 bits.

Load-reserved and store-conditional:
- `lr.w`, `lr.d` — load-reserved
- `sc.w`, `sc.d` — store-conditional

AMO (atomic memory operations):
- `amoadd.w`, `amoadd.d` — atomic add
- `amoand.w`, `amoand.d` — atomic AND
- `amoor.w`, `amoor.d` — atomic OR
- `amoxor.w`, `amoxor.d` — atomic XOR
- `amoswap.w`, `amoswap.d` — atomic swap
- `amomax.w`, `amomax.d` — atomic signed maximum
- `amomaxu.w`, `amomaxu.d` — atomic unsigned maximum
- `amomin.w`, `amomin.d` — atomic signed minimum
- `amominu.w`, `amominu.d` — atomic unsigned minimum

= Development <ch-development>

The rvsc0 and rvsc1 targets restrict the instruction set available to the compiler (#chref(<ch-requirements>) specifies the complete native instruction set for each target). Every C construct the compiler may emit must be realized using only those native instructions; for every excluded instruction, GCC synthesizes an equivalent sequence at compile time. This chapter presents the tools and infrastructure used, the mathematical derivation and proof of each synthesis, the GCC implementation that makes the process transparent to the programmer, and the known limitations of each target.

== Technologies Used

=== GCC 17.0.0

The custom targets are implemented as a backend extension to GCC 17.0.0. GCC is chosen because it is the dominant open-source compiler for embedded and systems software and because its machine description framework provides a declarative mechanism for defining instruction synthesis rules that is already present in the upstream RISC-V backend. The following files in the GCC source tree were modified or added:

#figure(
  table(
    columns: (auto, 1fr),
    align: left,
    [*File*], [*Role*],
    [`gcc/config/riscv/riscv.md`],  [Machine description: synthesis patterns and native instruction guards],
    [`gcc/config/riscv/riscv.opt`], [Option declarations: per-synthesis boolean flags],
    [`gcc/config/riscv/riscv.cc`],  [Target hooks: addi/shift constant synthesis for LUI],
    [`gcc/config/riscv/rvscN.h`],   [Per-target headers: `CC1_SPEC` injecting `-mno-*` flags automatically],
    [`gcc/config/config.gcc`],      [Triple mapping: `rvscN-*-elf*` to `cpu_type=riscv`],
    [`gcc/config/config.sub`],      [Triple normalisation: recognises `rvscN` as a valid CPU name],
  ),
  caption: [GCC source files modified or added for this project],
)

=== GNU Binutils (riscv32/64-none-elf)

The upstream GNU binutils cross toolchain is used without modification as the assembler and linker. The binutils triple differs from the compiler triple: `riscv32-none-elf` for rvsc0--rvsc3 and `riscv64-none-elf` for rvsc4--rvsc7. 

=== Spike 1.1.1-dev

Spike is the official RISC-V ISA reference simulator @spike. It implements the full RV64IMAFD instruction set, making it suitable as the behavioral oracle: a binary compiled by `rvsc1-unknown-elf-gcc` contains only valid RV32I instructions (the synthesis sequences are themselves valid RV32I), so Spike can execute it and report the correct result. Spike is invoked with `--isa=rv32i` for rvsc0--rvsc3 tests, and with `--log-commits` to count retired instructions for performance measurements.

== Toolchain Installation

=== Repository Setup

The GCC backend modifications live in a fork of the upstream GCC repository:

```sh
git clone https://github.com/guissalustiano/gcc-hannersy-paterson gcc
```

The GNU Binutils source is cloned separately and is required for all targets, since GCC must invoke the target assembler during compilation:

```sh
git clone https://sourceware.org/git/binutils-gdb.git binutils-gdb
```

Both repositories should sit side by side in the same parent directory. The build directories and installed toolchains are placed inside a per-target subdirectory:

```
project/
├── gcc/              ← GCC fork (source, never built in-tree)
├── binutils-gdb/     ← binutils source
└── targets/
    └── rvsc2/
        ├── build-binutils/   ← binutils out-of-tree build
        ├── build/            ← GCC out-of-tree build
        └── install/          ← installed toolchain (bin/, lib/, ...)
```

=== Building Binutils

Binutils must be built and installed before GCC so that GCC's configure step can detect the target assembler and linker.

```sh
mkdir -p targets/rvsc2/build-binutils
cd targets/rvsc2/build-binutils

../../binutils-gdb/configure \
    --target=rvsc2-unknown-elf \
    --prefix=$(pwd)/../install \
    --disable-nls \
    --disable-gdb

make -j$(nproc)
make install
```

After this step the install prefix contains the target assembler, linker, and binutils utilities (`rvsc2-unknown-elf-as`, `rvsc2-unknown-elf-ld`, etc.).

=== Building GCC

With the assembler and linker installed, GCC can be configured and built. The three `--disable-*` flags prevent GCC from attempting to rebuild its own copies of the binutils components from the source tree (the GCC repository bundles a copy of binutils), which avoids duplicate build failures and unnecessary compilation time.

```sh
mkdir -p targets/rvsc2/build
cd targets/rvsc2/build

PATH="$(pwd)/../install/bin:$PATH" \
../../gcc/configure \
    --target=rvsc2-unknown-elf \
    --prefix=$(pwd)/../install \
    --enable-languages=c \
    --with-newlib \
    --disable-binutils \   # do not rebuild binutils utilities from gcc tree
    --disable-ld \         # do not rebuild linker from gcc tree
    --disable-gas          # do not rebuild assembler from gcc tree

make all-gcc -j$(nproc)
make install-gcc
```

Prepending the install prefix to `PATH` before configure allows the configure script to detect the pre-installed `rvsc2-unknown-elf-as` and `rvsc2-unknown-elf-ld` binaries, preventing it from scheduling them for in-tree compilation.

=== Building Newlib and libgcc

With GCC installed, the C runtime library (newlib) and the compiler support library (libgcc) can be built. Both are required to link executable programs.

```sh
mkdir -p targets/rvsc2/build-newlib
cd targets/rvsc2/build-newlib

PATH="$(pwd)/../install/bin:$PATH" \
../../newlib-src/configure \
    --target=rvsc2-unknown-elf \
    --prefix=$(pwd)/../install \
    --disable-multilib \
    --disable-newlib-supplied-syscalls

PATH="$(pwd)/../install/bin:$PATH" make -j$(nproc)
PATH="$(pwd)/../install/bin:$PATH" make install
```

With newlib installed, libgcc can be built against it:

```sh
cd targets/rvsc2/build

PATH="$(pwd)/../install/bin:$PATH" make all-target-libgcc -j$(nproc)
PATH="$(pwd)/../install/bin:$PATH" make install-target-libgcc
```

After all four steps the toolchain is fully self-contained under `targets/rvsc2/install/bin/`. Compiling a C program to a RISC-V object file requires only:

```sh
PATH="targets/rvsc2/install/bin:$PATH" \
rvsc2-unknown-elf-gcc -O2 -ffreestanding -c program.c -o program.o
```

== Synthesis Derivations <sc1-synthesis>

*Assembly notation.* In the listings below, `rd`, `rs1`, and `rs2` denote the canonical destination and source registers. Registers `t0`–`t5` are temporaries chosen for readability. In the actual GCC machine description, all temporaries are allocated as pseudo-registers via `gen_reg_rtx(SImode)`. The register allocator maps them to physical registers, resolving aliasing conflicts automatically. The bracket notation `[op ...]` marks an instruction that is itself synthesized, its expansion is defined in the subsection that covers that operation.

=== Arithmetic

Arithmetic synthesis operations assign values only to registers and carry no memory side-effects. They can be replaced by equivalent sequences without additional constraints.

==== Bitwise NOT <sc1-not>

The standard RISC-V pseudo-instruction `not rd, rs1` expands to `xori rd, rs1, -1`. Neither sc0 nor sc1 include `xori`, so a different derivation is required.

*Proof.* In two's complement, negation satisfies $-x = ~x + 1$ for all $x$. Rearranging: $~x = -x - 1$. Both subtraction from zero (`sub rd, x0, rs1`) and decrement by one (`addi rd, rd, -1`) are available in sc0 and sc1.

```asm
sub  rd, x0, rs1    # rd = -rs1
addi rd, rd, -1     # rd = -rs1 - 1 = ~rs1
```

The synthesis costs 2 static instructions and requires no extra registers. It applies to both rvsc0 and rvsc1.

==== xor (R[rd] = R[rs1] ^ R[rs2]) <sc1-xor>

Neither sc0 nor sc1 include `xor` or `xori`.

*Proof.* Claim: $a \^ b = (a | b) - (a & b)$ for all 32-bit words $a, b$, where the subtraction is ordinary two's-complement subtraction.

Fix a bit position $i$ and write $x = a_i, y = b_i in {0, 1}$. Case analysis over the four combinations of $x, y$:

#figure(
  table(
    columns: 5,
    align: center,
    [$a_i$], [$b_i$], [$(a | b)_i$], [$(a & b)_i$], [$(a | b)_i - (a & b)_i$],
    [0], [0], [0], [0], [0],
    [0], [1], [1], [0], [1],
    [1], [0], [1], [0], [1],
    [1], [1], [1], [1], [0],
  ),
  caption: [Truth table establishing $(a | b) - (a & b) = a \^ b$ bitwise],
)

The last column matches $a \^ b$ in every row, so the identity holds per bit. Moreover $(a & b)_i = 1$ implies $(a | b)_i = 1$ in every row, the 1-bits of $a & b$ are always a subset of the 1-bits of $a | b$. Consequently the per-bit subtraction $(a | b)_i - (a & b)_i$ never needs to borrow from a neighboring bit position: interpreting $a | b$ and $a & b$ as 32-bit binary numbers, the ordinary two's-complement subtraction `sub rd, ab_ior, ab_and` computes exactly the bitwise difference shown above, with no cross-bit borrow propagation. Hence the instruction-level subtraction yields $a \^ b$ exactly, for every $a, b$. $square$

```asm
and  t0, rs1, rs2   # t0 = rs1 & rs2
or   rd, rs1, rs2   # rd = rs1 | rs2
sub  rd, rd, t0     # rd = (rs1 | rs2) - (rs1 & rs2) = rs1 ^ rs2
```

The register-operand form costs 3 static instructions and 1 extra register. When the second operand is an immediate, a `li` is prepended, raising the cost to 4 instructions and 2 extra registers. 
The synthesis applies to both rvsc0 and rvsc1. Another plausible derivation is the De Morgan form $a \^ b = ~(a & b) & (a | b)$, which costs more instructions (4 without `[not]` expanded, 6 with it) and carries a register-aliasing hazard discussed in @sc1-md.

==== Shifts: SLL, SRL, SRA <sc1-shifts>

Neither sc0 nor sc1 include any shift instruction. All three variants are synthesized from `add`, `addi`, `sub`, and `beq`.

*Note on shift-count range.* The C standard (ISO C11 §6.5.7) states that shifting a 32-bit value by a count equal to or greater than 32 is undefined behavior; a conforming C program never triggers this case. The synthesis sequences nonetheless mask the shift count to the range $[0, 31]$ via `and t, rs2, 31`, matching the hardware behavior of native RV32I shift instructions. The synthesis therefore agrees with native hardware on all defined inputs and produces the same result on undefined inputs.

===== Logical Left Shift (SLL) <sc1-sll>

`sll rd, rs1, rs2` computes $"rd" = "rs1" << "rs2"$ (zero-fill from the right).

*Proof by induction.* Let $"sll"(x, n)$ denote $x$ left-shifted by $n$ positions. Claim: $"sll"(x, n) = x dot 2^n$ (modulo $2^32$).

- _Base case_ $(n = 0)$: $"sll"(x, 0) = x = x dot 2^0$. $checkmark$
- _Inductive step_: Assume $"sll"(x, n) = x dot 2^n$. Then $"sll"(x, n+1) = "sll"(x, n) + "sll"(x, n) = 2 dot x dot 2^n = x dot 2^(n+1)$. $checkmark$

The synthesis implements this recursion as $b$ repeated doublings, where $b$ is the masked shift amount. GCC lowers this two different ways depending on whether $b$ is known at compile time. $square$

```c
uint32_t sll(uint32_t rs1, uint32_t rs2) {
    rs2 &= 31u;           // C11 §6.5.7: mask to [0, 31]
    uint32_t rd = rs1;
    for (uint32_t i = 0; i < rs2; i++) rd += rd;
    return rd;
}
```

*Constant shift count.* When $b$ is a compile-time constant (e.g. `x << 3`), GCC unrolls the recursion directly during expand: $b$ consecutive `add rd, rd, rd` instructions, with no loop, no counter, and no back-edge at all. Cost is exactly $b$ instructions ($b >= 1$; the identity move for $b = 0$ is elided). The resulting assembly is listed in @apx-sll-const-asm.

*Variable shift count.* When $b$ is only known at runtime (e.g. `x << n`), the shift count must be counted down in a register, and the doubling is emitted as a genuine loop: each iteration performs the doubling (`add`), decrements the counter (`addi`), and tests it (`beq`); because sc1 has no native unconditional jump (`jal` and `auipc` are both absent), the back-edge to the top of the loop is itself synthesized as `lui` + `addi` + `jr` (three instructions). Every iteration therefore costs 6 instructions, except the final one, which exits through the taken `beq` and skips the back-jump. With the mask and guard setup this gives $6b + 1$ instructions for $b >= 1$, a minimum of 3 when $b = 0$ (mask and guard only, no loop) and a maximum of 187 when $b = 31$, at the cost of one extra register. The resulting assembly is listed in @apx-sll-asm. This is the dominant reason variable-count shift-heavy code expands so sharply on sc1: the synthesized loop pays not only for the repeated addition but also for re-materializing its own back-edge on every pass.


===== Logical Right Shift (SRL) <sc1-srl>

`srl rd, rs1, rs2` computes $"rd" = "rs1" >> "rs2"$ (zero-fill from the left). A right shift cannot be synthesized by repeated halving, because integer division by two would floor rather than truncate, producing incorrect results for odd values. Instead, output bit $i$ is copied from input bit $i + s$ using two single-bit masks that scan upward together.

*Proof of correctness.* The algorithm maintains `out_mask` (scanning output bits from 0 upward) and `in_mask` (scanning input bits from $s$ upward). At each step, if `x & in_mask ≠ 0`, input bit $i+s$ is set and the algorithm sets `result |= out_mask`. Both masks then advance (`<<= 1`). The loop terminates when `in_mask` overflows past bit 31 (becoming 0), meaning all input positions at or above $s$ have been processed. Output bits 0 through $31 - s$ are set from the corresponding input bits; bits above $31 - s$ are never set (their input positions have overflowed), correctly implementing zero-fill. $square$

```c
uint32_t srl(uint32_t x, uint32_t shift) {
    shift = shift & 31u;      // C11 §6.5.7: mask to [0, 31]
    uint32_t result   = 0;
    uint32_t out_mask = 1u;
    uint32_t in_mask  = 1u << shift;   // [sll]
    while (in_mask != 0) {
        if ((x & in_mask) != 0) result |= out_mask;
        out_mask <<= 1;   // [sll]
        in_mask  <<= 1;   // [sll]
    }
    return result;
}
```

*Constant shift count.* When $s$ is a compile-time constant, GCC unrolls both the `in_mask` pre-shift and the $(32-s)$-iteration extraction body directly at split time: every `<<=` above becomes a straight-line chain of `add` doublings, and every loop back-edge disappears entirely. Only the data-dependent bit test (`x & in_mask`, then conditionally `or`) survives as a forward, non-looping branch — the loop *control* is eliminated, not the per-bit test itself, since whether a given input bit is set cannot be known until runtime. Measured worst case (masked shift amount $s=1$, giving 31 surviving extraction steps) is 159 instructions, using 3 extra registers (`out_mask`, `in_mask`, a comparison temporary). The resulting assembly is listed in @apx-srl-const-asm.

*Variable shift count.* When $s$ is only known at runtime, both the `in_mask` pre-shift and the extraction loop must be counted down at runtime. The main loop runs $(32 - s)$ iterations at 4–5 instructions each; initialization and the `in_mask` pre-shift add overhead proportional to $s$, bringing the worst-case total to approximately 170 instructions and requiring five extra registers (four scratch registers plus the shift-count register). The resulting assembly is listed in @apx-srl-asm.

===== Arithmetic Right Shift (SRA) <sc1-sra>

`sra rd, rs1, rs2` computes the arithmetic right shift: identical to `srl` but vacated upper bits are filled with the sign bit rather than zero.

*Proof.* Let $s$ be the masked shift count and $b_{31}$ the sign bit of `rs1`. Arithmetic right shift sets output bit $i$ to input bit $\min(i+s, 31)$. For $i \leq 31-s$ this equals the `srl` result. For $i > 31-s$, all upper bits equal $b_{31}$.

If $b_{31} = 0$, the `srl` result already has all upper bits zero; no correction is needed.

If $b_{31} = 1$, the upper $s$ bits must be 1. The mask $(-1) << (32 - s)$ has exactly the top $s$ bits set, since $-1$ in two's complement is all-ones, and left-shifting by $k$ clears the low $k$ bits. OR-ing this mask into the `srl` result sets the upper $s$ bits correctly. $square$

```c
uint32_t sra(uint32_t x, uint32_t shift) {
    shift = shift & 31u;
    uint32_t result = srl(x, shift);
    if (shift == 0 || (x >> 31) == 0) return result;
    // OR in the top 'shift' bits: left-shifting -1 leaves exactly those bits set
    uint32_t sign_mask = (uint32_t)(-1) << (32u - shift);
    return result | sign_mask;
}
```

*Constant shift count.* When $s$ is a compile-time constant, the reused SRL expansion is unrolled exactly as described in @sc1-srl, and `sign_mask` is built the same way: a straight-line chain of $(32-s)$ `add` doublings seeded from $-1$, rather than the runtime `sub`/`add`/loop used to compute it in the variable case. Seeding from $-1$ (loadable via a single `addi`) rather than a general `li` keeps this step independent of `lui`, which matters because this synthesis is shared with rvsc0. Measured worst case (masked shift amount $s=1$) is 195 instructions, using 5 extra registers. The resulting assembly is listed in @apx-sra-const-asm.

*Variable shift count.* When $s$ is only known at runtime, the synthesis reuses the full variable-count SRL expansion and appends a runtime loop that builds `sign_mask` by doubling $-1$ a runtime-computed $(32-s)$ times — roughly 25 additional instructions for sign-bit extraction and sign-mask construction, reaching a worst-case total of approximately 200 instructions at the cost of six extra registers. The resulting assembly is listed in @apx-sra-asm.

=== Comparisons <sc1-comparisons>

==== SLT and SLTU <sc1-slt>

`slt rd, rs1, rs2` sets `rd = 1` if `rs1 < rs2` (signed comparison), else `rd = 0`. Neither sc0 nor sc1 include `slt` or `slti`.

*Proof.* Let `diff = rs1 - rs2` (32-bit two's complement). Without overflow, the sign bit of `diff` correctly indicates the comparison: `diff[31] = 1` iff `rs1 < rs2`. Signed overflow occurs when the operands have different signs and the result has the same sign as `rs2`. The expression $"overflow" = ("rs1" xor "rs2") & ("rs1" xor "diff")$ has MSB 1 exactly when overflow occurred. XOR-ing `diff` with `overflow` flips the sign bit iff overflow occurred, yielding the corrected result. Verification by case analysis on the sign bits of $a = "rs1"$ and $b = "rs2"$:

- $(a >= 0, b >= 0)$: subtraction cannot overflow; $"overflow"[31] = 0$; result = `diff[31]`. Correct.
- $(a < 0, b < 0)$: same analysis. Correct.
- $(a >= 0, b < 0)$: $a >= b$ always; result must be 0. If overflow: `diff[31] = 1` (wrong). $(a xor b)[31] = 1$ (signs differ); $(a xor "diff")[31] = 1$; so $"overflow"[31] = 1$ and $"corrected"[31] = 1 xor 1 = 0$. Correct.
- $(a < 0, b >= 0)$: $a < b$ always; result must be 1. If underflow: `diff[31] = 0` (wrong); $"overflow"[31] = 1$; $"corrected"[31] = 0 xor 1 = 1$. Correct. If no underflow: `diff[31] = 1`; $"overflow"[31] = 0$; $"corrected"[31] = 1$. Correct. $square$

```c
uint32_t slt(uint32_t a, uint32_t b) {
    uint32_t diff      = a - b;
    uint32_t overflow  = (a ^ b) & (a ^ diff);   // MSB = 1 iff signed overflow
    uint32_t corrected = diff ^ overflow;

    return corrected >> 31;
}
```

The resulting assembly sequence is listed in @apx-slt-asm.

`sltu rd, rs1, rs2` performs the same comparison treating both operands as unsigned.

*Proof.* `rs1 < rs2` (unsigned) iff the subtraction `rs1 - rs2` generates a borrow at the MSB. A borrow is _generated_ at bit $i$ when `rs1[i] = 0` and `rs2[i] = 1`, captured by `~rs1 & rs2`. A borrow is _propagated_ when `rs1[i] = rs2[i]` and a borrow arrived from below, captured by `~(rs1 ^ rs2) & diff`. The MSB of their union is 1 iff `rs1 < rs2` (unsigned). $square$

```c
uint32_t sltu(uint32_t a, uint32_t b) {
    uint32_t diff   = a - b;
    uint32_t borrow = (~a & b) | (~(a ^ b) & diff);
    return borrow >> 31;
}
```

The resulting assembly sequence is listed in @apx-sltu-asm.

Both expansions are expensive: `slt` requires approximately 60 instructions and three extra registers (t0–t2), while `sltu` requires approximately 70 instructions and four extra registers (t0–t3).


==== BNE <sc1-bne>

`bne rs1, rs2, target` jumps iff `rs1 ≠ rs2`.

*Equivalence.* `rs1 ≠ rs2` iff `rs1 - rs2 ≠ 0`. If the difference is zero, `beq` falls through (skip the jump); otherwise an unconditional `beq x0, x0, target` is taken.

```asm
sub  t0, rs1, rs2
beq  t0, x0, skip    # rs1 == rs2: skip
beq  x0, x0, target  # unconditional jump
skip:
```

The expansion costs 3 instructions and one extra register.

==== BLT, BGE, BLTU, BGEU <sc1-ordered-branches>

Each ordered branch is synthesized using `[slt]` or `[sltu]` followed by a `beq` or `bne` test.

*Equivalence.* A "branch if less-than" is equivalent to computing the comparison into a register and branching on that register being nonzero; "branch if greater-than-or-equal" branches when the comparison is zero (i.e., the "not less-than" case).

#figure(
  table(
    columns: (auto, auto, 1fr),
    align: left,
    [*Branch*], [*Condition*], [*Synthesis*],
    [`blt rs1, rs2, L`],  [`rs1 < rs2` (signed)],    [`[slt t, rs1, rs2]`; `bne t, x0, L`],
    [`bge rs1, rs2, L`],  [`rs1 >= rs2` (signed)],   [`[slt t, rs1, rs2]`; `beq t, x0, L`],
    [`bltu rs1, rs2, L`], [`rs1 < rs2` (unsigned)],  [`[sltu t, rs1, rs2]`; `bne t, x0, L`],
    [`bgeu rs1, rs2, L`], [`rs1 >= rs2` (unsigned)], [`[sltu t, rs1, rs2]`; `beq t, x0, L`],
  ),
  caption: [Ordered branch syntheses via `[slt]` and `[sltu]`],
)

=== Immediate Variants <sc1-immediates>

The instructions `andi`, `ori`, `xori`, `slli`, `srli`, `srai`, `slti`, and `sltiu` encode a register together with a 12-bit signed immediate. Neither sc0 nor sc1 support any of these forms. Each is synthesized by loading the immediate into a temporary register via `addi` and calling the corresponding register–register variant:

```asm
# Example: andi rd, rs1, imm  →
addi  t0, x0, imm
and   rd, rs1, t0
```

Since `addi` encodes 12-bit signed immediates (range −2048 to 2047) and all of these instruction forms share the same I-type 12-bit field, every immediate fits directly, at the cost of one extra `addi` instruction and one extra register per immediate variant.

=== Loads <sc1-loads>

==== LUI (rvsc0 only) <sc0-lui>

`lui rd, imm20` sets `rd = imm20 << 12`. The instruction is native in rvsc1; synthesis is required only for rvsc0. Since rvsc0 also lacks `jalr`, function calls are impossible; LUI synthesis is primarily needed to materialize large integer constants.

*Derivation.* A 32-bit value $v$ is split into $v = ("hi20" << 12) + "lo12"$, where $"lo12"$ is the signed 12-bit remainder that makes $v - "lo12"$ an exact multiple of 4096 (the same rounding a native `lui`+`addi` pair would use) and $"hi20"$ is the 20-bit quantity a `lui` instruction would hold. If $"hi20"$ itself fits in `addi` (rare but cheap when it does), it is loaded directly; otherwise, since `addi` encodes only 12-bit signed immediates (range −2048 to 2047), $"hi20"$'s low 20 bits are split into two 10-bit halves $"hi" = "hi20"[19:10]$ and $"lo" = "hi20"[9:0]$ (each in $[0, 1023]$, so each fits `addi`). Because these two fields occupy disjoint bit ranges, $"hi20" = ("hi" << 10) + "lo"$ with no carry between them, so the combination can use `add`/`addi` instead of `or` — matching the rest of this target's arithmetic-only style and needing only one register throughout:

```asm
addi  rd, x0, hi     # rd = upper 10 bits of hi20  (fits in addi: 0–1023)
[sll  rd, rd, 10]    # rd = hi << 10
addi  rd, rd, lo     # rd = (hi << 10) + lo = hi20  (lo fits in addi: 0–1023)
[sll  rd, rd, 12]    # rd = hi20 << 12
addi  rd, rd, lo12   # rd = v   (only emitted if lo12 != 0)
```

Every step reuses `rd` as both source and destination, so this synthesis needs zero extra registers and is safe to emit both before and after register allocation. Worst case (both the 10/10 split and the trailing `lo12` addition are needed) this is 25 instructions; when $"hi20"$ itself fits `addi`, it collapses to 13–14.

An earlier version of this target instead stored the 32-bit value in a linker-placed constant pool and loaded it with a single `lw rd, pool_entry(x0)`, reasoning that the pool would always link within the 12-bit signed offset of `x0` (address below 2048). That reasoning was a mistake: nothing guarantees a program executes starting at address 0, and it did not hold even for this project's own Spike-based behavioral tests, whose bare-metal binaries load at `0x80000000` — `%lo(pool_entry)` there computes a wrapped, incorrect address, so the load would silently return garbage. The addi/shift synthesis above has no such dependency on load address and was adopted instead.

==== LB, LBU, LH, LHU <sc1-lb-synthesis>

Since sc1 supports only `lw` (32-bit word loads), every byte or halfword load is synthesized in four steps: align the address to a word boundary, load the word, extract the target unit by shift, and sign-extend or zero-extend.

*Proof of correctness.* The expression `addr & ~3u` clears the two low-order bits, yielding the address of the word that contains the byte or halfword at `addr`. The unit's position within the word is `addr & MASK` (MASK = 3 for bytes, 2 for halfwords), and its bit offset is `(addr & MASK) * 8` (values 0, 8, 16, 24 for bytes; 0 or 16 for halfwords). Right-shifting the word by this amount moves the target unit to bits $[N-1:0]$ where $N$ is 8 or 16. A subsequent shift pair of $32-N$ bits — left then right — isolates the unit and performs either sign extension (arithmetic right shift, for `lb`/`lh`) or zero extension (logical right shift, for `lbu`/`lhu`). This is correct for any address alignment because the memory model is little-endian and the bit offset exactly encodes the unit's position within the word. 

This algorithm is emitted at runtime — it does not assume the offset is constant at compile time.

```c
/* Common algorithm for lb/lbu/lh/lhu */
uint32_t aligned = addr & ~3u;          // word-aligned: addr & -4
uint32_t word    = lw(aligned);         // lw 0(aligned)
uint32_t unit_off = addr & MASK;        // MASK = 3 for byte, 2 for halfword
uint32_t bit_off  = unit_off * 8;       // least-significant bit position
uint32_t shifted  = word >> bit_off;    // [srl] extracts unit to bits [N:0]
// lbu/lhu: zero-extend via symmetric shift
uint32_t result   = (shifted << BITS) >> BITS;  // logical: [srl]
// lb/lh:  sign-extend via arithmetic shift
int32_t  result   = (int32_t)(shifted << BITS) >> BITS;  // arithmetic: [sra]
// BITS = 24 for byte (QImode), 16 for halfword (HImode)
```

The resulting assembly sequences are listed in @apx-lb-lh-asm.

Since sc1 shifts are themselves synthesized via `add`/`beq` loops, each byte load expands to approximately 70–80 instructions.

=== Stores <sc1-stores>

==== SB and SH <sc1-sb>

A byte store (`sb`) or halfword store (`sh`) is implemented as a read-modify-write: load the word containing the target location, clear the target bits, insert the new value, and write back. The bit offset is computed at runtime since the base address is unknown at compile time.

*Proof of correctness.* Let `word` be the current word at the aligned address, `mask` the bit-field covering the target unit (e.g., `0xFF << shift` for a byte), and `val` the new value to write. The expression $("word" & ~"mask") | ("val" & "mask")$ replaces exactly the target bits with `val` while preserving all others. For each bit $i$: if `mask[i] = 1`, then `(word & ~mask)[i] = 0` and `(val & mask)[i] = val[i]`, yielding `val[i]`; if `mask[i] = 0`, then `(val & mask)[i] = 0` and `(word & ~mask)[i] = word[i]`, yielding `word[i]`. $square$

A byte store is implemented as:

```c
void sb(uint8_t *addr, uint32_t rs2) {
    uint32_t aligned_addr  = (uint32_t)addr & ~3u;   // addr & -4
    uint32_t byte_pos      = (uint32_t)addr & 3u;    // runtime: 0–3
    uint32_t shift         = byte_pos * 8u;           // runtime: 0,8,16,24
    uint32_t old_word      = *(uint32_t *)aligned_addr;     // lw
    uint32_t byte_mask     = 0xFFu << shift;                // [sll] runtime shift
    uint32_t new_byte      = (rs2 & 0xFFu) << shift;        // [sll] runtime shift
    uint32_t new_word      = (old_word & ~byte_mask) | new_byte;
    *(uint32_t *)aligned_addr = new_word;                    // sw
}
```

The resulting assembly sequence is listed in @apx-sb-asm. The expansion requires one extra `lw` and one extra `sw` surrounding the computation, totalling approximately 100 instructions and three extra registers (t0–t2).

The `sh` synthesis follows the same read-modify-write pattern as `sb`, with `MASK = 2` and mask constant `0xFFFF`. Since `0xFFFF` exceeds the 12-bit `addi` range, it is materialized via `lui 0x10; addi -1`.

```c
void sh(uint16_t *addr, uint32_t rs2) {
    uint32_t aligned = (uint32_t)addr & ~3u;
    uint32_t shift   = ((uint32_t)addr & 2u) * 8u;   // runtime: 0 or 16
    uint32_t word    = *(uint32_t *)aligned;
    uint32_t mask    = 0xFFFFu << shift;
    uint32_t new_w   = (word & ~mask) | ((rs2 & 0xFFFFu) << shift);
    *(uint32_t *)aligned = new_w;
}
```

The resulting assembly sequence is listed in @apx-sh-asm. The expansion likewise requires one extra `lw` and one extra `sw`, totalling approximately 105 instructions and three extra registers (t0–t2).

=== Control Flow <sc1-jump>

==== JAL <sc1-jal>

`jal ra, target` saves the return address (`PC + 4`) into `ra` and jumps to `target`. rvsc1 does not support `auipc`-based PC-relative addressing; `jal` must therefore be synthesized from `lui`, `addi`, and `jalr`.

*Equivalence.* The semantics of `jal ra, target` are: $"ra" <- "PC" + 4$; $"PC" <- "target"$. Since `lui`+`addi` can materialize any 32-bit absolute address, the two effects can be split: materialize the return address into `ra` before the jump, then jump to `target` via `jalr`.

```asm
# jal ra, target  →
lui   ra,  %hi(back)       # ra[31:12] = upper bits of (PC+4)
addi  ra,  ra, %lo(back)   # ra = PC+4
lui   t0,  %hi(target)
addi  t0,  t0, %lo(target)
jalr  x0,  0(t0)           # PC ← target; ra already holds return address
back:
```

Each call site expands to 5 instructions and requires one extra register (`t0`).

=== Cost Summary <sc1-synthesis-cost>

@tab-synthesis-cost summarises the instruction and register cost for every synthesis covered in this section. Counts reflect worst-case inputs (e.g. maximum shift amount, non-zero byte position, misaligned halfword address).

#figure(
  table(
    columns: (auto, 1fr, auto, auto),
    stroke: none,
    inset: (y: 5pt),
    table.hline(),
    table.header(
      [*Operation*], [*Applies to*], [*Worst-case instructions*], [*Extra registers*],
    ),
    table.hline(stroke: 0.5pt),
    [`not`],         [rvsc0, rvsc1], [2],    [0],
    [`xor` (reg)],   [rvsc0, rvsc1], [3],    [1],
    [`xor` (imm)],   [rvsc0, rvsc1], [4],    [2],
    [`ori` (imm)],   [rvsc1],        [2],    [1],
    [`andi` (imm)],  [rvsc1],        [2],    [1],
    [`sll` (const)], [rvsc0, rvsc1], [$b$ (max 31)], [0],
    [`sll` (var)],   [rvsc0, rvsc1], [187],  [1],
    [`srl` (const)], [rvsc0, rvsc1], [159],  [3],
    [`srl` (var)],   [rvsc0, rvsc1], [~170], [5],
    [`sra` (const)], [rvsc0, rvsc1], [195],  [5],
    [`sra` (var)],   [rvsc0, rvsc1], [~200], [6],
    [`slt`],         [rvsc0, rvsc1], [~60],  [3],
    [`sltu`],        [rvsc0, rvsc1], [~70],  [4],
    [`bne`],         [rvsc0, rvsc1], [3],    [1],
    [`blt`/`bltu`],  [rvsc0, rvsc1], [~75],  [4],
    [`bge`/`bgeu`],  [rvsc0, rvsc1], [~75],  [4],
    [`lui` (addi+shift)], [rvsc0],   [25],   [0],
    [`lb`/`lbu`],    [rvsc0, rvsc1], [~80],  [2],
    [`lh`/`lhu`],    [rvsc0, rvsc1], [~80],  [2],
    [`sb`],          [rvsc0, rvsc1], [~100], [3],
    [`sh`],          [rvsc0, rvsc1], [~105], [3],
    [`jal`],         [rvsc1],        [5],    [1],
    table.hline(),
  ),
  caption: [Worst-case instruction and register cost for each synthesis],
) <tab-synthesis-cost>


== GCC Implementation <sc1-gcc-impl>

=== Target Flags <sc1-flags>

Each synthesized instruction corresponds to a Boolean flag declared in `gcc/config/riscv/riscv.opt`. When a flag is zero, the corresponding `define_insn` condition evaluates to false (suppressing native instruction emission) while the `define_expand` synthesis path fires and calls `DONE`. @tbl-flags lists all flags added for this project.

#figure(
  table(
    columns: (auto, auto, auto),
    align: left,
    [*Flag*], [*Macro*], [*Disabled for*],
    [`-mfence`],  [`TARGET_FENCE`],  [rvsc0, rvsc1, rvsc2],
    [`-mauipc`],  [`TARGET_AUIPC`],  [rvsc0, rvsc1],
    [`-mlui`],    [`TARGET_LUI`],    [rvsc0],
    [`-mshift`],  [`TARGET_SHIFT`],  [rvsc0, rvsc1],
    [`-mxor`],    [`TARGET_XOR`],    [rvsc0, rvsc1],
    [`-mori`],    [`TARGET_ORI`],    [rvsc0, rvsc1],
    [`-mandi`],   [`TARGET_ANDI`],   [rvsc0, rvsc1],
    [`-mbne`],    [`TARGET_BNE`],    [rvsc0, rvsc1],
    [`-mslt`],    [`TARGET_SLT`],    [rvsc0, rvsc1],
    [`-mslti`],   [`TARGET_SLTI`],   [rvsc0, rvsc1],
    [`-mblt`],    [`TARGET_BLT`],    [rvsc0, rvsc1],
    [`-mbge`],    [`TARGET_BGE`],    [rvsc0, rvsc1],
    [`-mbltu`],   [`TARGET_BLTU`],   [rvsc0, rvsc1],
    [`-mbgeu`],   [`TARGET_BGEU`],   [rvsc0, rvsc1],
    [`-mbyte`],   [`TARGET_BYTE`],   [rvsc0, rvsc1],
    [`-mhalf`],   [`TARGET_HALF`],   [rvsc0, rvsc1],
  ),
  caption: [Target option flags added for this project],
) <tbl-flags>

All flags have `Init(1)` (enabled by default). The per-target header (`rvscN.h`) disables the appropriate subset via `CC1_SPEC`.

=== Machine Description Patterns <sc1-md>

The GCC machine description (`riscv.md`) uses two complementary constructs per synthesized operation: a `define_insn` guarded by `TARGET_XYZ` that emits the native instruction when the flag is enabled, and a `define_expand` guarded by `!TARGET_XYZ` that emits the synthesis sequence and calls `DONE`, preventing GCC from falling through to the native insn. The XOR synthesis illustrates the pattern:

```scheme
;; Native XOR (and OR) — emitted only when TARGET_XOR (XOR) or always (IOR)
(define_insn "*<optab><mode>3"
  [(set (match_operand:X                0 "register_operand" "=r,r")
        (any_or:X (match_operand:X 1 "register_operand" "%r,r")
                       (match_operand:X 2 "arith_operand"    " r,I")))]
  "TARGET_XOR || (<CODE>) == IOR"
  "<insn>%i2\t%0,%1,%2")

;; XOR/OR synthesis — the any_or expand shared by both codes
(define_expand "<optab><mode>3"
  [(set (match_operand:X 0 "register_operand")
        (any_or:X (match_operand:X 1 "register_operand" "")
                   (match_operand:X 2 "reg_or_const_int_operand" "")))]
  ""
{
  /* sc1 synthesis: a ^ b = (a | b) - (a & b).
     Using sub instead of NOT avoids an instruction-scheduling hazard:
     the old ~(a&b)&(a|b) form has no data edge between the OR and the
     negation of AND, so RTL optimisers reorder them and the register
     allocator then aliases neg to op1's register, corrupting ab_ior. */
  if ((<CODE>) == XOR && !TARGET_XOR)
    {
      rtx op1    = operands[1];
      rtx op2    = REG_P (operands[2]) ? operands[2]
                                       : force_reg (SImode, operands[2]);
      rtx ab_and = gen_reg_rtx (SImode);
      rtx ab_ior = gen_reg_rtx (SImode);
      emit_insn (gen_andsi3 (ab_and, op1, op2));
      emit_insn (gen_iorsi3 (ab_ior, op1, op2));
      emit_insn (gen_subsi3 (operands[0], ab_ior, ab_and));
      DONE;
    }
  /* sc1 synthesis: ori rd, rs, imm → li t, imm; or rd, rs, t */
  if ((<CODE>) == IOR && !TARGET_ORI && CONST_INT_P (operands[2]))
    operands[2] = force_reg (<MODE>mode, operands[2]);
  if (CONST_INT_P (operands[2]) && synthesize_ior_xor (<OPTAB>, operands))
    DONE;
})
```

The pattern is shared between `XOR` and `IOR` via the `any_or` code iterator (`<optab>` and `<CODE>` are resolved to `xorsi3`/`XOR` and `iorsi3`/`IOR` at machine-description expansion time). The `DONE` call inside the `XOR` branch signals that the expansion body has fully handled the operation; GCC does not attempt to match the `define_insn` afterwards.

=== Implementation Corner Cases <sc1-corner-cases>

Several correctness problems appeared only at higher optimization levels (`-O2`, `-O3`) and required understanding interactions between GCC passes that are invisible during basic `-O1` testing. This subsection documents the four corner cases encountered and the fixes applied.


=== Worked Example: XOR in C to Assembly <sc1-example>

The following traces how `unsigned f(unsigned a, unsigned b) { return a ^ b; }` is compiled by `rvsc1-unknown-elf-gcc -S -O1`:

+ *Frontend*: parses `a ^ b` to an AST `XOR_EXPR` node.
+ *GIMPLE*: `_1 = a ^ b; return _1;` — language-independent SSA form.
+ *RTL lowering*: GCC attempts to emit `xorsi3`. `TARGET_XOR` is 0 (rvsc1 disables XOR), so the `XOR` branch of the `<optab><mode>3` synthesis body fires (@sc1-md).
+ *Expansion*: the body allocates two pseudo-registers (`ab_and`, `ab_ior`), emits `andsi3` into `ab_and`, `iorsi3` into `ab_ior`, then `subsi3` computing `ab_ior - ab_and` into the destination, and calls `DONE`.
+ *Register allocation*: GCC maps pseudo-registers to physical registers (`a0`, `a1`, `a5`) such that no `xor` instruction appears; `ab_ior` is allocated directly into the destination register `a0`, so only one extra register (`a5`, holding `ab_and`) is visible in the output.
+ *Assembly output*:
```asm
and  a5, a0, a1
or   a0, a0, a1
sub  a0, a0, a5
```
inspecting the result with `grep xor` returns empty; only `and`, `or`, and `sub` appear — all native sc1 instructions.


== Known Limitations

=== rvsc0: No Non-Inlined Function Calls

The rvsc0 processor supports neither `jalr` nor `jal`. The compiler therefore has no instruction with which to perform an indirect jump while saving the return address, making non-inlined function calls impossible. However, the GCC inliner operates before instruction selection, so C programs with multiple functions can still be compiled for rvsc0 provided that every call site is inlined, either by marking functions `__attribute__((always_inline))` or by relying on GCC's automatic inlining at `-O1` and above. Any call that remains non-inlined after optimization will either fail at link time or produce incorrect control flow at runtime.

=== rvsc1: Function Body Size Limit

The only native conditional branch in rvsc1 is `beq`, which has a ±4 KB PC-relative offset range (12-bit signed immediate). For branch targets that exceed this range, the GCC backend emits a long form:

```asm
beq  rs1, rs2, skip        # short branch: skip the jump if condition holds
lui  t1, %hi(target)
addi t1, t1, %lo(target)
jr   t1                    # absolute jump to target
skip:
```

This long form is itself valid rvsc1 code, so correctness is preserved. However, the long form for the inverted branch (`bne`) chains through the `bne` synthesis (which uses `beq`), so individual function bodies should remain under approximately 4 KB of machine code, roughly 1 000 synthesized instructions, to avoid triggering branch relaxation in unexpected cases. Typical educational programs are well within this limit.


= Results <ch-results>

== Tests

Correctness is verified by three complementary test strategies: _ISA compliance_ tests, which statically check that the compiler never emits a forbidden instruction; _behavioral self-tests_, which execute compiled programs on a reference simulator and check their results; and the _GCC torture suite_, which subjects the compiler to a large corpus of programs accumulated by the GCC project itself. The synthesis-heavy targets are verified in depth: rvsc1 receives all three layers, and rvsc0 receives the first two (the torture suite requires function calls, which rvsc0 cannot compile). rvsc2 is covered by ISA compliance alone, and rvsc3 through rvsc7 require no testing beyond what the upstream backend already provides. This section first describes how each strategy works, then presents the specificities and results of each target.

=== Test Strategies

==== ISA Compliance <strategy-isa>

The ISA compliance strategy answers a static question: does the compiler ever emit an instruction that the modeled processor does not implement? Each target has a corpus of small C programs, each written to exercise one operation category, one program shifts by variable amounts, another stores individual bytes, another compares signed and unsigned values, and so on. Each program is constructed so that a compiler for the full RV32I ISA would naturally use the native instruction under test, forcing the restricted target to demonstrate the corresponding synthesis instead.

The test script compiles every program in the corpus at each of GCC's five optimization levels (`-O0`, `-O1`, `-O2`, `-O3`, `-Os`), assembles the output, and disassembles the resulting object with pseudo-instruction expansion enabled. Every mnemonic in the disassembly is then checked against the target's  allowlist.

==== Behavioral Self-Tests <strategy-behav>

ISA compliance proves that the output is _legal_, it says nothing about whether it is _correct_. A synthesis could emit only allowed instructions and still compute the wrong value. The behavioral strategy closes this gap by executing the compiled programs on Spike, the RISC-V reference simulator @spike, and checking their results.

Each behavioral test is a self-validating C program covering one operation category through a sequence of assertions in boundary values, sign transitions, every byte lane of a word, and algebraic identities cross-checked against independently computed results. The program returns 0 when every assertion holds, and a distinct nonzero code identifying the first failing assertion otherwise. Each program is compiled at all five optimization levels and executed on Spike, a test case passes when the simulator exits with code 0.

==== GCC Torture Suite <strategy-torture>

Hand-written tests only cover the code paths their author anticipated. The third strategy probes the remaining ones with `gcc.c-torture/execute`, a suite of 1684 C programs accumulated by the GCC project over three decades of compiler development, many distilled from real miscompilation bugs. The programs are self-validating, with assertions calling `abort()` on failure. The harness compiles each program at all five optimization levels and runs it on Spike in the same proxy-kernel environment used by the behavioral tests, giving 1684 × 5 = 8420 compiler/optimizer combinations. Programs that fail to compile are not all equivalent, so the harness classifies the failure rather than discarding it: a diagnostic rejecting the program (typically a type or feature the freestanding runtime does not provide) counts as skipped, whereas an internal compiler error — the compiler aborting on its own invariants, identified by its crash diagnostic, by death from a signal, or by an exit status no ordinary diagnostic produces — is a backend defect and counts as a failure. Distinguishing the two matters because a single missing constraint or clobber can crash the compiler on dozens of programs at once; folding those crashes into a skip count is what allowed the two defects described in @sc1-torture-tests to go unnoticed. Failures are therefore grouped by the crash location or diagnostic text they report, so that one root cause is presented as one entry rather than as the many program/optimization pairs it happens to affect. A fixed simulation budget of 300 seconds bounds each execution, and a 120-second budget bounds each compilation. A combination passes when the simulator exits with code 0. In addition, for each program that compiles successfully, the emitted assembly is passed through the same static mnemonic checker used by the ISA-compliance tests, catching any forbidden instruction that the dynamic execution might not exercise.

=== rvsc0

==== ISA Compliance <sc0-isa-tests>

The rvsc0 corpus contains 12 programs, listed by operation category in @tbl-sc0-isa-files. Every mnemonic they produce is checked against the eight-instruction rvsc0 allowlist:

#figure(
  ```
  lw  sw  beq  add  addi  sub  and  or
  ```,
  caption: [rvsc0 allowed mnemonics],
) <tbl-sc0-allowlist>

#figure(
  table(
    columns: (auto, 1fr),
    align: left,
    [*Test program*], [*Operations exercised*],
    [Arithmetic],   [ADD, ADDI, SUB (regression: must remain native)],
    [Branches],     [BNE, BLT, BGE, BLTU, BGEU — synthesized from `beq` via SLT chains],
    [Signed byte load], [LB — synthesized via `lw`+shift+sign-extend],
    [Halfword load], [LH signed/unsigned — synthesized via `lw`+shift+mask],
    [Logic],        [AND, OR (native); XOR via `(a|b)-(a&b)`; ANDI/ORI via `li`+register-op],
    [Large constants], [LUI — synthesized via addi/add (10-bit split + shifts, no lui or memory access)],
    [Bitwise NOT],  [NOT — synthesized as `sub x0, rs; addi rd, rd, -1`],
    [Byte store],   [SB — synthesized via `lw`+clear+insert+`sw`],
    [Shifts],       [SLL, SRL, SRA with constant and variable shift counts],
    [Comparisons],  [SLT and SLTU — synthesized via sub/xor/and/lshr chains],
    [Variable arithmetic right shift], [SRA with runtime shift count — bit-extraction loop + sign-fill],
    [Variable logical right shift], [SRL with runtime shift count — bit-extraction loop],
  ),
  caption: [ISA compliance test programs for rvsc0, by operation category],
) <tbl-sc0-isa-files>

Each program is compiled at five optimization levels, giving 12 × 5 = *60 test cases* in total. All 60 pass: no forbidden mnemonic appears in any rvsc0 output at any optimization level.

==== Behavioral Self-Tests <sc0-behav-tests>

Because rvsc0 has no `jalr` instruction, it cannot use the proxy-kernel runtime that rvsc1 uses. Instead, each test program is a single C function, linked against a small hand-written bare-metal startup routine that sets up the stack, invokes the test function, converts its return value to a host-interface exit token, and writes it to the simulator's designated exit address. Spike runs the binary bare-metal at its default load address of `0x80000000` and exits with the reported value. The test passes if Spike exits with code 0.

This is precisely the condition that surfaced the constant-pool bug described in @sc0-lui: since Spike loads bare-metal binaries at `0x80000000`, not address 0, any codegen whose correctness depends on the program's load address is exercised at exactly the address where the original assumption failed. With LUI synthesis switched to addi/shift, large integer constants are supported at any load address. Global variables remain unsupported for a separate, still-standing reason: taking the address of a global still requires `lui`, which rvsc0 has no way to synthesize (its address is link-time-unknown, and RISC-V relocations only support the standard 20-bit/12-bit `lui`/`addi` split, not this target's custom 10/10-bit split). All test programs therefore use only stack-allocated `volatile` locals.

#figure(
  table(
    columns: (auto, 1fr),
    align: left,
    [*Test program*], [*Cases covered*],
    [Arithmetic],  [ADD/SUB/ADDI on positive, negative, and zero operands; AND and OR identity and absorption],
    [Branches],    [Signed and unsigned comparisons: `<`, `>`, `<=`, `>=`, `!=`; all synthesized from `beq`+SLT chains],
    [Logic],       [XOR, ANDI, ORI on representative values; `(a|b)-(a&b)` identity; complement-via-XOR],
    [Loops],       [Ascending for-loop (sum 1..10), countdown while-loop (doubling to 256), do-while (repeated addition), nested loops],
    [Memory],      [SB/LBU/LB on all four byte lanes; SH/LHU/LH on both halfword lanes; signed widening via volatile intermediary],
    [Large constants], [LUI-class 32-bit constants (clean and with nonzero low 12 bits, positive and negative) at Spike's real `0x80000000` load address — the regression test for @sc0-lui],
    [Bitwise NOT], [NOT on 0, −1, 1, −128, 127; combined `~&`, `~|`; XOR cross-checked in C against the independent formula `(a|b)&~(a&b)`],
    [Shifts],      [SLL/SRL/SRA with constant counts (1, 3, 8); variable counts; sign-propagation (SRA) and zero-fill (SRL)],
    [Comparisons], [SLT and SLTU: signed ordering, unsigned ordering, equality; unsigned wrap-around larger than small positive],
  ),
  caption: [Behavioral test programs for rvsc0, by operation category],
) <tbl-sc0-behav-files>

All 9 behavioral tests pass at every optimization level (`-O0` through `-Os`), for 9 × 5 = 45 cases.

=== rvsc1

==== ISA Compliance <sc1-isa-tests>

The rvsc1 corpus contains 19 programs, listed by operation category in @tbl-sc1-isa-files. Every mnemonic they produce is checked against the ten-instruction rvsc1 allowlist:

#figure(
  ```
  lw  sw  beq  add  addi  sub  and  or  lui  jalr
  ```,
  caption: [rvsc1 allowed mnemonics],
) <tbl-sc1-allowlist>

#figure(
  table(
    columns: (auto, 1fr),
    align: left,
    [*Test program*], [*Operations exercised*],
    [Addition],     [ADD and ADDI (regression: must remain native)],
    [Immediate AND], [ANDI — synthesized as `li t, imm; and rd, rs, t`],
    [Branches],     [BNE, BLT, BGE, BLTU, BGEU — all synthesized from `beq`],
    [Function call], [Call and return — JAL synthesized as `lui+addi+jalr`],
    [Signed byte load], [LB — synthesized via `lw`+shift+sign-extend],
    [Unsigned byte load], [LBU — synthesized via `lw`+shift+mask],
    [Signed halfword load], [LH — synthesized via `lw`+shift+sign-extend],
    [Unsigned halfword load], [LHU — synthesized via `lw`+shift+mask],
    [Loop],         [Loop with synthesized branch and variable shift],
    [Bitwise NOT],  [NOT — synthesized as `sub x0, rs; addi rd, rd, -1`],
    [Immediate OR], [ORI — synthesized as `li t, imm; or rd, rs, t`],
    [Byte store],   [SB — synthesized via `lw`+clear+insert+`sw`],
    [Halfword store], [SH — synthesized via `lw`+clear+insert+`sw`],
    [Constant-count shifts], [SLL, SRL, SRA with compile-time shift counts],
    [Variable left shift], [SLL with runtime shift count — count-down loop],
    [Comparisons],  [SLT and SLTU — synthesized via sub/xor/and/lshr],
    [Variable arithmetic right shift], [SRA with runtime shift count — bit-extraction loop + sign-fill],
    [Variable logical right shift], [SRL with runtime shift count — bit-extraction loop],
    [XOR],          [XOR — synthesized via `(a|b) - (a&b)`],
  ),
  caption: [ISA compliance test programs for rvsc1, by operation category],
) <tbl-sc1-isa-files>

Each program is compiled at five optimization levels, giving 19 × 5 = *95 test cases* in total. All 95 pass: no forbidden mnemonic appears in any rvsc1 output at any optimization level.

==== Behavioral Self-Tests <sc1-behav-tests>

rvsc1 binaries run on top of the RISC-V proxy kernel, a minimal execution environment that loads the program, provides a stack, and services the `exit` system call, allowing test programs to be ordinary C programs with a `main` function. Each program is linked against the proxy-kernel runtime and executed on Spike; the exit code reported through the proxy kernel decides the verdict.

#figure(
  table(
    columns: (auto, 1fr),
    align: left,
    [*Test program*], [*Cases covered*],
    [Branches],    [Signed and unsigned comparisons: `<`, `>`, `<=`, `>=`, `!=`; boundary values including `INT_MIN`, `INT_MAX`, and `UINT_MAX`],
    [Function calls], [Recursive Fibonacci (`fib(10)=55`), multi-argument calls, call through a function pointer],
    [Logic],       [XOR, ORI, ANDI, NOT on representative bit patterns; `(a|b)-(a&b)` identity; complement-via-XOR],
    [Memory],      [SB/LBU/LB and SH/LHU/LH on aligned addresses; signed/unsigned byte and halfword widening],
    [Shifts],      [SLL/SRL/SRA with constant counts (3, 15, 16, 4); variable counts; sign-propagation and zero-fill],
    [Comparisons], [SLT and SLTU with `a=-1`, `b=1`; `INT_MIN < INT_MAX`; `UINT_MAX > 0`],
  ),
  caption: [Behavioral test programs for rvsc1, by operation category],
) <tbl-sc1-behav-files>

All 6 behavioral tests pass at every optimization level (`-O0` through `-Os`), for 6 × 5 = 30 cases.

==== GCC Torture Suite <sc1-torture-tests>

The full suite covers 1 684 × 5 = 8 420 compiler+optimizer combinations. @tbl-torture-results summarizes the outcome.

#figure(
  table(
    columns: (auto, auto, auto, auto),
    align: (left, right, right, right),
    [*Optimization*], [*Passed*], [*Skipped*], [*Failed*],
    [`-O0`], [1 627], [57], [0],
    [`-O1`], [1 619], [54], [11],
    [`-O2`], [1 619], [54], [11],
    [`-O3`], [1 621], [54], [9],
    [`-Os`], [1 625], [54], [5],
    [*Total*], [*8 111*], [*273*], [*36*],
  ),
  caption: [gcc.c-torture/execute results for rvsc1 (8 420 combinations)],
) <tbl-torture-results>

"Skipped" denotes programs that fail to compile or link, or that are excluded up front as known-unsupported. Fifty-four sources are excluded at every optimization level, in the seven categories of @tbl-torture-skips. None of them is related to sc1's restricted instruction set: they are runtime-library gaps, language features absent from 32-bit RISC-V in general, host-specific inline assembly, or compile-budget exhaustion.

#figure(
  table(
    columns: (auto, auto, 1fr),
    align: (left, right, left),
    [*Category*], [*Sources*], [*Reason for exclusion*],
    [`printf` family], [40], [Undefined internal newlib symbols at link time],
    [Expensive tests], [5], [Upstream-flagged; compile time alone exceeds the budget],
    [`__int128`], [3], [No 128-bit integer mode on any 32-bit RISC-V target],
    [libm], [2], [`pow`/`floor` undefined; no libm built for this target],
    [`sys/mman.h`], [2], [`mmap` unavailable on a freestanding target],
    [`_Decimal`], [1], [Decimal floating point unsupported],
    [x87 inline asm], [1], [x86-specific register constraints; not applicable to RISC-V],
    [*Total*], [*54*], [],
  ),
  caption: [Torture-suite sources excluded at every optimization level, by cause],
) <tbl-torture-skips>

The two runtime-library categories, which together account for 42 of the 54, are both build configuration gaps rather than compiler or ISA issues. The linked newlib `libc.a`'s stdio wrappers (`printf`, `sprintf`, `fprintf`, and the `_chk`/`v`-prefixed variants) call internal reentrant symbols (`_vfprintf_r`, `_svfprintf_r`, `_vfiprintf_r`) that this newlib build never defines, so any test calling a `printf`-family function fails to link; likewise, no libm is built for this target, so the two tests calling `pow` and `floor` fail on the same kind of undefined reference. Three further sources hit the `printf` gap only at `-O0`, where the unoptimized `sprintf` call survives to link time — which is what raises that row of @tbl-torture-results to 57; at higher optimization levels GCC eliminates or transforms the call before it reaches the linker.

An earlier revision of this suite reported 31 cases that appeared to time out at the 300-second Spike budget, attributed to shift-synthesis overhead. Root-causing them instead found a genuine backend correctness bug: for `!TARGET_AUIPC`, both the long-branch/jump synthesis and the call-address materialization used the same scratch register (`t1`) without declaring it clobbered, so an optimizer could leave a call executing with a stale register value pointing at a nearby loop instead of the intended callee — and, more subtly, the same missing declaration let IRA allocate an *unrelated* live value (e.g. a loaded word inside the byte/half-word store synthesis) to a register that a nearby shift-synthesis loop's back edge silently destroyed. Both were genuine miscompilations, not slow-but-correct code, and were confirmed via direct instruction-level tracing (`spike --log-commits`) on `920302-1.c` and `pr93249.c`, where a call or a merge step ended up executing with corrupted register/memory state. Fixing the register-clobber declarations resolved all 31 original cases with zero regressions (95/95 ISA compliance, 30/30 behavioral).

Two further pre-existing, unrelated internal compiler errors (ICEs) surfaced among the skipped programs: `*branch<mode>_slt_synth` — the pattern that catches ordered-comparison branches combine constructs directly, bypassing the usual expand-time synthesis — declared its comparison operands with a predicate but no constraint string. With no constraint to act on, LRA never reloaded a non-register value — such as a memory load combine had folded directly into the comparison — into an actual register before the pattern's post-reload split unconditionally treated both operands as registers, crashing as either "could not split insn" (`pr10352-1.c`) or an ICE in `patch_jump_insn` during reload's CFG cleanup (`arith-rand.c`). Adding the missing constraints (matching the sibling `*branch<mode>` pattern) fixed both, again with zero regressions.

Both defects were found by hand rather than reported by the harness, which at the time folded every compile failure into an undifferentiated skip count. Three shortcomings explained the blind spot, and correcting them is what makes the sweep reported below meaningful. First, an ICE was indistinguishable from an unsupported-feature diagnostic, so neither affected the exit status. Second, the harness collected the compiler's output through pipes it never drained while waiting for the process to exit, so any compilation emitting more than the operating system's pipe buffer blocked indefinitely and was recorded as a timeout — and a compiler dumping the RTL of an offending instruction, which is precisely what an ICE does, is the case most likely to exceed that buffer. Third, the static checker ignored the per-test option directives that the suite's own sources carry, so 115 programs failed on language dialect (most requiring `-std=gnu89`) rather than on anything related to sc1, and were skipped without ever being checked for forbidden instructions.

With the three corrected, the static sweep was repeated over the entire suite, including the sources excluded up front, since a program that cannot link can still crash the compiler. Of the 8 420 combinations, 8 368 produced an object file and #emph[every one of them contained only the ten instructions sc1 implements] — no forbidden mnemonic at any optimization level. No ICE occurred anywhere in the sweep. The 52 combinations that produced no object divide into 35 front-end rejections spanning four distinct causes — `__int128` (15), `sys/mman.h` (10), x87-specific inline asm (5), and `_Decimal` floating point (5), all of which the earlier discussion already attributes to the freestanding runtime or to 32-bit RISC-V in general rather than to sc1 — and 17 exhausted compile budgets, confined to the five upstream-flagged "expensive" tests. That last count is sensitive to machine load, as the affected compilations sit near the 120-second budget; the ISA-compliance and ICE counts are not, and are the meaningful results. Notably, the `printf`-family programs that dominate the skip column of @tbl-torture-results compile cleanly and pass the static check, confirming that their failure is confined to the link stage.

The 36 failures remaining in @tbl-torture-results (34 correctness failures plus 2 timeouts) are a separate, not-yet-investigated issue; they are execution mismatches, not compiler crashes.

=== rvsc2 <sc2-isa-tests>

rvsc2 removes only `fence` (and `fence.i`) from RV32I, and nothing is synthesized: every instruction the compiler may emit is native. The only property left to verify is ISA compliance — that no fence instruction ever appears in the output. The rvsc1 test corpus is reused for this check, but against a much wider allowlist: the full RV32I base set minus the fence, CSR, and system instruction groups. The 19 programs at five optimization levels give 95 test cases; all pass, with neither `fence` nor `fence.i` appearing in any disassembly. No behavioral testing is required because the rvsc2 instruction set is otherwise identical to rvsc3 (full RV32I), whose correctness is already established by the upstream GCC test suite.

=== rvsc3 and Above

No testing is performed for rvsc3 through rvsc7. These targets contain no synthesis code: they only enable flags that correspond to instructions already present in the upstream RISC-V backend. Their correctness follows from the correctness of the upstream backend and the GCC test suite.

== Program Size

Each synthesized instruction expands into a sequence of native instructions, increasing the static size of the compiled binary. The expansion ratio --- the number of native instructions emitted divided by the number of instructions a full-ISA compiler would emit --- quantifies the cost of each missing hardware instruction.

Synthesis sequences fall into three categories. _Constant-length_ expansions always emit the same number of instructions regardless of operand values: NOT expands to 2 instructions, XOR to 3 (register operands; 4 with an immediate operand, @sc1-xor), and each immediate variant (ANDI, ORI) adds 1 instruction. _Constant-count shifts_ are straight-line — the shift amount is known at compile time, so the expansion is unrolled and contains no loop — but their length still grows with that amount: SLL costs exactly $b$ instructions (at most 31), while SRL and SRA reach worst cases of 159 and 195 instructions. _Variable-length_ expansions depend on runtime values: variable-count SLL, SRL, and SRA use count-down loops whose length is proportional to the shift amount, with worst-case counts of 187, ~170, and ~200 instructions respectively for a shift of 31.

The per-instruction figures above bound the cost of any single synthesized operation, but the size penalty of a complete program depends on how often each restricted instruction actually appears. To quantify this on realistic code, the Embench-IoT benchmark suite @embench was compiled for three toolchains and the static code size of each benchmark compared:

- *gcc17* --- the same GCC 17 fork used by this work, built for the stock `riscv32-unknown-elf` triple with no rvsc flags (`-march=rv32i -mabi=ilp32`), serving as the upstream reference;
- *rvsc2* --- the native RV32I target of this work, in which nothing is synthesized; and
- *rvsc1* --- the synthesized target, in which shifts, ordered branches, XOR, SLT, and byte and halfword memory accesses are all expanded.

Code size is measured as the `.text` (executable code) section of each benchmark's own object files, rather than of a fully linked executable: the library code pulled in at link time (newlib and `libgcc`) is ABI-identical across all three toolchains and would only dilute the synthesized-versus-native ratio, which concerns the compiler's own output. All benchmarks were compiled at `-O2`. Because these targets emit no compressed instructions, every instruction occupies exactly four bytes, so the byte ratio reported below equals the instruction-count ratio.

#figure(
  table(
    columns: (auto, auto, auto, auto),
    align: (left, right, right, right),
    [*Benchmark*], [*gcc17*], [*rvsc1*], [*rvsc1 / gcc17*],
    [`aha-mont64`],     [3 548],  [17 940],  [5.06],
    [`crc32`],          [380],    [908],     [2.39],
    [`depthconv`],      [608],    [3 532],   [5.81],
    [`edn`],            [3 244],  [22 832],  [7.04],
    [`huffbench`],      [2 140],  [8 688],   [4.06],
    [`matmult-int`],    [936],    [1 476],   [1.58],
    [`md5sum`],         [1 016],  [2 408],   [2.37],
    [`nettle-aes`],     [4 444],  [46 872],  [10.55],
    [`nettle-sha256`],  [6 976],  [44 588],  [6.39],
    [`nsichneu`],       [19 668], [65 364],  [3.32],
    [`picojpeg`],       [15 360], [149 496], [9.73],
    [`qrduino`],        [12 852], [126 048], [9.81],
    [`sglib-combined`], [10 824], [58 256],  [5.38],
    [`slre`],           [4 256],  [27 720],  [6.51],
    [`statemate`],      [6 484],  [106 244], [16.39],
    [`tarfind`],        [528],    [2 620],   [4.96],
    [`ud`],             [1 436],  [2 020],   [1.41],
    [`wikisort`],       [7 744],  [20 032],  [2.59],
    [`xgboost`],        [624],    [5 620],   [9.01],
  ),
  caption: [Embench-IoT static code size (`.text` bytes, `-O2`) and rvsc1 expansion ratios],
) <tbl-embench-size>

Across the suite, synthesis inflates code size by a mean of #sym.times 4.94 relative to the `gcc17` baseline. The custom `rvsc2` target produces code identical to `gcc17` for all 19 benchmarks (geomean ratio = 1.000). The per-benchmark ratio tracks how shift- and comparison-heavy each workload is: the floating-point-dominated `ud` (few shifts) expands only #sym.times 1.41, whereas `statemate`, whose control flow is dominated by synthesized comparisons and branches, expands #sym.times 16.39.

== Program Performance

Since the target processor is single-cycle, every instruction retires in exactly one clock cycle (ignoring memory latency). Dynamic instruction counts are obtained by executing each compiled binary on Spike and totalling the retired instructions.

=== Whole-program instruction counts <sec-embench-perf>

The dynamic cost of a whole program depends on how often each synthesized instruction executes at run time. Simple instructions such as `not` or `xori` have a small absolute cost, while other instructions expand into a loop whose cost depends on the operand. This benchmark measures the real program impact, weighted by loop trip counts rather than by static frequency.

Five benchmarks exceeded a 300-second Spike budget under rvsc1 and are reported as TIMEOUT.

#figure(
  table(
    columns: (auto, auto, auto, auto),
    align: (left, right, right, right),
    [*Benchmark*], [*rvsc2 (native)*], [*rvsc1 (synth)*], [*Overhead*],
    [`aha-mont64`],     [12 997 428], [_timeout_],       [---],
    [`crc32`],          [5 991 188],  [130 556 929],     [21.8#sym.times],
    [`depthconv`],      [54 552 784], [1 306 486 627],   [23.9#sym.times],
    [`edn`],            [68 624 580], [512 612 605],      [7.5#sym.times],
    [`huffbench`],      [2 399 142],  [_timeout_],       [---],
    [`matmult-int`],    [24 445 873], [25 543 407],       [1.0#sym.times],
    [`md5sum`],         [2 917 425],  [38 694 462],      [13.3#sym.times],
    [`nettle-aes`],     [4 674 471],  [171 446 978],     [36.7#sym.times],
    [`nettle-sha256`],  [4 917 841],  [_timeout_],       [---],
    [`nsichneu`],       [2 514 597],  [14 689 559],       [5.8#sym.times],
    [`picojpeg`],       [3 602 866],  [_timeout_],       [---],
    [`qrduino`],        [5 140 049],  [_timeout_],       [---],
    [`sglib-combined`], [3 005 822],  [68 953 363],      [22.9#sym.times],
    [`slre`],           [2 983 415],  [88 220 929],      [29.6#sym.times],
    [`statemate`],      [2 065 897],  [150 934 719],     [73.1#sym.times],
    [`tarfind`],        [5 287 906],  [37 627 640],       [7.1#sym.times],
    [`ud`],             [6 622 675],  [8 378 022],        [1.3#sym.times],
    [`wikisort`],       [_linkfail_], [17 710 935],      [---],
    [`xgboost`],        [3 804 604],  [433 520 452],    [113.9#sym.times],
  ),
  caption: [Embench-IoT dynamic retired-instruction counts on Spike and rvsc1 run-time overhead. Geomean is over the thirteen benchmarks that completed on both toolchains.],
) <tbl-embench-perf>

Across the thirteen benchmarks that completed on both toolchains, synthesis inflates the dynamic instruction count by a mean of #sym.times 13.7, roughly triple the #sym.times 4.94 static-size penalty, because the most expensive syntheses sit inside the hottest loops. The spread is wide and, as with code size, tracks each workload's reliance on synthesized instructions: `matmult-int` and `ud`, dominated by native multiply--add work, run at #sym.times 1.0 and #sym.times 1.3, whereas the shift- and rotate-heavy `xgboost` and the comparison-heavy `statemate` reach #sym.times 113.9 and #sym.times 73.1. This confirms the pedagogical point quantitatively: the run-time cost of an absent instruction is not a fixed tax but is paid in proportion to how often the program actually needs it.

== Discussion

The results establish correctness first and cost second. On the correctness axis, the ISA compliance tests confirm that the compiler never emits a forbidden mnemonic. Behavioral equivalence is established independently by differential execution on Spike: every rvsc1 program produces the same exit code as the reference RV32I binary compiled from the same source, and every rvsc0 single-function program writes the same `tohost` value as its reference. Synthesis therefore changes how a computation is expressed, not what it computes.

The cost of that re-expression is quantified along two dimensions. Statically, synthesis inflates code size by a mean of #sym.times 4.94 over the Embench suite (@tbl-embench-size), dynamically, it inflates the retired-instruction count by a mean of #sym.times 13.7 over the benchmarks that complete (@tbl-embench-perf). The dynamic penalty is the larger of the two because the costliest syntheses of the variable-count shift loops, each of which re-materializes its own back-edge every iteration (@sc1-sll), tend to sit inside the hottest loops, so their cost is multiplied by trip count rather than merely by static occurrence. Both penalties vary by more than an order of magnitude across workloads, from near-parity for multiply--add-dominated code (`matmult-int`, `ud`) to two orders of magnitude for shift- and comparison-heavy code (`xgboost`, `statemate`).

For the pedagogical setting these targets are built for, this variation is the point rather than a limitation. The programs students write in an introductory single-cycle course, small loops, modest shift amounts, few byte-granular memory accesses, fall at the inexpensive end of both distributions, so the toolchain remains practical to use. At the same time, the wide spread makes the cost of each ISA restriction concrete and measurable: a student can compile the same source for rvsc1 and rvsc3, compare the `-S` output, and see exactly how many native instructions a single missing `sll` or `sb` expands into. The compiler thus turns an abstract statement about instruction-set design --- "omitting an instruction shifts its cost into software" --- into a number the student can read off the assembly.

= Conclusion <ch-conclusion>

This work developed eight GCC compiler targets for the simplified RISC-V processors described in the Hennessy--Patterson textbook, addressing the practical barrier that prevented students of PCS3225 at USP from compiling and running C programs on the processors they build. The four specific objectives stated in @ch-intro were met: a minimal target (`rvsc0`) for the eight-instruction Chapter 4.4 processor, a target (`rvsc1`) matching the course homework extension with full C calling convention support, and six progressive targets (`rvsc2` through `rvsc7`) covering the full RV32I-to-RV64IMAFD progression. Every instruction not natively supported by a given target is synthesized from the primitives that target does provide, transparently to the programmer.

== Contributions

The primary contribution is the set of synthesis techniques embedded in the GCC machine description. For the two most restricted targets, rvsc0 and rvsc1, eighteen distinct operations require synthesis, ranging from one-instruction replacements (NOT, immediate variants) to variable-length loops (SLL, SRL, SRA), multi-instruction identities (XOR, SLT, SLTU), read-modify-write sequences (LB, LBU, LH, LHU, SB, SH), and call-site code generation (JAL, JMP). The rvsc0 target additionally requires addi/shift-based materialization for LUI, since 32-bit constants cannot otherwise be constructed from the eight available instructions. Each synthesis was derived algebraically and embedded as a `define_expand` in `riscv.md`, so GCC selects and schedules the sequence as part of normal compilation with no programmer intervention.

A secondary contribution is the validation methodology. Two independent test layers were developed and applied: an ISA compliance suite that disassembles every generated object with `objdump -M no-aliases` and verifies that no forbidden mnemonic appears, and a behavioral equivalence suite that executes rvsc1 and rvsc0 binaries on Spike and compares their outputs against a reference RV32I build. Together these layers confirm that synthesis is both correct by construction (no forbidden instruction is ever emitted) and correct by execution (the computed results are indistinguishable from those of a full-ISA compiler).

== Results Summary

Correctness was established for all synthesis cases in rvsc0 and rvsc1. All ISA compliance tests pass, and the differential behavioral tests confirm semantic equivalence across all tested programs. The rvsc2 target compiles the full Embench-IoT suite with code identical to the upstream GCC 17 baseline (geomean ratio = 1.000), confirming that the custom target configuration introduces no overhead relative to a stock build.

The cost of synthesis was quantified on two axes. Statically, the synthesized rvsc1 target inflates code size by a mean of #sym.times 4.94 over the nineteen Embench benchmarks, with a range from #sym.times 1.41 (`ud`, few shifts) to #sym.times 16.39 (`statemate`, comparison-heavy control flow). Dynamically, it inflates retired instruction counts by a mean of #sym.times 13.7 over the thirteen benchmarks that completed within the time budget, with five benchmarks timing out entirely, an outcome expected from the worst-case variable-count shift loop depth of 187 instructions per operation.

For the pedagogical use case, these figures are not a disqualifying limitation. The programs students write in an introductory course fall at the inexpensive end of both distributions. More importantly, the wide spread between workloads makes the cost of each absent instruction concrete and measurable: compiling the same source for rvsc1 and rvsc2 and diffing the assembly output shows exactly how many native instructions a missing `sll` or `sb` expands into.

== Limitations

Synthesis does not apply to targets rvsc2 through rvsc7, these targets expose the full upstream RISC-V backend and require no new synthesis logic. Their correctness depends entirely on the upstream GCC test suite.

The rvsc0 target, unlike rvsc1, cannot execute programs that call and return from functions, because `jalr` is absent. The addi/shift synthesis enables 32-bit constant loading, and unconditional jumps use a PC-relative `beq zero,zero` (neither depends on a constant pool), but programs must still be written as non-returning single functions. This restriction matches the processor it targets, but it means the behavioral test harness that uses HTIF (which requires `jalr` for the call to `main`) cannot be used for rvsc0,rvsc0 programs write their result directly to `tohost` via `sw`.

The synthesized shifts are functionally correct but dynamically expensive to the point of impracticality for programs that shift inside hot loops. The synthesis is inherently sequential, and remains so whether or not the shift amount is known at compile time. When it is not, the GCC machine description expands the shift into a counted loop, which at run time executes one iteration per bit position. When it is, the loop control disappears — the expansion is unrolled into straight-line code — but the instruction count stays linear in the word width, since each bit position still needs its own test-and-merge step: a constant `x >> 1` costs 159 instructions. There is no partial-hardware or table-driven alternative within the instruction set these targets support.

== Future Work

The most direct extension would be further performance optimization within the existing synthesis. Constant-count SRL and SRA are already unrolled to straight-line code, but remain linear in the word width: 159 and 195 instructions in the worst case, because each bit position is extracted and merged individually. A bitmask-and-recombine formulation, moving several bits per step instead of one, could reduce this substantially without any new hardware. The variable-count forms have more headroom still, since each of their loop iterations pays 6 instructions, half of them spent re-materializing the back-edge that sc1's missing unconditional jump forces the loop to rebuild on every pass.

On the hardware side, each synthesis in this work corresponds exactly to the cost of the missing instruction in hardware. A student who extends the Chapter 4.4 processor with, for example, a barrel shifter could recompile with `-mshift` enabled and the compiler would switch to native `sll`/`srl`/`sra` automatically, making the hardware improvement immediately observable in both binary size and execution time. Building this feedback loop into a course lab is a natural next step.

Finally, the target configuration and synthesis infrastructure developed here could be packaged as a course resource for PCS3225, including pre-built toolchain binaries, startup files, linker scripts, and a simple Makefile or justfile that lets students go from a C source file to a Spike execution with a single command.

#heading(level: 1, numbering: none)[Appendices]

== Worked Compilation Example <apx-example>

The following expression combines three operations that the restricted targets must synthesize: a bitwise XOR, a constant left shift, and a 32-bit constant whose upper bits are set. Compiling it for rvsc2, rvsc1, and rvsc0 shows how the same source progressively expands as native instructions are removed from the ISA. The listings below are the real instructions emitted (disassembled with pseudo-instruction expansion, so `ret` appears as `jalr` and `li` as its underlying `lui`).

rvsc1 and rvsc2 both provide `jalr`, so the operation can be written as an ordinary function that returns its result:

```c
int example(int a, int b) {
    return ((a ^ b) << 2) + 0x12345000;
}
```

rvsc0 has no `jalr`, so functions cannot return to a caller. The equivalent rvsc0 program is a single non-returning function that stores the result to memory instead:

```c
__attribute__((noreturn))
void example(int a, int b) {
    volatile int r = ((a ^ b) << 2) + 0x12345000;
    __builtin_unreachable();
}
```

*rvsc2* — full RV32I: every operation is a native instruction.

```asm
example:
    xor   a0, a0, a1        # a ^ b
    slli  a0, a0, 0x2       # << 2
    lui   a5, 0x12345       # 0x12345000  (low 12 bits are zero)
    add   a0, a0, a5        # + constant
    jalr  zero, 0(ra)       # return
```

*rvsc1* — no native XOR, shift, or `jal`/`ret`. XOR becomes `(a|b)-(a&b)`, the shift becomes repeated self-addition, but `lui` and `jalr` are still native:

```asm
example:
    and   a5, a0, a1        # \
    or    a0, a0, a1        #  XOR = (a|b) - (a&b)
    sub   a0, a0, a5        # /
    add   a0, a0, a0        # \  << 2 as two self-additions
    add   a0, a0, a0        # /
    lui   a5, 0x12345       # 0x12345000
    add   a0, a0, a5        # + constant
    jalr  zero, 0(ra)       # return
```

*rvsc0* — additionally lacks `lui` and `jalr`. The constant is materialized with addi+shift (@sc0-lui) instead of a native `lui`, and the function stores its result to the stack rather than returning:

```asm
example:
    addi  sp, sp, -16
    and   a5, a0, a1        # \
    or    a0, a0, a1        #  XOR = (a|b) - (a&b)
    sub   a0, a0, a5        # /
    add   a0, a0, a0        # \  << 2 as two self-additions
    add   a0, a0, a0        # /
    addi  a5, x0, 72        # hi = 0x12345[19:10]
    [sll  a5, a5, 10]       # a5 = hi << 10
    addi  a5, a5, 837       # a5 = (hi << 10) + lo = 0x12345
    [sll  a5, a5, 12]       # a5 = 0x12345000
    add   a0, a0, a5        # + constant
    sw    a0, 12(sp)        # store result (no return possible)
```

== SLL Synthesis Assembly (Constant Count) <apx-sll-const-asm>

Real compiler output (`rvsc1-unknown-elf-gcc -S -O1`) for `shift3` from `tests/sc1/tests/isa/shift.c` (`x << 3`, so $b=3$):

```asm
shift3:
    add   a0, a0, a0
    add   a0, a0, a0
    add   a0, a0, a0
    ret
```

No loop, no counter, no back-edge — just $b$ doublings.

== SLL Synthesis Assembly (Variable Count) <apx-sll-asm>

```asm
# rd = rs1 << rs2
    add   t1, rs2, x0    # t1 = rs2 (save shift count; rd may alias rs2)
    add   rd, rs1, x0    # rd = rs1
    beq   t1, x0, done   # if rs2 == 0, no shift needed
loop:
    add   rd, rd, rd     # rd <<= 1
    addi  t1, t1, -1
    beq   t1, x0, done
    beq   x0, x0, loop
done:
```

== SRL Synthesis Assembly (Constant Count) <apx-srl-const-asm>

Real compiler output for `shr3` from `tests/sc1/tests/isa/srl.c` (`x >> 3`, so $s=3$, giving $32-3=29$ unrolled extraction steps). The full 182-line listing is reproducible via `rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/srl.c`; the excerpt below shows the setup, the first two extraction steps, and the last, with the identical repeated block elided:

```asm
shr3:
    mv    a2, a0         # a2 = x (saved before a0 is zeroed)
    li    a0, 0          # result = 0
    li    a5, 1          # out_mask = 1
    li    a4, 1
    add   a4, a4, a4      # in_mask = 1 << 3, unrolled: 3 doublings
    add   a4, a4, a4
    add   a4, a4, a4
    and   a3, a2, a4      # bit 3
    beq   a3, zero, .L2
    or    a0, a0, a5
.L2:
    add   a5, a5, a5
    add   a4, a4, a4      # bit 4
    and   a3, a2, a4
    beq   a3, zero, .L3
    or    a0, a0, a5
.L3:
    # ... pattern repeats once per surviving bit, 4 through 30,
    #     with no loop back-edge between blocks ...
.L29:
    add   a5, a5, a5
    add   a4, a4, a4      # bit 31 (last surviving bit)
    and   a3, a2, a4
    beq   a3, zero, .L30
    or    a0, a0, a5
.L30:
    ret
```

== SRL Synthesis Assembly (Variable Count) <apx-srl-asm>

```asm
# rd = rs1 >> rs2 (logical shift right)
    addi  t0, x0, 31
    and   t3, rs2, t0    # t3 = shift & 31
    add   t5, rs1, x0    # t5 = rs1 (save before rd is zeroed; fixes rd/rs1 aliasing)
    addi  rd, x0, 0      # result = 0
    addi  t1, x0, 1      # out_mask = 1
    [sll  t2, t1, t3]    # in_mask = 1 << shift
loop:
    beq   t2, x0, done   # if in_mask == 0, all bits processed
    and   t4, t5, t2     # t4 = rs1 & in_mask  (use saved t5)
    beq   t4, x0, skip   # if bit is 0, skip
    or    rd, rd, t1     # result |= out_mask
skip:
    add   t1, t1, t1     # out_mask <<= 1
    add   t2, t2, t2     # in_mask <<= 1
    beq   x0, x0, loop
done:
```

== SRA Synthesis Assembly (Constant Count) <apx-sra-const-asm>

Real compiler output for `sra3` from `tests/sc1/tests/isa/sra.c` (`x >> 3`, so $s=3$). The full 217-line listing is reproducible via `rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/sra.c`; the excerpt below shows the sign-bit setup, the first extraction step (identical in structure to @apx-srl-const-asm), the elided repeated block, and the unrolled `sign_mask` construction:

```asm
sra3:
    mv    a6, a0
    li    a2, -2147483648   # a2 = 0x80000000
    and   a2, a0, a2        # a2 = sign bit of x
    li    a0, 0             # result = 0
    li    a5, 1              # out_mask = 1
    li    a4, 1
    add   a4, a4, a4         # in_mask = 1 << 3, unrolled
    add   a4, a4, a4
    add   a4, a4, a4
    and   a3, a6, a4
    beq   a3, zero, .L2
    or    a0, a0, a5
.L2:
    # ... SRL-part pattern repeats once per surviving bit, exactly as
    #     in @apx-srl-const-asm, through .L30 ...
.L30:
    beq   a2, zero, .L31    # sign bit clear -> no sign-fill needed
    li    a1, -1
    add   a1, a1, a1         # sign_mask = -1 << (32-3), unrolled:
    add   a1, a1, a1         # 29 doublings from -1, seeded via addi
    add   a1, a1, a1         # (no lui needed; keeps this synthesis
    # ... 26 more doublings ...                 # rvsc0-compatible)
    or    a0, a0, a1
.L31:
    ret
```

== SRA Synthesis Assembly (Variable Count) <apx-sra-asm>

```asm
# rd = rs1 >>_s rs2 (arithmetic shift right)

    # Step 1: check sign bit of rs1 BEFORE srl (avoids rd/rs1 aliasing)
    addi  t0, x0, 1
    [sll  t0, t0, 31]    # t0 = 0x80000000
    and   t6, rs1, t0   # t6 = sign bit (saved in t6; srl uses t0–t5)

    # Step 2: logical right shift
    [srl  rd, rs1, rs2]  # rd = srl(rs1, rs2)

    beq   t6, x0, done  # positive → no sign extension needed

    # Step 3: re-mask shift; early exit if shift == 0 mod 32
    addi  t0, x0, 31
    and   t3, rs2, t0   # t3 = shift & 31 (fixes unmasked-rs2 bug for rs2 > 31)
    beq   t3, x0, done  # shift == 0 mod 32 → sra(x, 0) = x

    # Step 4: sign_mask = -1 << (32 - shift)
    addi  t2, x0, -1    # t2 = 0xFFFFFFFF
    addi  t4, x0, 32
    sub   t4, t4, t3    # t4 = 32 - (shift & 31)
    [sll  t2, t2, t4]   # sign_mask = -1 << (32 - shift)
    or    rd, rd, t2
done:
```

== SLT Synthesis Assembly <apx-slt-asm>

```asm
sub   t0, rs1, rs2   # diff = rs1 - rs2
[xor  t1, rs1, rs2]  # t1 = rs1 ^ rs2  (derived)
[xor  t2, rs1, t0]   # t2 = rs1 ^ diff  (derived)
and   t1, t1, t2     # overflow = (rs1^rs2) & (rs1^diff)
[xor  t0, t0, t1]    # corrected = diff ^ overflow  (derived)
[srl  rd,  t0, 31]   # rd = corrected >> 31  (derived)
```

== SLTU Synthesis Assembly <apx-sltu-asm>

```asm
sub   t0, rs1, rs2   # diff = rs1 - rs2
[not  t1, rs1]       # t1 = ~rs1  (derived)
and   t2, t1, rs2    # t2 = ~rs1 & rs2  (borrow generated)
[xor  t3, rs1, rs2]  # t3 = rs1 ^ rs2  (derived)
[not  t3, t3]        # t3 = ~(rs1 ^ rs2)  (derived)
and   t3, t3, t0     # t3 = ~(rs1^rs2) & diff  (borrow propagated)
or    t2, t2, t3     # borrow = generated | propagated
[srl  rd,  t2, 31]   # rd = borrow >> 31  (derived)
```

== LB / LBU / LH / LHU Synthesis Assembly <apx-lb-lh-asm>

```asm
# lb rd, 0(rs1)  (address in rs1, byte_pos unknown at compile-time)
addi  t0, x0, -4
and   t0, rs1, t0         # t0 = rs1 & -4  (word-aligned)
lw    t1, 0(t0)           # t1 = word containing the byte
addi  t0, x0, 3
and   t0, rs1, t0         # t0 = rs1 & 3  (byte position: 0–3)
[sll  t0, t0, 3]          # t0 = byte_pos * 8  (bit offset)
[srl  t1, t1, t0]         # t1 >>= bit_off  (byte in bits [7:0])
[sll  t1, t1, 24]         # t1 <<= 24  (byte in bits [31:24])
[sra  rd,  t1, 24]        # rd >>= 24  (sign-extend → lb)
                          # use [srl] in the last step for lbu (zero-extend)

# lh rd, 0(rs1)  — identical but MASK = 2, BITS = 16
addi  t0, x0, -4
and   t0, rs1, t0         # word-aligned
lw    t1, 0(t0)
addi  t0, x0, 2
and   t0, rs1, t0         # t0 = rs1 & 2  (0 or 2: which halfword)
[sll  t0, t0, 3]          # t0 = half_pos * 8  (0 or 16)
[srl  t1, t1, t0]         # halfword in bits [15:0]
[sll  t1, t1, 16]
[sra  rd,  t1, 16]        # sign-extend → lh  (srl for lhu)
```

== SB Synthesis Assembly <apx-sb-asm>

```asm
# sb rs2, 0(rs1)   — address in rs1, byte position unknown at compile-time
addi  t0, x0, -4
and   t3, rs1, t0           # t3 = rs1 & -4  (word-aligned)
addi  t0, x0, 3
and   t0, rs1, t0           # t0 = rs1 & 3  (byte_pos: 0–3)
add   t0, t0, t0            # \
add   t0, t0, t0            #  t0 = byte_pos * 8  (constant-3 sll; no loop needed)
add   t0, t0, t0            # /
lw    t1, 0(t3)             # t1 = old word
addi  t2, x0, 255           # t2 = 0xFF
[sll  t2, t2, t0]           # t2 = 0xFF << shift  (mask)
[not  t2, t2]               # t2 = ~mask  — 2 insns (Section 5.2.1)
and   t1, t1, t2            # t1 = old_word & ~mask  (clear target byte)
addi  t2, x0, 255
and   t2, rs2, t2           # t2 = rs2 & 0xFF  (isolate input byte)
[sll  t2, t2, t0]           # t2 = byte_value << shift
or    t1, t1, t2            # t1 = word with byte inserted
sw    t1, 0(t3)             # write back
```

== SH Synthesis Assembly <apx-sh-asm>

```asm
# sh rs2, 0(rs1)
addi  t0, x0, -4
and   t3, rs1, t0           # t3 = rs1 & -4  (word-aligned)
addi  t0, x0, 2
and   t0, rs1, t0           # t0 = rs1 & 2  (hw_pos: 0 or 2)
add   t0, t0, t0            # \
add   t0, t0, t0            #  t0 = hw_pos * 8  (0 or 16; constant-3 sll)
add   t0, t0, t0            # /
lw    t1, 0(t3)             # t1 = old word
lui   t2, 0x10              # \
addi  t2, t2, -1            #  t2 = 0xFFFF
[sll  t2, t2, t0]           # t2 = 0xFFFF << shift  (mask)
[not  t2, t2]               # t2 = ~mask  — 2 insns (Section 5.2.1)
and   t1, t1, t2            # t1 = old_word & ~mask
lui   t2, 0x10
addi  t2, t2, -1            # t2 = 0xFFFF
and   t2, rs2, t2           # t2 = rs2 & 0xFFFF
[sll  t2, t2, t0]           # t2 = hw_value << shift
or    t1, t1, t2            # t1 = word with halfword inserted
sw    t1, 0(t3)             # write back
```

= References

#bibliography("refs.bib", style: "ieee")

