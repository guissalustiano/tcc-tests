#let instituicao = [Universidade de São Paulo \ Escola Politécnica]
#let autor = "Guilherme Stabach Salustiano"
#let titulo = "GCC target for educational RISC-V processor"
#let local = "São Paulo"
#let data = "2026"
#let orientador = "Bruno de Carvalho Albertini"
#let programa = [Departamento de Engenharia de Computação e Sistemas Digitais (PCS)]

// Front matter (cover, ficha catalográfica, folha de aprovação, dedicatória) is
// in Portuguese; the body is in English.  The language is switched per section
// below so that hyphenation follows the language actually being typeset.
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
#set text(font: "Liberation Sans", size: 12pt)
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
        #h(0.5cm) 1. GCC 2. RISC-V 3. Compiladores 4. Processadores educacionais
        I. Universidade de São Paulo. Escola Politécnica. Departamento de Engenharia de Computação e Sistemas Digitais II. t.
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
    Para que servem tantos códigos, se a vida não é programada e as melhores coisas não têm lógica.
  ]
]

// --- Acknowledgements ---
#heading(level: 1, numbering: none, outlined: false)[Acknowledgements]

#set text(lang: "en")

// Personal thanks are deliberately generic below; add names as you see fit.
I thank my advisor, Prof. Bruno de Carvalho Albertini, for proposing a problem that sits exactly on the boundary between the hardware a student builds and the software a student writes, and for the guidance and the freedom that let it grow into this work.

I thank the Department of Computer and Digital Systems Engineering (PCS) of the Escola Politécnica at the University of São Paulo, and in particular the teaching staff and the students of PCS3225 --- Digital Systems 2. That course is both the reason these compiler targets exist and the setting they were built for.

This work rests on a great deal of freely available engineering. The GCC developers, whose machine description framework turns instruction synthesis into a matter of declaring patterns rather than of writing a compiler from scratch; the maintainers of the upstream RISC-V backend, on which all eight targets are built; and the authors of Spike, GNU Binutils, newlib and Embench-IoT, without which none of the validation reported in #chref(<ch-results>) would have been possible.

Finally, I thank my family and my friends, for their support and their patience through the stretches when this work had all of my attention.

// --- Resumo ---
#heading(level: 1, numbering: none, outlined: false)[Resumo]

#set text(lang: "pt", region: "BR")

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
desmontagem de cada objeto compilado --- e, no rvsc1, também de cada executável ligado --- e
checagem de cada mnemônico contra uma lista de permissão
por alvo; a equivalência comportamental é verificada executando no Spike programas de teste
autovalidantes, que conferem cada resultado contra valores calculados independentemente no próprio
programa e sinalizam a primeira asserção violada por um código de saída distinto. Adicionalmente,
o rvsc1 é validado contra a suíte de testes de tortura do GCC, cujos 1 684 programas são compilados e
executados em cinco níveis de otimização: todas as 8 345 combinações que este alvo _freestanding_
consegue compilar e ligar terminam corretamente.

O resultado é uma toolchain funcional que permite a estudantes compilar programas C arbitrários e
executá-los no processador que projetaram, fechando o ciclo pedagógico entre a implementação de
hardware e a abstração de software.

*Palavras-chave*: GCC. RISC-V. Compilador. Processador educacional.

// --- Abstract ---
#heading(level: 1, numbering: none, outlined: false)[Abstract]

#set text(lang: "en")

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
every compiled object --- and, for rvsc1, every linked executable --- and checking every mnemonic
against a per-target allowlist; behavioral
equivalence is verified by executing self-validating test programs on Spike, each of which checks
its computed results against values derived independently within the same program and signals the
first violated assertion through a distinct exit code.
Additionally, rvsc1 is validated against the GCC compiler torture test suite, whose 1 684 programs are
compiled and executed at five optimization levels: all 8 345 combinations this freestanding target can
compile and link terminate correctly.

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

To the best of the author's knowledge, no prior work addresses C compilation for intentionally restricted pedagogical RISC-V subsets. GCC's machine description framework @gcc-internals makes it possible to define a backend that synthesizes missing instructions transparently from the primitives the hardware does support. Applying this mechanism to pedagogical ISAs that deliberately omit standard instructions appears to be novel.

The ability to run a self-written C program on a processor the student designed and built closes a pedagogical loop that rarely closes in undergraduate education. Most courses treat hardware and software as adjacent subjects that never directly intersect. This work creates a complete vertical slice from C source to register-level execution on student hardware. Students can compile a function, inspect the output, and observe concretely how the compiler synthesizes a shift operation from repeated additions, or a signed comparison from subtraction and bit manipulation, making the cost of each ISA restriction tangible rather than abstract.

Furthermore, students interact with GCC, the dominant open-source compiler for embedded and systems software, rather than a pedagogical toy. The flags, ABI conventions, ELF output, and linker scripts they encounter are identical to those used in professional and research settings, giving the exercise relevance beyond the course itself.

== Document Organization

The remainder of this monograph is organized as follows. #chref(<ch-related-work>) surveys related work, in instruction synthesis for embedded compiler backends and in tools for instruction-set-level computing education. #chref(<ch-background>) presents the conceptual background: the RISC-V instruction set, the single-cycle datapath of the Hennessy-Patterson educational processor, the C calling convention the targets must honour, and the structure of a GCC backend. #chref(<ch-method>) describes the development method, including the derivation cycle applied to each synthesized instruction and the validation approach. #chref(<ch-requirements>) specifies the requirements for each of the eight targets, defining the allowed instruction sets and the synthesis obligations imposed on the compiler. #chref(<ch-development>) details the implementation: a correctness argument and an instruction sequence for every synthesis, the machine-description and per-target configuration that make them transparent to the programmer, and the limitations that remain. #chref(<ch-results>) reports the three test layers, quantifies the static and dynamic cost of synthesis on the Embench-IoT suite, and discusses what the measurements do and do not establish. #chref(<ch-conclusion>) presents the conclusions, contributions, and directions for future work. The appendices collect the compiler output that the synthesis sections refer to, including a worked compilation example across rvsc0, rvsc1 and rvsc2.


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

ISA compliance is verified structurally by disassembling the compiled output and checking every mnemonic against a per-target allowlist. The check is applied at two scopes, because they support two different claims: to every object the compiler produces, which is what bounds the compiler's own behaviour, and to the fully linked executable, which additionally covers the runtime libraries the program is linked against and which the compiler never sees.

Behavioral equivalence is verified by execution: each test is a self-validating C program that exercises one operation category and compares every computed result against a value established independently within the same program, either a constant worked out by hand or an algebraic identity assembled from other operations. The program is compiled by the custom target and executed on the Spike ISA simulator @spike; it returns 0 when every assertion holds and a distinct nonzero code identifying the first failure otherwise, so the test passes when the simulator exits with code 0.

A third validation layer exercises the compiler against a much larger corpus than hand-written tests can provide. The GCC test suite includes a _torture test_ mode that compiles and runs hundreds of programs at every optimization level; together with building `libgcc` itself for the custom target, it stresses constant materialization, multi-word arithmetic, and calling-convention edge cases that hand-written behavioral tests would not cover.

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

The rvsc2 target implements the full RV32I base ISA with three groups of instructions excluded. Memory ordering instructions (`fence`, and `fence.i` from Zifencei) are unnecessary on a single-core single-cycle processor: omitting them is behavior-preserving. CSR access (the Zicsr group) and the environment-call instructions `ecall` and `ebreak` require privileged or operating-system support that is absent from both the datapath and the bare-metal environment. Privileged instructions such as `sret`, `wfi` and `sfence.vma` are outside the base ISA being subset and are therefore not part of this specification at all; a processor that implements no privilege modes cannot omit them, having never offered them.

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
    columns: (auto, auto, 1fr),
    align: left,
    [*Group*], [*Instructions*], [*Treatment*],
    [Memory ordering],
      [`fence`, `fence.i`],
      [Never emitted; omitting them is behavior-preserving],
    [CSR access (Zicsr)],
      [`csrrw`, `csrrs`, `csrrc`, `csrrwi`, `csrrsi`, `csrrci`],
      [Rejected, including from inline assembly],
    [Environment call],
      [`ecall`, `ebreak`],
      [Never emitted from portable C, but not rejected],
  ),
  caption: [rvsc2 instruction treatment],
) <tbl-rvsc2-treatment>

The three treatments are not equally strong, and the distinction matters to what the target can be said to guarantee. Memory ordering is a compiler obligation: the backend is configured never to emit a fence, and portable C that would ordinarily produce one --- `__sync_synchronize`, a sequentially consistent or acquire/release atomic --- produces none. Zicsr is enforced by the toolchain as a whole rather than by the compiler alone: because the target's architecture string is `rv32i`, which does not include Zicsr, the assembler refuses a `csr` mnemonic even when a program writes one by hand in inline assembly. `ecall` and `ebreak` receive neither guarantee. They belong to the RV32I base, so the assembler accepts them from inline assembly, and `__builtin_trap` expands to `ebreak`; the requirement on them is therefore that no ordinary C program reaches them, not that the toolchain forbids them. @sc2-isa-tests tests all three.

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


The W-suffix variants operate on the low 32 bits of their operands and sign-extend the 32-bit result to 64 bits.

== rvsc5 — Single-Cycle rv64im

The rvsc5 target extends rvsc4 with the M extension, adding native integer multiply and divide:

- Multiply: `mul`, `mulw`, `mulh`, `mulhu`, `mulhsu`
- Signed divide: `div`, `divw`
- Unsigned divide: `divu`, `divuw`
- Signed remainder: `rem`, `remw`
- Unsigned remainder: `remu`, `remuw`

== rvsc6 — Single-Cycle Floating-Point

The rvsc6 target extends rvsc5 with the complete F (single-precision) and D (double-precision) floating-point extensions as defined in @riscv-spec, supporting all arithmetic, memory, conversion, and comparison instructions for both precisions.

#figure(
  table(
    columns: (auto, 1fr),
    align: left,
    [*Group*], [*Instructions*],
    [Loads and stores],
      [`flw`, `fsw` (single); `fld`, `fsd` (double)],
    [Arithmetic],
      [`fadd.s`, `fadd.d`, `fsub.s`, `fsub.d`, `fmul.s`, `fmul.d`, `fdiv.s`, `fdiv.d`, `fsqrt.s`, `fsqrt.d`],
    [Fused multiply-add],
      [`fmadd.s`, `fmadd.d`, `fmsub.s`, `fmsub.d`, `fnmadd.s`, `fnmadd.d`, `fnmsub.s`, `fnmsub.d`],
    [Sign injection],
      [`fsgnj.s`, `fsgnj.d`, `fsgnjn.s`, `fsgnjn.d`, `fsgnjx.s`, `fsgnjx.d`],
    [Minimum and maximum],
      [`fmin.s`, `fmin.d`, `fmax.s`, `fmax.d`],
    [Comparison and classification],
      [`feq.s`, `feq.d`, `flt.s`, `flt.d`, `fle.s`, `fle.d`, `fclass.s`, `fclass.d`],
    [Integer #sym.arrow.l.r FP register move],
      [`fmv.w.x`, `fmv.x.w` (single, rv32 and rv64); `fmv.d.x`, `fmv.x.d` (double, rv64)],
    [Integer #sym.arrow single],
      [`fcvt.s.w`, `fcvt.s.wu`, `fcvt.s.l`, `fcvt.s.lu`],
    [Single #sym.arrow integer],
      [`fcvt.w.s`, `fcvt.wu.s`, `fcvt.l.s`, `fcvt.lu.s`],
    [Integer #sym.arrow double],
      [`fcvt.d.w`, `fcvt.d.wu`, `fcvt.d.l`, `fcvt.d.lu`],
    [Double #sym.arrow integer],
      [`fcvt.w.d`, `fcvt.wu.d`, `fcvt.l.d`, `fcvt.lu.d`],
    [Single #sym.arrow.l.r double],
      [`fcvt.s.d`, `fcvt.d.s`],
  ),
  caption: [rvsc6 floating-point instructions added to rvsc5 (F and D extensions; conversions to and from 64-bit integers are rv64 only)],
)

== rvsc7 — Single-Cycle Atomic

The rvsc7 target extends rvsc6 with the A extension (atomic memory operations), implementing the full rv64imafd instruction set @riscv-spec. The `.w` variants operate on 32 bits (sign-extended to 64); the `.d` variants operate on 64 bits.

#figure(
  table(
    columns: (auto, 1fr),
    align: left,
    [*Instructions*], [*Operation*],
    [`lr.w`, `lr.d`],           [Load-reserved],
    [`sc.w`, `sc.d`],           [Store-conditional],
    [`amoadd.w`, `amoadd.d`],   [Atomic add],
    [`amoand.w`, `amoand.d`],   [Atomic AND],
    [`amoor.w`, `amoor.d`],     [Atomic OR],
    [`amoxor.w`, `amoxor.d`],   [Atomic XOR],
    [`amoswap.w`, `amoswap.d`], [Atomic swap],
    [`amomax.w`, `amomax.d`],   [Atomic signed maximum],
    [`amomaxu.w`, `amomaxu.d`], [Atomic unsigned maximum],
    [`amomin.w`, `amomin.d`],   [Atomic signed minimum],
    [`amominu.w`, `amominu.d`], [Atomic unsigned minimum],
  ),
  caption: [rvsc7 atomic instructions added to rvsc6 (A extension)],
)

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

=== GNU Binutils

GNU Binutils supplies the assembler and linker. Its source is used without modification: every restriction imposed by this work is enforced in the compiler, so the assembler must accept the full base ISA and needs no changes at all. What does change is the configuration. GCC's `configure` looks for an assembler and linker named after its own target triple, so a separate binutils is built and installed for each `rvscN-unknown-elf` triple before GCC itself, as described in @sec-building-binutils. The upstream `riscv32-none-elf` build is additionally used for stand-alone inspection utilities such as `objdump` on the 32-bit targets.

=== Spike 1.1.1-dev

Spike is the official RISC-V ISA reference simulator @spike. It implements the full RV64IMAFD instruction set, making it suitable as the behavioral oracle: a binary compiled by `rvsc1-unknown-elf-gcc` contains only valid RV32I instructions (the synthesis sequences are themselves valid RV32I), so Spike can execute it and report the correct result. The simulator is given a different `--isa` string depending on how the binary is run. rvsc0 binaries are bare-metal and execute under `--isa=rv32i`, exactly the ISA the target models. rvsc1 binaries run on top of the proxy kernel, and the proxy kernel itself uses CSR, atomic and fence instructions, so Spike must be widened to `--isa=rv32imac_zicsr_zifencei` for those runs. The user program still contains only sc1 instructions, but that is a property the simulator no longer checks, which is why it is established statically instead (@sc1-linked-isa). `--log-commits` counts retired instructions for the performance measurements.

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

=== Building Binutils <sec-building-binutils>

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
    --disable-binutils \
    --disable-ld \
    --disable-gas

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

*Proof.* Claim: $a xor b = (a | b) - (a thin \& thin b)$ for all 32-bit words $a, b$, where $xor$, $|$ and $\&$ denote the bitwise operations and the subtraction is ordinary two's-complement subtraction.

Fix a bit position $i$ and write $x = a_i, y = b_i in {0, 1}$. Case analysis over the four combinations of $x, y$:

#figure(
  table(
    columns: 5,
    align: center,
    [$a_i$], [$b_i$], [$(a | b)_i$], [$(a thin \& thin b)_i$], [$(a | b)_i - (a thin \& thin b)_i$],
    [0], [0], [0], [0], [0],
    [0], [1], [1], [0], [1],
    [1], [0], [1], [0], [1],
    [1], [1], [1], [1], [0],
  ),
  caption: [Truth table establishing $(a | b) - (a thin \& thin b) = a xor b$ bitwise],
)

The last column matches $a xor b$ in every row, so the identity holds per bit. Moreover $(a thin \& thin b)_i = 1$ implies $(a | b)_i = 1$ in every row: the 1-bits of $a thin \& thin b$ are always a subset of the 1-bits of $a | b$. Consequently the per-bit subtraction $(a | b)_i - (a thin \& thin b)_i$ never needs to borrow from a neighboring bit position: interpreting $a | b$ and $a thin \& thin b$ as 32-bit binary numbers, the ordinary two's-complement subtraction `sub rd, ab_ior, ab_and` computes exactly the bitwise difference shown above, with no cross-bit borrow propagation. Hence the instruction-level subtraction yields $a xor b$ exactly, for every $a, b$. $square$

```asm
and  t0, rs1, rs2   # t0 = rs1 & rs2
or   rd, rs1, rs2   # rd = rs1 | rs2
sub  rd, rd, t0     # rd = (rs1 | rs2) - (rs1 & rs2) = rs1 ^ rs2
```

The register-operand form costs 3 static instructions and 1 extra register. When the second operand is an immediate, a `li` is prepended, raising the cost to 4 instructions and 2 extra registers. 
The synthesis applies to both rvsc0 and rvsc1. Another plausible derivation is the De Morgan form `~(a & b) & (a | b)`, which costs more instructions (4 without `[not]` expanded, 6 with it) and carries a register-aliasing hazard discussed in @sc1-md.

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

*Constant shift count.* When $s$ is a compile-time constant, GCC unrolls both the `in_mask` pre-shift and the $(32-s)$-iteration extraction body directly at split time: every `<<=` above becomes a straight-line chain of `add` doublings, and every loop back-edge disappears entirely. Only the data-dependent bit test (`x & in_mask`, then conditionally `or`) survives as a forward, non-looping branch — the loop *control* is eliminated, not the per-bit test itself, since whether a given input bit is set cannot be known until runtime. Measured worst case (masked shift amount $s=1$, giving 31 surviving extraction steps, over an all-ones operand) is 158 instructions, using 3 extra registers (`out_mask`, `in_mask`, a comparison temporary). The resulting assembly is listed in @apx-srl-const-asm.

*Variable shift count.* When $s$ is only known at runtime, both the `in_mask` pre-shift and the extraction loop must be counted down at runtime. The main loop runs $(32 - s)$ iterations, each of which pays not only for the bit test and merge but also for re-materializing its own back-edge; initialization and the `in_mask` pre-shift add overhead proportional to $s$, bringing the measured worst case to 477 retired instructions and requiring five extra registers (four scratch registers plus the shift-count register). The resulting assembly is listed in @apx-srl-asm.

===== Arithmetic Right Shift (SRA) <sc1-sra>

`sra rd, rs1, rs2` computes the arithmetic right shift: identical to `srl` but vacated upper bits are filled with the sign bit rather than zero.

*Proof.* Let $s$ be the masked shift count and $b_31$ the sign bit of `rs1`. Arithmetic right shift sets output bit $i$ to input bit $min(i+s, 31)$. For $i <= 31-s$ this equals the `srl` result. For $i > 31-s$, all upper bits equal $b_31$.

If $b_31 = 0$, the `srl` result already has all upper bits zero; no correction is needed.

If $b_31 = 1$, the upper $s$ bits must be 1. The mask $(-1) << (32 - s)$ has exactly the top $s$ bits set, since $-1$ in two's complement is all-ones, and left-shifting by $k$ clears the low $k$ bits. OR-ing this mask into the `srl` result sets the upper $s$ bits correctly. $square$

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

*Constant shift count.* When $s$ is a compile-time constant, the reused SRL expansion is unrolled exactly as described in @sc1-srl, and `sign_mask` is built the same way: a straight-line chain of $(32-s)$ `add` doublings seeded from $-1$, rather than the runtime `sub`/`add`/loop used to compute it in the variable case. Seeding from $-1$ (loadable via a single `addi`) rather than a general `li` keeps this step independent of `lui`, which matters because this synthesis is shared with rvsc0. Measured worst case (masked shift amount $s=1$, over an all-ones operand) is 194 instructions, using 5 extra registers. The resulting assembly is listed in @apx-sra-const-asm.

*Variable shift count.* When $s$ is only known at runtime, the synthesis reuses the full variable-count SRL expansion and appends a runtime loop that builds `sign_mask` by doubling $-1$ a runtime-computed $(32-s)$ times, so it pays the SRL loop and a second loop of its own, reaching a measured worst case of 669 retired instructions at the cost of six extra registers. The resulting assembly is listed in @apx-sra-asm.

=== Comparisons <sc1-comparisons>

==== SLT and SLTU <sc1-slt>

`slt rd, rs1, rs2` sets `rd = 1` if `rs1 < rs2` (signed comparison), else `rd = 0`. Neither sc0 nor sc1 include `slt` or `slti`.

*Proof.* Let `diff = rs1 - rs2` (32-bit two's complement). Without overflow, the sign bit of `diff` correctly indicates the comparison: `diff[31] = 1` iff `rs1 < rs2`. Signed overflow occurs when the operands have different signs and the result has the same sign as `rs2`. The expression `overflow = (rs1 ^ rs2) & (rs1 ^ diff)` has MSB 1 exactly when overflow occurred. XOR-ing `diff` with `overflow` flips the sign bit iff overflow occurred, yielding the corrected result. Verification by case analysis on the sign bits of $a = "rs1"$ and $b = "rs2"$:

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

Both expansions are expensive: `slt` retires 49 instructions in the worst case and needs three extra registers (t0–t2), while `sltu` retires 48 and needs four (t0–t3). The two land within one instruction of each other despite `sltu` performing more steps, because both are dominated by the same synthesized sub-expressions rather than by the number of top-level operations; @tab-synthesis-cost gives the measured figures.


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

Composing a branch out of `[slt]` this way costs less than `[slt]` alone: @tab-synthesis-cost lists `blt`/`bltu` at 27 instructions against 49 for `slt`. The apparent arithmetic error is real behavior, and its cause is that a branch never needs the comparison as a *value*. The last step of the `[slt]` expansion is a logical right shift by 31, isolating the sign bit into bit 0 so that the result is exactly 0 or 1. With no native `srl` that shift is itself synthesized (@sc1-srl), and its dominant cost is constructing the mask $2^31$ by a chain of 31 `add rd, rd, rd` doublings. When the only consumer of the result is a test against zero, GCC's combine pass rewrites `(x >> 31) != 0` as `(x & 0x80000000) != 0`; the mask is then an ordinary constant that sc1 materializes with a single `lui`, and the doubling chain disappears. Compiled at `-O2` for rvsc1, `return a < b;` emits 49 instructions, 32 of which are the `li` and the 31 doublings that build the shift mask; `if (a < b)` over the same operands emits 29, contains no doubling chain, and tests the sign bit with `li a7, -2147483648`; `and`; `beq`. The comparison rows of the cost table are thus worst cases for the value-producing form only, and no ordered branch pays them.

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

Since sc1 shifts are themselves synthesized via `add`/`beq` loops, and the extraction above uses four of them, a byte load retires up to 608 instructions and a halfword load up to 680 (@tab-synthesis-cost). The worst case is an *aligned* address rather than a misaligned one: the smaller the byte offset, the smaller the extraction shift amount, and the more bit positions the synthesized `srl` has left to walk.

=== Stores <sc1-stores>

==== SB and SH <sc1-sb>

A byte store (`sb`) or halfword store (`sh`) is implemented as a read-modify-write: load the word containing the target location, clear the target bits, insert the new value, and write back. The bit offset is computed at runtime since the base address is unknown at compile time.

*Proof of correctness.* Let `word` be the current word at the aligned address, `mask` the bit-field covering the target unit (e.g., `0xFF << shift` for a byte), and `val` the new value to write. The expression `(word & ~mask) | (val & mask)` replaces exactly the target bits with `val` while preserving all others. For each bit $i$: if `mask[i] = 1`, then `(word & ~mask)[i] = 0` and `(val & mask)[i] = val[i]`, yielding `val[i]`; if `mask[i] = 0`, then `(val & mask)[i] = 0` and `(word & ~mask)[i] = word[i]`, yielding `word[i]`. $square$

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

The resulting assembly sequence is listed in @apx-sb-asm. The expansion requires one extra `lw` and one extra `sw` surrounding the computation, retiring up to 308 instructions and using three extra registers (t0–t2).

The `sh` synthesis follows the same read-modify-write pattern as `sb`, with `MASK = 2` and mask constant `0xFFFF`. That constant exceeds the 12-bit `addi` range, so it must itself be materialized, and how depends on the target. rvsc1 has `lui` and builds it as `lui 0x10; addi -1`. rvsc0 does not, and routes the constant through the `addi`/shift construction of @sc0-lui instead --- the same path every non-small constant takes on that target. The sequence needs the constant twice, once for the mask that clears the halfword field of the loaded word and once for the mask that truncates the value being stored, so whichever construction applies is paid twice per `sh`. The same applies to the `0xFFFF` used by the `lh`/`lhu` synthesis, which materializes it once.

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

The resulting assembly sequence is listed in @apx-sh-asm. The expansion likewise requires one extra `lw` and one extra `sw`, retiring up to 215 instructions and using three extra registers (t0–t2).

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
    [`srl` (const)], [rvsc0, rvsc1], [158],  [3],
    [`srl` (var)],   [rvsc0, rvsc1], [477],  [5],
    [`sra` (const)], [rvsc0, rvsc1], [194],  [5],
    [`sra` (var)],   [rvsc0, rvsc1], [669],  [6],
    [`slt`],         [rvsc0, rvsc1], [49],   [3],
    [`sltu`],        [rvsc0, rvsc1], [48],   [4],
    [`bne`],         [rvsc0, rvsc1], [3],    [1],
    [`blt`/`bltu`],  [rvsc0, rvsc1], [27],   [4],
    [`bge`/`bgeu`],  [rvsc0, rvsc1], [28],   [4],
    [`lui` (addi+shift)], [rvsc0],   [25],   [0],
    [`lb`/`lbu`],    [rvsc0, rvsc1], [608],  [2],
    [`lh`/`lhu`],    [rvsc0, rvsc1], [680],  [2],
    [`sb`],          [rvsc0, rvsc1], [308],  [3],
    [`sh`],          [rvsc0, rvsc1], [215],  [3],
    [`jump`],        [rvsc0],        [1],    [0],
    [`jump`],        [rvsc1],        [3],    [1],
    [`jal`],         [rvsc1],        [5],    [1],
    table.hline(),
  ),
  caption: [Worst-case instruction and register cost for each synthesis],
) <tab-synthesis-cost>

Counts in @tab-synthesis-cost are dynamic: instructions retired for the worst-case operand, which is the quantity @sec-embench-perf draws on. They are measured rather than derived, by calling a one-operation function in a loop and differencing the retired-instruction count between two trip counts, so that the loop and call overhead cancels exactly. Two things about the worst case are easy to get wrong and were determined by scanning rather than assumed. The cost of a shift depends on the data as well as the amount, because the extraction step for each bit position is a conditional merge: `srl` by 1 costs 158 instructions on an all-ones operand but 127 on zero. And sub-word loads are most expensive at an *aligned* address, not a misaligned one, because the extraction shift gets cheaper as the offset grows --- `lb` costs 608 instructions at offset 0 and 389 at offset 3, the opposite of what "worst-case misaligned access" suggests.

Because the counts are measured on the code actually generated, the rows are not additive: the ordered branches cost 27 and 28 instructions although each is defined as an `[slt]` --- 49 instructions --- followed by a `beq` or `bne`. A branch consumes the comparison only as a zero test, so the shift that would normalize it to 0 or 1 is folded into a sign-bit mask and its 31-step doubling chain never appears (@sc1-ordered-branches). Every row of @tab-synthesis-cost is the cost of that operation in the context measured, not a term to be summed with the rows it is built from.

Static and dynamic counts coincide only for the straight-line rows. The variable-count shifts differ sharply in the other direction: `srl` (var) retires up to 477 instructions but occupies 35 in `.text`, since the count is a loop trip count rather than a code size. @tbl-embench-size, which measures `.text`, therefore weights those rows far less heavily than @tbl-embench-perf does.

The figures are measured on rvsc1. rvsc0 synthesizes the same operations but its costs differ in both directions, and by more than a rounding: its loop back-edge is a single `beq zero,zero` where rvsc1 needs `lui`+`addi`+`jr`, making every loop iteration two instructions cheaper, while every constant wider than 12 bits costs an `addi`/shift construction instead of `lui`+`addi`. For `sh` the two effects give 176 instructions on rvsc0 against 215 on rvsc1 --- the target with fewer instructions producing the cheaper expansion.


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

Several correctness problems appeared only at higher optimization levels (`-O2`, `-O3`) and required understanding interactions between GCC passes that are invisible during basic `-O1` testing. This subsection documents the four corner cases encountered and the fixes applied. All four share a shape: a synthesis that is correct read in isolation becomes incorrect once a later pass is allowed to act on information the synthesis did not declare. How each was eventually found is reported in @ch-results, since in every case the discovery says as much about the test harness as about the defect.

*Dataflow edges the register allocator cannot see.* The XOR synthesis was first written in the De Morgan form `~(a & b) & (a | b)`. Read as an expression it is correct, but as RTL it leaves no data dependence between the `or` and the negation of the `and`, so the RTL optimisers were free to reorder them and the register allocator to assign the negation's result to the register already holding one of the operands, destroying the `or` result before it was used. The fix is the $(a | b) - (a thin \& thin b)$ form of @sc1-xor, which routes both intermediates through their own pseudo-registers and makes the final `sub` depend on each of them explicitly. The general rule this established for the rest of the work is that a synthesis must express its ordering constraints as dataflow, not rely on the order in which its instructions happen to be emitted.

*Scratch registers hidden inside assembly templates.* The sequences that stand in for `auipc`-relative jumps and calls are emitted as raw assembly text rather than as RTL, and they name a scratch register (`t0` or `t1`) directly in that text. A register named only inside a template is invisible to the register allocator, which will happily keep an unrelated live value in it across the sequence. `t1` had been reserved against allocation but `t0` had not, so any value living in `t0` across a synthesized jump was silently overwritten by that jump's own target address. The fix is to declare the clobber for every such template. This was the costliest defect of the work to locate, because it corrupts a register rather than crashing, and its consequences surface arbitrarily far from the jump that caused them (@sec-embench-perf).

*Missing constraints on a pattern that runs after reload.* The `*branch<mode>_slt_synth` pattern catches ordered-comparison branches that the combine pass assembles directly, bypassing the expand-time synthesis. It was modeled on the upstream `*branch<mode>` pattern but declared its comparison operands with a predicate and no constraint string. Predicates are advisory at that stage; it is the constraint that obliges LRA to reload a non-register operand into a register. Without one, a memory operand folded into the comparison by combine survived into the pattern's post-reload split, which treats both operands as registers unconditionally, and the compiler aborted (@sc1-torture-tests). The fix is to give the operands the same constraints as the sibling pattern.

*Alias information narrower than the instructions that carry it.* Because sc1 has no `sb` or `sh`, a sub-word store becomes a read-modify-write of the enclosing word, but the RTL it replaces names only the byte or halfword. Alias analysis therefore reasons about the narrow object while the emitted code touches the whole word: two stores to distinct adjacent symbols look independent, and the word loads may be hoisted above the word stores, which is sound for the bytes and wrong for the words containing them. The fix is to mark the synthesized word accesses as potentially aliasing anything, which costs the ability to reuse a word a neighbouring access has just loaded --- a cost that is visible in the dynamic measurements of @sec-embench-perf.


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

Correctness is verified by three complementary test strategies: _ISA compliance_ tests, which statically check that the compiler never emits a forbidden instruction; _behavioral self-tests_, which execute compiled programs on a reference simulator and check their results; and the _GCC torture suite_, which subjects the compiler to a large corpus of programs accumulated by the GCC project itself. The synthesis-heavy targets are verified in depth: rvsc1 receives all three layers, and rvsc0 receives the first two (the torture suite requires function calls, which rvsc0 cannot compile). The first strategy is applied at two scopes --- to the objects the compiler emits and to the fully linked executable --- because, as @sc1-linked-isa shows, the two support different claims and only the narrower one belongs to the compiler. rvsc2, which synthesizes nothing, is covered by ISA compliance plus a set of probes that ask directly for each excluded instruction group (@sc2-isa-tests); rvsc3 through rvsc7 require no testing beyond what the upstream backend already provides. This section first describes how each strategy works, then presents the specificities and results of each target.

=== Test Strategies

==== ISA Compliance <strategy-isa>

The ISA compliance strategy answers a static question: does the compiler ever emit an instruction that the modeled processor does not implement? Each target has a corpus of small C programs, each written to exercise one operation category, one program shifts by variable amounts, another stores individual bytes, another compares signed and unsigned values, and so on. Each program is constructed so that a compiler for the full RV32I ISA would naturally use the native instruction under test, forcing the restricted target to demonstrate the corresponding synthesis instead.

The test script compiles every program in the corpus at each of GCC's five optimization levels (`-O0`, `-O1`, `-O2`, `-O3`, `-Os`), assembles the output, and disassembles the resulting object with pseudo-instruction expansion enabled. Every mnemonic in the disassembly is then checked against the target's allowlist. Expanding the pseudo-instructions is essential rather than cosmetic: without it a forbidden instruction can pass the check disguised as an alias, since the assembler prints `jalr x0, 0(ra)` as `ret` and a native shift can hide behind a synthetic mnemonic.

The same allowlist is applied a second time at a wider scope, to the fully linked executable. The two answer different questions. Over an object, the check bounds what this work's compiler does, which is the claim the backend is responsible for; over a linked binary, it bounds what the processor is actually asked to execute, which additionally depends on runtime libraries the compiler never sees. The linked-scope check therefore partitions its result: code the compiler generated, including `libgcc`, must be clean, while hand-written assembly from the C runtime is reported separately with a reason for each symbol rather than being silently ignored. @sc1-linked-isa reports both partitions for rvsc1.

==== Behavioral Self-Tests <strategy-behav>

ISA compliance proves that the output is _legal_; it says nothing about whether it is _correct_. A synthesis could emit only allowed instructions and still compute the wrong value. The behavioral strategy closes this gap by executing the compiled programs on Spike, the RISC-V reference simulator @spike, and checking their results.

Each behavioral test is a self-validating C program covering one operation category through a sequence of assertions in boundary values, sign transitions, every byte lane of a word, and algebraic identities cross-checked against independently computed results. The program returns 0 when every assertion holds, and a distinct nonzero code identifying the first failing assertion otherwise. Each program is compiled at all five optimization levels and executed on Spike, a test case passes when the simulator exits with code 0.

==== GCC Torture Suite <strategy-torture>

Hand-written tests only cover the code paths their author anticipated. The third strategy probes the remaining ones with `gcc.c-torture/execute`, a suite of 1684 C programs accumulated by the GCC project over three decades of compiler development, many distilled from real miscompilation bugs. The programs are self-validating, with assertions calling `abort()` on failure. The harness compiles each program at all five optimization levels and runs it on Spike in the same proxy-kernel environment used by the behavioral tests, giving 1684 × 5 = 8420 compiler/optimizer combinations. Programs that fail to compile are not all equivalent, so the harness classifies the failure rather than discarding it: a diagnostic rejecting the program (typically a type or feature the freestanding runtime does not provide) counts as skipped, whereas an internal compiler error — the compiler aborting on its own invariants, identified by its crash diagnostic, by death from a signal, or by an exit status no ordinary diagnostic produces — is a backend defect and counts as a failure. Distinguishing the two matters because a single missing constraint or clobber can crash the compiler on dozens of programs at once; folding those crashes into a skip count is what allowed the missing-constraint defect described in @sc1-torture-tests to go unnoticed. The register-clobber defect described in the same section escaped by a different route, surfacing as execution timeouts rather than as skips. Failures are therefore grouped by the crash location or diagnostic text they report, so that one root cause is presented as one entry rather than as the many program/optimization pairs it happens to affect. A fixed simulation budget of 300 seconds bounds each execution, and a 120-second budget bounds each compilation. A combination passes when the simulator exits with code 0. In addition, for each program that compiles successfully, the emitted assembly is passed through the same static mnemonic checker used by the ISA-compliance tests, catching any forbidden instruction that the dynamic execution might not exercise.

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
    [Bitwise NOT],  [NOT — synthesized as `sub rd, x0, rs; addi rd, rd, -1`],
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
    [Bitwise NOT],  [NOT — synthesized as `sub rd, x0, rs; addi rd, rd, -1`],
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
    [`-O0`], [1 669], [15], [0],
    [`-O1`], [1 669], [15], [0],
    [`-O2`], [1 669], [15], [0],
    [`-O3`], [1 669], [15], [0],
    [`-Os`], [1 669], [15], [0],
    [*Total*], [*8 345*], [*75*], [*0*],
  ),
  caption: [gcc.c-torture/execute results for rvsc1 (8 420 combinations)],
) <tbl-torture-results>

Every combination that runs, passes. Fifteen sources are skipped at every optimization level, and no source is skipped by name: thirteen are skipped because they *declare* a prerequisite this configuration does not provide, and two because they do not compile. @tbl-torture-skips gives both groups. None is related to sc1's restricted instruction set.

The thirteen come from the suite's own directives. A `gcc.c-torture` source states what it needs with `dg-require-effective-target`, and DejaGnu skips a test whose stated needs the target cannot meet; the harness reads those directives and does the same. What it maintains is therefore not a list of files but a table of six properties this configuration lacks, each recorded with the evidence for it, and the set of skipped files follows from the sources. An effective target named by a source and classified by neither half of that table is treated as present --- the test runs --- and reported, so an unrecognised prerequisite can cost a visible failure but never a silent skip. Across the whole suite there are currently none: the table's two halves account for all nineteen effective targets `gcc.c-torture/execute` uses.

#figure(
  table(
    columns: (auto, auto, 1fr),
    align: (left, right, left),
    [*Category*], [*Sources*], [*Reason for exclusion*],
    [`run_expensive_tests`], [5], [Opt-in upstream too; compile time alone exceeds the budget],
    [`c99_runtime`], [3], [GCC declines the `double`#sym.arrow.r`float` math narrowing for this target],
    [`int128`], [2], [No 128-bit integer mode on any 32-bit RISC-V target],
    [`mmap`], [2], [No `sys/mman.h` in this freestanding newlib],
    [`dfp`, `dfprt`], [1], [Decimal floating point unsupported],
    [--- _does not compile_ ---], [], [],
    [`__int128`], [1], [`pr105613.c`; same cause, but declares no requirement],
    [x87 inline asm], [1], [`990413-2.c`; x86 register constraints, guarded upstream by target rather than by requirement],
    [*Total*], [*15*], [],
  ),
  caption: [Torture-suite sources excluded at every optimization level, by cause],
) <tbl-torture-skips>

This list is a quarter of what an earlier edition of this table reported, and the reduction is worth recording because none of it was earned by a change to the compiler. Forty-two of the fifty-five sources then excluded were excluded for a reason that had stopped being true, or that was never true, and each was found only by re-testing the stated reason instead of trusting it.

Thirty-five were attributed to a `printf` link gap: the stdio wrappers call internal reentrant symbols (`_vfprintf_r`, `_svfprintf_r`, `_vfiprintf_r`) that the linked `libc.a` did not define. The symbols were missing from an *installed* library that had gone stale, not from newlib, and a from-scratch rebuild --- forced by the machine-directory change of @sc1-linked-isa, and otherwise unrelated to it --- defines all four. All thirty-five link, and thirty-one passed immediately.

Of the four that did not, three --- `fprintf-2.c`, `printf-2.c`, `user-printf.c` --- opened a file for writing and got "no such file or directory" back. The obvious reading, that a freestanding target has no filesystem, was wrong: the proxy kernel proxies file operations to the host perfectly well. `libgloss` was passing newlib's flag word to a Linux-ABI system call interface without converting it, and the two encodings collide --- newlib's `O_CREAT` is `0x200`, which the other side reads as `O_TRUNC`, and newlib's `O_TRUNC` is `0x400`, read as `O_APPEND`. So `fopen(path, "w")` arrived as a request to open an already-existing file, and correctly failed. Converting the flags bit by bit in `libgloss/riscv`, alongside the `errno` conversion that layer already performed, makes all three pass. The fourth, `pr78622.c`, checks that `snprintf("%hhd", 4105)` yields `"9"` and a return value of 1, where newlib produced `"4105"` and 4: it compiles the `hh` length modifier only under `_WANT_IO_C99_FORMATS`, which is off by default and is now enabled at configure time.

Two more were recorded as needing a libm this target does not build. It does build one, and installs it; the harness simply never passed `-lm`. The last five are the upstream-flagged "expensive" tests, and they stay excluded, but for a reason restated to match what actually happens: measured on their own they fit inside the compile budget, and a full sweep compiles many programs at once, so they cross it only under that load.

What is left of the runtime-library categories is the `c99_runtime` group, and it is the one place where reading the directives costs coverage rather than adding it. Two of its three sources, `pr78622.c` and `pr79327.c`, pass. They are skipped anyway, because the requirement they declare genuinely is not met: GCC treats this target as lacking a C99 runtime, which is what `20030125-1.c` --- the third --- fails on. Calling the property present to keep two passing tests would mean excluding that third one by name, which is the practice this change exists to end. Ten combinations is the price of not maintaining a list of files by hand, and it is worth paying.

The episode is the same lesson as the `libgcc` and newlib defects, arriving from the other direction. There, a check that was never run hid instructions the target cannot execute; here, an exclusion whose stated reason had quietly stopped being true hid roughly two hundred combinations that pass. An exclusion list is an assertion about the world, and it decays exactly like any other.

An earlier revision of this suite reported 31 cases that appeared to time out at the 300-second Spike budget, attributed to shift-synthesis overhead. Root-causing them instead found a genuine backend correctness bug: for `!TARGET_AUIPC`, both the long-branch/jump synthesis and the call-address materialization used the same scratch register (`t1`) without declaring it clobbered, so an optimizer could leave a call executing with a stale register value pointing at a nearby loop instead of the intended callee — and, more subtly, the same missing declaration let IRA allocate an *unrelated* live value (e.g. a loaded word inside the byte/half-word store synthesis) to a register that a nearby shift-synthesis loop's back edge silently destroyed. Both were genuine miscompilations, not slow-but-correct code, and were confirmed via direct instruction-level tracing (`spike --log-commits`) on `920302-1.c` and `pr93249.c`, where a call or a merge step ended up executing with corrupted register/memory state. Fixing the register-clobber declarations resolved all 31 original cases with zero regressions (95/95 ISA compliance, 30/30 behavioral).

Two internal compiler errors (ICEs) surfaced among the skipped programs, both in a pattern this work itself introduced: `*branch<mode>_slt_synth` — which catches the ordered-comparison branches that combine constructs directly, bypassing the usual expand-time synthesis — declared its comparison operands with a predicate but no constraint string, unlike the sibling upstream `*branch<mode>` pattern it was modeled on. With no constraint to act on, LRA never reloaded a non-register value — such as a memory load combine had folded directly into the comparison — into an actual register before the pattern's post-reload split unconditionally treated both operands as registers, crashing as either "could not split insn" (`pr10352-1.c`) or an ICE in `patch_jump_insn` during reload's CFG cleanup (`arith-rand.c`). Adding the missing constraints (matching the sibling `*branch<mode>` pattern) fixed both, again with zero regressions. The defect thus lay in this work's own synthesis machinery rather than in upstream GCC, and it surfaced only once the harness stopped folding every compile failure into an undifferentiated skip count — the validation methodology exposing a defect in the very code it was built to check.

Neither defect was reported by the harness; both were found by hand, and each escaped by a different route — the clobber defect as the execution timeouts described above, the missing constraints as skips. Three shortcomings explained the blind spot, and correcting them is what makes the sweep reported below meaningful. First, an ICE was indistinguishable from an unsupported-feature diagnostic, so neither affected the exit status; this is what buried the two `slt_synth` crashes in the skip column. Second, the harness collected the compiler's output through pipes it never drained while waiting for the process to exit, so any compilation emitting more than the operating system's pipe buffer blocked indefinitely and was recorded as a timeout — and a compiler dumping the RTL of an offending instruction, which is precisely what an ICE does, is the case most likely to exceed that buffer. Third, the static checker ignored the per-test option directives that the suite's own sources carry, so 115 programs failed on language dialect (most requiring `-std=gnu89`) rather than on anything related to sc1, and were skipped without ever being checked for forbidden instructions.

With the three corrected, the static sweep was repeated over the entire suite, including the sources excluded up front, since a program that cannot link can still crash the compiler. Of the 8 420 combinations, 8 368 produced an object file and #emph[every one of them contained only the ten instructions sc1 implements] — no forbidden mnemonic at any optimization level. No ICE occurred anywhere in the sweep. The 52 combinations that produced no object divide into 35 front-end rejections spanning four distinct causes — `__int128` (15), `sys/mman.h` (10), x87-specific inline asm (5), and `_Decimal` floating point (5), all of which the earlier discussion already attributes to the freestanding runtime or to 32-bit RISC-V in general rather than to sc1 — and 17 exhausted compile budgets, confined to the five upstream-flagged "expensive" tests. That last count is sensitive to machine load, as the affected compilations sit near the 120-second budget; the ISA-compliance and ICE counts are not, and are the meaningful results. The count of 35 rejections is unchanged from that edition even though @tbl-torture-skips has since lost forty-two sources, because the `printf`-family programs that then dominated the skip column always compiled cleanly and passed the static check: their exclusion was only ever a link-stage claim, and it is now gone entirely. The routine static sweep no longer needs the `--include-unsupported` form to reach them, either. A program that needs a filesystem, or a C99 math runtime, still compiles, and disassembling its object says exactly as much about the compiler as any other; only the compile budget is a reason to leave a source out of a check that never runs the program. Scoping the exclusions that way rather than sharing the behavioral sweep's raises the routine figure to #emph[8 360 objects, every one ISA-clean, from 8 395 attempted].

An earlier edition of @tbl-torture-results carried 36 execution failures --- 34 wrong answers or faults plus 2 exhausted simulation budgets --- distributed unevenly across optimization levels: none at `-O0`, 11 at `-O1` and `-O2`, 9 at `-O3`, 5 at `-Os`. That distribution was itself the clue. A synthesis that is wrong in isolation fails at every level; one that fails only once an optimizer has acted on it is a synthesis that did not declare something about itself, which is the shape of every corner case reported in @sc1-corner-cases.

Thirty-four of the 36 turned out to be a single defect, and it is one already described: the unreserved `t0` of @sec-embench-perf. Attributing them required reproducing the failures rather than inferring the connection from the order in which fixes landed, since three backend changes had been made since the measurement. Four compilers were therefore built side by side, each installed to its own prefix, differing only in which of those changes were reverted. The build with both the register reservation and the sub-word aliasing fix removed reproduces the historical failure set exactly, group for group. Reverting only the aliasing fix leaves every implicated program passing; reverting only the register reservation brings back all 34 with byte-identical failure signatures. The aliasing defect is real and is documented in @sec-embench-perf, but it caused none of these.

The mechanism is visible in the assembly. In `pr68841.c` at `-O1`, the compiler without the reservation allocates the constant 3 to `t0`, emits four synthesized jumps that each overwrite it with a code address, and then computes with it; with the reservation, `t0` appears only inside the jump triples and is never allocated at all. One mechanism accounts for the whole spread of symptoms, which is why they group as they do: a corrupted value used as data yields a wrong answer, used as a pointer yields a segmentation fault, used as a jump target yields an illegal instruction, and used as a loop bound sends the program down a path long enough to exhaust the 300-second budget. The two apparent timeouts were therefore miscompilations as well, not slow-but-correct code --- the same misreading that `nsichneu` had already produced on Embench. Both now finish well inside the budget.

The remaining 2 are one source, `20030125-1.c`, at `-O1` and `-Os`. It asserts that GCC narrows `floor` on a `float` argument to `floorf`, and defines a weak `floor` that aborts if the narrowing did not happen; without a C99 math runtime GCC correctly declines to narrow, so the weak function runs and aborts. Upstream guards the test with `dg-require-effective-target c99_runtime`, a directive this harness does not read. That it is unrelated to the restricted instruction set is settled by comparison rather than by argument: a stock `rv32i` toolchain fails the same two levels and passes the same three. The source sits in the excluded list under the C99-runtime category of @tbl-torture-skips.

The sweep reported in @tbl-torture-results is the one taken after those fixes, and its failure list is committed alongside the harness so that the next sweep diffs against it rather than scrolling past. Every one of the 8 345 combinations that compiles, links and runs, terminates with the exit status its assertions require.

==== Linked-Program ISA Compliance <sc1-linked-isa>

Every result reported so far concerns what the compiler _emitted_. That is the correct scope for a claim about a compiler, but it is a narrower statement than it is easily read as, and the difference is not academic. For as long as `libgcc` supplied its division and multiplication routines as hand-written assembly (@sec-embench-perf), every object the compiler produced was ISA-clean and every program that divided nevertheless executed instructions rvsc1 does not implement. Neither static checker looked, because both disassemble compiler output; and the simulator could not object, because it runs with the wider `--isa` the proxy kernel requires.

A fourth check therefore applies the allowlist to the whole linked executable, partitioned as described in @strategy-isa. Across the forty linked behavioral binaries --- eight programs at five optimization levels --- the program's own code and every library the compiler generated, `libgcc` included, contain only the ten instructions sc1 implements. Everything reported in the second partition is hand-written assembly that never passes through the machine description, and therefore never sees `-mno-shift` and its siblings: the C runtime start-up code (`_start`) and the proxy-kernel system-call stubs (`_read`, `_write`, `_sbrk`, `_close`, `_lseek`, `_exit`).

That second partition was larger. newlib maps the `rvsc*` triples to its RISC-V machine directory, which supplies `memset`, `memcpy`, `memmove` and `strcmp` as hand-written assembly and thereby shadows the generic C implementations of the same functions --- a defect of exactly the same kind as the `libgcc` one, hidden in exactly the same way, and found by exactly the same check. Disabling the machine directory outright does not work, because `setjmp.S` is the one file in it with no generic C equivalent. The fix is instead a machine directory of the `rvsc*` triples' own, containing `setjmp.S` alone and leaving the string routines to newlib's generic C ones, which are synthesized like any other C the compiler sees. One obstacle lay inside `setjmp.S` itself, and only the disassembly exposed it: `longjmp` computes its return value with `seqz`, an assembler pseudo-instruction that expands to `sltiu`, so the file was not, as reading it suggests, already sc1-legal. Rewritten to test the value with `beq` instead, it stays within the ten-instruction subset, and it is now the only hand-written assembly the rvsc targets take from newlib.

What remains in the second partition cannot be removed by any change to this work. A program that talks to a host needs some mechanism to do so, and a bare-metal sc1 processor has none --- which is precisely why the rvsc0 harness runs with no C library at all, and why the start-up code and syscall stubs are absent from anything that would run on the student's own hardware.

The summary is therefore a single statement rather than two: everything this work compiles is ISA-clean, and so is everything it links, apart from the start-up and system-call code that exists only to reach a host the target processor does not have. It is verified at the linked binary rather than inferred from the objects.

=== rvsc2 <sc2-isa-tests>

rvsc2 removes three groups from RV32I --- memory ordering, CSR access, and the environment calls (@tbl-rvsc2-treatment) --- and synthesizes nothing: every instruction the compiler may emit is native. What is left to verify is therefore not equivalence but exclusion, and it is checked in two ways, because @tbl-rvsc2-treatment promises two different things.

The first is ISA compliance, that the compiler never *chooses* an excluded instruction while compiling ordinary C. The rvsc1 test corpus is reused for this, but against a much wider allowlist: the full RV32I base set minus the three groups. The 19 programs at five optimization levels give 95 test cases; all pass, with no instruction from any excluded group appearing in any disassembly.

The second checks what happens when a program asks for one *directly*, through inline assembly or a builtin --- the half of the requirement an allowlist sweep over ordinary C cannot reach. Ten probes at five optimization levels give 50 further cases, all passing, and they confirm the three treatments are genuinely different. Four ordering probes (`__sync_synchronize`, and sequentially consistent, acquire and release atomics) emit no fence; each is compiled a second time with `-mfence`, which restores the upstream behavior, and only counts as passing if the fence appears then --- otherwise a probe that had quietly stopped generating fences would report success while testing nothing. Four CSR probes, written as inline assembly so that the compiler's own choices are bypassed entirely, are all refused: the target's `rv32i` architecture string does not include Zicsr, so the assembler rejects the mnemonic. The last two probes record the limitation rather than a guarantee. `__builtin_trap` expands to `ebreak` and inline `ecall` assembles, so the test asserts that the mnemonic *is* present, and will fail if that ever changes --- which is what keeps @tbl-rvsc2-treatment honest about the one group the toolchain does not enforce.

No behavioral testing is required, because on the instructions rvsc2 does emit it is identical to rvsc3 (full RV32I), whose correctness is already established by the upstream GCC test suite.

=== rvsc3 and Above

No testing is performed for rvsc3 through rvsc7. These targets contain no synthesis code: they only enable flags that correspond to instructions already present in the upstream RISC-V backend. Their correctness follows from the correctness of the upstream backend and the GCC test suite.

== Program Size

Each synthesized instruction expands into a sequence of native instructions, increasing the static size of the compiled binary. The expansion ratio --- the number of native instructions emitted divided by the number of instructions a full-ISA compiler would emit --- quantifies the cost of each missing hardware instruction.

Synthesis sequences fall into three categories. _Constant-length_ expansions always emit the same number of instructions regardless of operand values: NOT expands to 2 instructions, XOR to 3 (register operands; 4 with an immediate operand, @sc1-xor), and each immediate variant (ANDI, ORI) adds 1 instruction. _Constant-count shifts_ are straight-line — the shift amount is known at compile time, so the expansion is unrolled and contains no loop — but their length still grows with that amount: SLL costs exactly $b$ instructions (at most 31), while SRL and SRA reach worst cases of 158 and 194 instructions. _Variable-length_ expansions depend on runtime values: variable-count SLL, SRL, and SRA use count-down loops whose length is proportional to the shift amount, with worst-case counts of 187, 477, and 669 instructions respectively.

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
    [`aha-mont64`],     [3 548],  [29 436],  [8.30],
    [`crc32`],          [380],    [1 752],   [4.61],
    [`depthconv`],      [608],    [4 128],   [6.79],
    [`edn`],            [3 244],  [40 340],  [12.44],
    [`huffbench`],      [2 140],  [12 372],  [5.78],
    [`matmult-int`],    [936],    [1 500],   [1.60],
    [`md5sum`],         [1 016],  [2 432],   [2.39],
    [`nettle-aes`],     [4 444],  [67 968],  [15.29],
    [`nettle-sha256`],  [6 976],  [135 044], [19.36],
    [`nsichneu`],       [19 668], [65 428],  [3.33],
    [`picojpeg`],       [15 360], [240 664], [15.67],
    [`qrduino`],        [12 852], [218 044], [16.97],
    [`sglib-combined`], [10 824], [76 860],  [7.10],
    [`slre`],           [4 256],  [38 060],  [8.94],
    [`statemate`],      [6 484],  [143 672], [22.16],
    [`tarfind`],        [528],    [3 320],   [6.29],
    [`ud`],             [1 436],  [2 032],   [1.42],
    [`wikisort`],       [7 744],  [41 488],  [5.36],
    [`xgboost`],        [624],    [7 916],   [12.69],
  ),
  caption: [Embench-IoT static code size (`.text` bytes, `-O2`) and rvsc1 expansion ratios. Measured with the backend at revision `8a0646efee4`.],
) <tbl-embench-size>

Across the suite, synthesis inflates code size by a geometric mean of #sym.times 7.13 relative to the `gcc17` baseline. The custom `rvsc2` target produces code identical to `gcc17` for all 19 benchmarks (geomean ratio = 1.000), which is why it is not given a column of its own in @tbl-embench-size. The per-benchmark ratio tracks how shift- and comparison-heavy each workload's own code is: `ud`, which performs most of its arithmetic inside library routines rather than in inline shifts, expands only #sym.times 1.42, whereas `statemate`, whose control flow is dominated by synthesized comparisons and branches, expands #sym.times 22.16.

This static penalty is the side of the ledger that the constant-count unroll made worse. Before shifts by a compile-time-known amount were unrolled, the same suite measured a geomean of #sym.times 4.94: a constant shift then cost one short loop regardless of the shift amount, whereas it now costs one instruction per bit position (@sc1-srl). The effect is confined exactly to the benchmarks that use such shifts, which is what makes the attribution safe --- `nettle-sha256` grew #sym.times 3.0 relative to its own earlier ratio, `crc32` #sym.times 1.9, and `edn`, `qrduino`, and `aha-mont64` between #sym.times 1.6 and #sym.times 1.8, while the four benchmarks with essentially no constant shifts (`nsichneu`, `ud`, `md5sum`, `matmult-int`) are unchanged to within one percent. The corresponding gain appears in the dynamic counts of @sec-embench-perf.

== Program Performance

Since the target processor is single-cycle, every instruction retires in exactly one clock cycle (ignoring memory latency). Dynamic instruction counts are obtained by executing each compiled binary on Spike and totalling the retired instructions.

=== Whole-program instruction counts <sec-embench-perf>

The dynamic cost of a whole program depends on how often each synthesized instruction executes at run time. Simple instructions such as `not` or `xori` have a small absolute cost, while other instructions expand into a loop whose cost depends on the operand. This benchmark measures the real program impact, weighted by loop trip counts rather than by static frequency.

All nineteen benchmarks execute correctly under rvsc1 and all nineteen are included in the geomean.

Reaching that point required three defects to be found, none of which any test suite had identified as a defect. Two were in the backend. `edn`, `sglib-combined`, `wikisort` and `nsichneu` shared one cause: the absolute-address sequences that stand in for `auipc`-relative jumps and calls hardcode `t0` inside raw assembly text, which the register allocator never sees, and `t0` had not been reserved against allocation the way its counterpart `t1` already was. A value living in `t0` across an ordinary loop back edge was therefore overwritten by the jump's own target address. Three of them trapped on a wild pointer built from the overwritten value; `nsichneu` was never genuinely slow but merely diverted, and in the round where the fix was made it retired 14 682 354 instructions, within 0.05% of what it had retired before the defect was introduced. (That figure and the two below predate the `libgcc` rebuild described next, which is why they differ slightly from @tbl-embench-perf.) This is the defect that, root-caused afterwards, also accounts for 34 of the 36 torture-suite execution failures discussed in @sc1-torture-tests --- the suite had been failing on it for some time without anyone knowing what the failures meant, which is a weaker thing than reporting a defect.

The fifth, `qrduino`, produced a wrong QR encoding rather than crashing, and came from a defect in the sub-word store synthesis itself. Because rvsc1 has no `sb`, a byte store becomes a read-modify-write of the enclosing word, but the instruction it replaces names only the byte. Alias analysis therefore traced two such stores back to two distinct symbols, concluded they could not conflict, and hoisted both word loads above both word stores --- true of the byte objects, false of the word containing them. Two adjacent `unsigned char` globals then lost one of the two updates: `initecc` assigns `VERSION` and `WD` in consecutive statements, and the second store wrote back its stale copy of the first, leaving `WD` correct and `VERSION` zero. Marking the synthesized word accesses as aliasing anything restores the ordering. The cost is visible in the table: `statemate`, whose inner loops are dominated by byte accesses, roughly doubles to #sym.times 107, because a synthesized sub-word access can no longer reuse a word its neighbour just loaded.

The third defect was not in the compiler but in the library it links against, and it bears on what the ISA-compliance result means. `libgcc`'s SImode divide and multiply routines come from hand-written assembly, which the `-mno-shift` machinery never sees, so they assembled native `slli` and `srli` --- instructions rvsc1 does not implement. Every object the compiler produced was clean and every program that divided or multiplied executed forbidden instructions regardless. It stayed hidden from both directions at once: the static checkers disassemble compiler output and never inspect the library, while Spike runs with an `--isa` wide enough to execute those instructions rather than trap on them. Rebuilding the routines in C, so they pass through the same synthesis path as user code, closes the gap. It is also why the dynamic figures below are markedly higher than earlier editions of this measurement --- a synthesized division costs far more than the native-shift assembly it replaces, and the earlier numbers were quietly benefiting from instructions the target does not have.

Finding any of this was a consequence of the harness correction rather than of the benchmarks themselves, and it repeats the lesson of @sc1-torture-tests exactly. The earlier harness recorded a retired-instruction count even when the run exited nonzero, so an aborted benchmark entered the table as an ordinary number: `edn` was published at 512 612 605 retired instructions, an unremarkable-looking #sym.times 7.5 overhead. Once failed exits were recorded as failures, the same benchmark reported the 4 899 454 instructions it managed before trapping --- a nominal #sym.times 0.1, synthesis apparently outrunning the native baseline by a factor of fourteen. That impossibility is what exposed the first defect, and pursuing the one benchmark that still failed afterwards exposed the second.

#figure(
  table(
    columns: (auto, auto, auto, auto),
    align: (left, right, right, right),
    [*Benchmark*], [*rvsc2 (native)*], [*rvsc1 (synth)*], [*Overhead*],
    [`aha-mont64`],     [12 997 204], [198 634 116],     [15.3#sym.times],
    [`crc32`],          [5 990 964],  [148 470 248],     [24.8#sym.times],
    [`depthconv`],      [54 552 560], [675 053 810],     [12.4#sym.times],
    [`edn`],            [68 624 356], [533 842 785],      [7.8#sym.times],
    [`huffbench`],      [2 398 918],  [80 333 616],      [33.5#sym.times],
    [`matmult-int`],    [24 445 649], [87 116 574],       [3.6#sym.times],
    [`md5sum`],         [2 917 201],  [38 752 579],      [13.3#sym.times],
    [`nettle-aes`],     [4 674 247],  [135 253 257],     [28.9#sym.times],
    [`nettle-sha256`],  [4 917 617],  [115 144 842],     [23.4#sym.times],
    [`nsichneu`],       [2 514 373],  [14 693 575],       [5.8#sym.times],
    [`picojpeg`],       [3 602 642],  [179 228 688],     [49.7#sym.times],
    [`qrduino`],        [5 139 825],  [198 246 339],     [38.6#sym.times],
    [`sglib-combined`], [3 005 598],  [109 075 777],     [36.3#sym.times],
    [`slre`],           [2 983 191],  [55 834 696],      [18.7#sym.times],
    [`statemate`],      [2 065 673],  [221 419 842],    [107.2#sym.times],
    [`tarfind`],        [5 287 682],  [284 421 883],     [53.8#sym.times],
    [`ud`],             [6 622 451],  [274 716 724],     [41.5#sym.times],
    [`wikisort`],       [1 622 550],  [11 053 235],       [6.8#sym.times],
    [`xgboost`],        [3 804 380],  [304 994 180],     [80.2#sym.times],
  ),
  caption: [Embench-IoT dynamic retired-instruction counts on Spike and rvsc1 run-time overhead, measured with the backend at revision `8a0646efee4`. Geomean is over all nineteen benchmarks.],
) <tbl-embench-perf>

Across all nineteen benchmarks, synthesis inflates the dynamic instruction count by a geometric mean of #sym.times 22.2, roughly three times the #sym.times 7.13 static-size penalty, because the most expensive syntheses sit inside the hottest loops. The spread is wide and, as with code size, tracks each workload's reliance on synthesized instructions: the cheapest cases are `matmult-int` at #sym.times 3.6, `nsichneu` at #sym.times 5.8 and `wikisort` at #sym.times 6.8, whereas the byte-access-heavy `statemate` and the shift- and rotate-heavy `xgboost` reach #sym.times 107.2 and #sym.times 80.2. `matmult-int` and `ud` are no longer the near-parity cases they were in earlier editions of this measurement --- at #sym.times 3.6 and #sym.times 41.5 they now carry the cost of synthesized multiply and divide in `libgcc`, which earlier measurements had avoided by linking assembly the target cannot execute. This confirms the pedagogical point quantitatively: the run-time cost of an absent instruction is not a fixed tax but is paid in proportion to how often the program actually needs it.

This aggregate should not be compared directly with the #sym.times 13.7 published before the constant-count unroll, because neither the compiler nor the set of benchmarks being averaged is the same. Three effects are superimposed. The unroll lowered the dynamic cost of compile-time-constant shifts, which is what allowed several of the most expensive benchmarks to finish inside the Spike budget at all. Admitting those expensive workloads to the average pushes it up, independently of any benchmark becoming slower. The register fix removed work that had been pure waste: in that round `aha-mont64` fell from 413 815 964 retired instructions to 197 361 701 and `depthconv` from 1 212 764 378 to 593 772 817, each roughly halving, because a corrupted `t0` had been sending them down far longer paths while still, by luck, producing the right answer. And the aliasing fix moved the figure the other way, since a synthesized sub-word access can no longer reuse a word its neighbour already loaded: `statemate` nearly doubled, from #sym.times 59 to #sym.times 107. The stable comparison is the per-benchmark ratio in the table, not the aggregate across editions of it.

== Discussion

The results establish correctness first and cost second. On the correctness axis, the ISA compliance tests confirm that the compiler never emits a forbidden mnemonic. Behavioral equivalence is established independently by execution on Spike: every rvsc1 program verifies its own results against independently computed values and exits 0, and every rvsc0 single-function program writes the corresponding success token to `tohost`. Synthesis therefore changes how a computation is expressed, not what it computes. That now holds across every program the three test suites actually execute --- 95 ISA-compliance cases, 30 behavioral cases, and 8 345 of the 8 420 torture combinations, the remaining 75 being programs that declare a prerequisite this freestanding target does not provide, or that do not compile, for reasons unrelated to the instruction set (@tbl-torture-skips) --- and across all nineteen Embench benchmarks. It did not hold before this measurement. The torture suite was failing 36 combinations, and two further defects lay outside what any suite reached at all. The 36 were attributed only afterwards, by rebuilding the compiler with each candidate fix reverted in turn until the failure set reappeared; the other two were found by running a fourth, independent corpus and by refusing to accept a failed run as a number. The suites bound where correctness has been demonstrated, and widening the corpus widened the bound.

The cost of that re-expression is quantified along two dimensions. Statically, synthesis inflates code size by a geometric mean of #sym.times 7.13 over the Embench suite (@tbl-embench-size); dynamically, it inflates the retired-instruction count by a geometric mean of #sym.times 22.2 (@tbl-embench-perf). The dynamic penalty is the larger of the two because the costliest syntheses --- the variable-count shift loops, each of which re-materializes its own back-edge every iteration (@sc1-sll) --- tend to sit inside the hottest loops, so their cost is multiplied by trip count rather than merely by static occurrence. Both penalties vary by more than an order of magnitude across workloads: statically from #sym.times 1.42 (`ud`) to #sym.times 22.16 (`statemate`), and dynamically from #sym.times 3.6 (`matmult-int`) to #sym.times 107.2 (`statemate`).

For the pedagogical setting these targets are built for, this variation is the point rather than a limitation. The programs students write in an introductory single-cycle course, small loops, modest shift amounts, few byte-granular memory accesses, fall at the inexpensive end of both distributions, so the toolchain remains practical to use. At the same time, the wide spread makes the cost of each ISA restriction concrete and measurable: a student can compile the same source for rvsc1 and rvsc2, compare the `-S` output, and see exactly how many native instructions a single missing `sll` or `sb` expands into. The compiler thus turns an abstract statement about instruction-set design --- "omitting an instruction shifts its cost into software" --- into a number the student can read off the assembly.

= Conclusion <ch-conclusion>

This work developed eight GCC compiler targets for the simplified RISC-V processors described in the Hennessy--Patterson textbook, addressing the practical barrier that prevented students of PCS3225 at USP from compiling and running C programs on the processors they build. The four specific objectives stated in @ch-intro were met: a minimal target (`rvsc0`) for the eight-instruction Chapter 4.4 processor, a target (`rvsc1`) matching the course homework extension with full C calling convention support, and six progressive targets (`rvsc2` through `rvsc7`) covering the full RV32I-to-RV64IMAFD progression. Every instruction not natively supported by a given target is synthesized from the primitives that target does provide, transparently to the programmer.

== Contributions

The primary contribution is the set of synthesis techniques embedded in the GCC machine description. For the two most restricted targets, rvsc0 and rvsc1, the operations requiring synthesis are those enumerated in @tab-synthesis-cost, ranging from one-instruction replacements (NOT, immediate variants) to variable-length loops (SLL, SRL, SRA), multi-instruction identities (XOR, SLT, SLTU), read-modify-write sequences (LB, LBU, LH, LHU, SB, SH), and call-site code generation (JAL, JMP). The rvsc0 target additionally requires addi/shift-based materialization for LUI, since 32-bit constants cannot otherwise be constructed from the eight available instructions. Each synthesis was derived algebraically and embedded as a `define_expand` in `riscv.md`, so GCC selects and schedules the sequence as part of normal compilation with no programmer intervention.

A secondary contribution is the validation methodology. Two independent test layers were developed and applied: an ISA compliance suite that disassembles with `objdump -M no-aliases` and verifies that no forbidden mnemonic appears --- applied both to every generated object, which bounds the compiler, and to the linked executable, which bounds what the processor is asked to execute --- and a behavioral equivalence suite of self-validating programs that execute rvsc1 and rvsc0 binaries on Spike and check each computed result against the value the C semantics require, reporting any mismatch through the exit code (rvsc1) or the `tohost` token (rvsc0). Together these layers confirm that synthesis is both correct by construction (no forbidden instruction is ever emitted) and correct by execution (the computed results match the values the C semantics require).

== Results Summary

Correctness was established for all synthesis cases exercised by the test suites in rvsc0 and rvsc1. All ISA compliance tests pass; the behavioral tests confirm semantic equivalence on every program executed, including all 8 345 torture-suite combinations that this freestanding target can compile, link and meaningfully run (the 75 it cannot are skipped because they declare a prerequisite it does not provide, or do not compile, for reasons unrelated to the instruction set). Reaching that point required three defects to be fixed --- an unreserved scratch register, an aliasing gap in the sub-word store synthesis, and hand-written `libgcc` assembly that bypassed the instruction restrictions entirely. The first accounted for all but two of the torture suite's 36 execution failures; none of the three was identified by the suites that were failing on them, and the last two were found only by the Embench measurement described above. With all three fixed, all nineteen benchmarks execute correctly. A fourth defect, of the same kind as the third, was found by widening the ISA check from objects to linked binaries: newlib supplied `memset`, `memcpy`, `memmove` and `strcmp` as hand-written assembly, and giving the `rvsc*` triples a newlib machine directory of their own removed it (@sc1-linked-isa). What is left outside the subset in a linked rvsc1 program is the start-up and system-call code that exists only to reach a host the target processor does not have. The rvsc2 target compiles the full Embench-IoT suite with code identical to the upstream GCC 17 baseline (geomean ratio = 1.000), confirming that the custom target configuration introduces no overhead relative to a stock build.

The cost of synthesis was quantified on two axes. Statically, the synthesized rvsc1 target inflates code size by a geometric mean of #sym.times 7.13 over the nineteen Embench benchmarks, with a range from #sym.times 1.42 (`ud`, few inline shifts) to #sym.times 22.16 (`statemate`, comparison-heavy control flow). Dynamically, it inflates retired instruction counts by a geometric mean of #sym.times 22.2 over all nineteen benchmarks, every one of which executes correctly.

For the pedagogical use case, these figures are not a disqualifying limitation. The programs students write in an introductory course fall at the inexpensive end of both distributions. More importantly, the wide spread between workloads makes the cost of each absent instruction concrete and measurable: compiling the same source for rvsc1 and rvsc2 and diffing the assembly output shows exactly how many native instructions a missing `sll` or `sb` expands into.

== Limitations

Synthesis does not apply to targets rvsc2 through rvsc7, these targets expose the full upstream RISC-V backend and require no new synthesis logic. Their correctness depends entirely on the upstream GCC test suite.

The rvsc0 target, unlike rvsc1, cannot execute programs that call and return from functions, because `jalr` is absent. The addi/shift synthesis enables 32-bit constant loading, and unconditional jumps use a PC-relative `beq zero,zero` (neither depends on a constant pool), but programs must still be written as non-returning single functions. This restriction matches the processor it targets, but it means the behavioral test harness that uses HTIF (which requires `jalr` for the call to `main`) cannot be used for rvsc0; rvsc0 programs write their result directly to `tohost` via `sw`.

The synthesized shifts are functionally correct but dynamically expensive to the point of impracticality for programs that shift inside hot loops. The synthesis is inherently sequential, and remains so whether or not the shift amount is known at compile time. When it is not, the GCC machine description expands the shift into a counted loop, which at run time executes one iteration per bit position. When it is, the loop control disappears — the expansion is unrolled into straight-line code — but the instruction count stays linear in the word width, since each bit position still needs its own test-and-merge step: a constant `x >> 1` costs 158 instructions. There is no partial-hardware or table-driven alternative within the instruction set these targets support.

== Future Work

The most direct extension would be further performance optimization within the existing synthesis. Constant-count SRL and SRA are already unrolled to straight-line code, but remain linear in the word width: 158 and 194 instructions in the worst case, because each bit position is extracted and merged individually. A bitmask-and-recombine formulation, moving several bits per step instead of one, could reduce this substantially without any new hardware. The variable-count forms have far more headroom still --- measured at 477 and 669 instructions, roughly three times their unrolled equivalents --- since each of their loop iterations pays 6 instructions, half of them spent re-materializing the back-edge that sc1's missing unconditional jump forces the loop to rebuild on every pass. Making that back-edge cheaper would be worth more than any other single change: it is paid once per bit position in every variable-count shift, and it is the entire difference between rvsc0's loops and rvsc1's.

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

Real compiler output for `shr3` from `tests/sc1/tests/isa/srl.c` (`x >> 3`, so $s=3$, giving $32-3=29$ unrolled extraction steps). The full listing runs to 181 lines, 151 of them instructions, counted from the `shr3:` label through its `ret`, and is reproducible via `rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/srl.c`; the excerpt below shows the setup, the first two extraction steps, and the last, with the identical repeated block elided:

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

Real compiler output for `sra3` from `tests/sc1/tests/isa/sra.c` (`x >> 3`, so $s=3$). The full listing runs to 216 lines, 185 of them instructions, counted from the `sra3:` label through its `ret`, and is reproducible via `rvsc1-unknown-elf-gcc -S -O1 tests/sc1/tests/isa/sra.c`; the excerpt below shows the sign-bit setup, the first extraction step (identical in structure to @apx-srl-const-asm), the elided repeated block, and the unrolled `sign_mask` construction:

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

// ABNT NBR 6023 author-date, matching the official Poli TCC LaTeX template
// (tcc-latex/main.tex loads abntex2cite with the `alf` option).  The style is a
// local copy of Typst's built-in `associacao-brasileira-de-normas-tecnicas` with
// its fixed strings and month names translated to English, since the body of
// this document is in English (see abnt-nbr6023-en.csl).
#bibliography("refs.bib", title: [References], style: "abnt-nbr6023-en.csl")

