        .section .text.entry
        .globl  _start
_start:
        la      sp, _stack_top
        call    main
        tail    _exit

        .section .htif, "aw", @progbits
        .align  6
        .globl  tohost
tohost:   .dword 0
        .globl  fromhost
fromhost: .dword 0
