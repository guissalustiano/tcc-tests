OUTPUT_ARCH("riscv")
ENTRY(_start)

SECTIONS
{
    . = 0x80000000;

    .text.entry : { *(.text.entry) }
    .text       : { *(.text .text.*) }
    .rodata     : { *(.rodata .rodata.*) }

    /* Pin data to a fixed address so ref and sc1 ELFs are byte-comparable
     * even when synthesis produces a larger .text section. */
    . = 0x80100000;
    .data       : {
        __data_start = .;
        *(.data .data.*)
        *(.sdata .sdata.*)
    }

    .bss        : {
        *(.sbss .sbss.*)
        *(.bss .bss.*)
        *(COMMON)
        . = ALIGN(4);
        _end = .;
    }

    . = ALIGN(16);
    _stack_bottom = .;
    . = . + 0x10000;    /* 64 KiB stack */
    _stack_top = .;

    .htif       : { *(.htif) }
}
