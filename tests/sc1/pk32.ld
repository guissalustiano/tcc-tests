OUTPUT_ARCH("riscv")
ENTRY(_start)

SECTIONS
{
    . = 0x10000;

    .text   : { *(.text .text.*) }
    .rodata : { *(.rodata .rodata.*) }

    .data : {
        *(.data .data.*)
        *(.sdata .sdata.*)
    }

    /* global pointer: must be within ±2KB of small data */
    PROVIDE(__global_pointer$ = . + 0x800);

    .bss : {
        __bss_start = .;
        *(.sbss .sbss.*)
        *(.bss .bss.*)
        *(COMMON)
        . = ALIGN(4);
        _end = .;
    }
}
