OUTPUT_ARCH("riscv")
ENTRY(_start)

SECTIONS
{
    . = 0x80000000;

    /* HTIF control words — entry.S writes exit token here via lui+sw. */
    .htif       : { *(.htif) }

    .text       : { *(.text.entry) *(.text .text.*) }
    .rodata     : { *(.rodata .rodata.*) }

    /* Pin data/bss to a fixed address so pool and GP offsets are stable. */
    . = 0x80100000;
    .data       : {
        *(.data .data.*)
        *(.sdata .sdata.*)
    }
    PROVIDE(__global_pointer$ = . + 0x800);
    .bss        : {
        *(.sbss .sbss.*)
        *(.bss  .bss.*)
        *(COMMON)
        . = ALIGN(4);
        _end = .;
    }

    . = ALIGN(16);
    _stack_bottom = .;
    . += 0x4000;        /* 16 KiB stack */
    _stack_top = .;
}
