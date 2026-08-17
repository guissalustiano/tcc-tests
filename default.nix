{ pkgs ? import <nixpkgs> {} }:

let
  # Expose riscv32-none-elf-gcc for behavioral tests without adding it to
  # nativeBuildInputs — that would override CC/CXX and break GCC configure.
  riscv32GCC = pkgs.pkgsCross.riscv32-embedded.buildPackages.gcc;

  # Proxy kernel for Spike: pk is a RISC-V ELF (not a host binary) that Spike
  # loads as a mini OS.  It uses rv32imafdc internally, so Spike must be invoked
  # with --isa=rv32imac_zicsr_zifencei (or broader).  User programs compiled
  # with the sc1 toolchain only emit sc1-subset instructions regardless; ISA
  # compliance is verified separately by torture_isa.py.
  pk-rv32 = pkgs.pkgsCross.riscv32-embedded.riscv-pk;

  # LaTeX for tcc-latex/, the abntex2 edition of the document.  The medium
  # scheme plus the nine packages abntex2 and this document add on top of it: a
  # full scheme is several gigabytes for the sake of those nine.  The abntex2
  # class itself is not from CTAN here — the .cls and .sty live in tcc-latex/.
  #
  # To find what a new \usepackage needs, build once against a full scheme and
  # read the recorder output:
  #   nix-shell -p texliveFull --run 'pdflatex -recorder main.tex' && \
  #     grep '^INPUT' main.fls | grep texmfdist/tex/ | cut -d/ -f6 | sort -u
  # then add whichever names below are missing.
  tex = pkgs.texliveMedium.withPackages (ps: with ps; [
    latexmk                                       # drives the pdflatex/bibtex loop
    enumitem relsize xpatch textcase              # required by abntex2.cls
    pdfpages eso-pic pdflscape                    # ficha catalográfica, landscape floats
    hyphenat                                      # line breaks inside \texttt paths
  ]);
in

pkgs.mkShell {
  name = "gcc-rvsc";
  hardeningDisable = [ "format" ];

  nativeBuildInputs = with pkgs; [
    # Build tools
    gcc
    gnumake
    flex
    bison
    texinfo
    perl
    (python3.withPackages (ps: with ps; [ pyelftools ]))
    gettext
    pkg-config
    autoconf
    automake
    m4
    libtool
    gperf

    # GCC prerequisites
    gmp
    gmp.dev
    mpfr
    mpfr.dev
    libmpc
    isl
    zstd

    # Other deps (zlib for --with-system-zlib)
    zlib
    zlib.dev

    # Build runner
    just

    # Embench-IoT benchmark harness (code-size measurement)
    scons

    # Binary analysis: assemble + disassemble for binary instruction check
    pkgsCross.riscv32-embedded.buildPackages.binutils  # riscv32-none-elf-as/objdump
    pkgsCross.riscv64-embedded.buildPackages.binutils  # riscv64-none-elf-as/objdump

    # Spike-based behavioral tests: assemble, link, and run synthesized code
    # Note: riscv{32,64}-none-elf-as and -ld come from the binutils entries above.
    # Do NOT add pkgsCross.riscvXX-embedded.buildPackages.gcc here — it overrides
    # CC/CXX in the shell and breaks this project's own GCC configure runs.
    spike                                               # RISC-V ISA simulator
    dtc                                                 # device tree compiler (required by spike)

    # Document
    typst
    liberation_ttf
    tex          # tcc-latex/: pdflatex, bibtex, makeindex, latexmk
  ];

  shellHook = ''
    echo "GCC RISC-V (sc0–sc7) dev shell"
    echo "Build dirs: /home/salust/p/build-rv-sc{0..7}"
    echo "Source dir: /home/salust/p/gcc"
    export TYPST_FONT_PATHS="${pkgs.liberation_ttf}/share/fonts/truetype"
    export PATH="${riscv32GCC}/bin:$PATH"
    export PK="${pk-rv32}/bin/pk"
  '';
}
