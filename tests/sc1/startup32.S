/* Bare-metal HTIF startup for rv32 Spike targets.
 * Assembled by riscv32-none-elf-as (full rv32i), not the restricted custom compiler.
 *
 * After main() returns, dumps machine state to HTIF console before terminating:
 *   a0=XXXXXXXX\n           (main() return value, full 32-bit hex)
 *   mem=XXXXXXXX XXXXXXXX ...\n  (data+bss words, space-separated)
 *
 * HTIF exit protocol: write (exitcode << 1) | 1 to tohost; spike exits with exitcode.
 * HTIF console protocol: lower32=char, upper32=0x01010000 (device=1 cmd=1); ack via fromhost. */

        .section .text.entry
        .globl  _start
_start:
        la      sp, _stack_top
        call    main
        mv      s0, a0                  /* save main() return value */

        /* print "a0=XXXXXXXX\n" */
        la      a0, .Lstr_a0
        call    htif_puts
        mv      a0, s0
        call    htif_print_hex32

        /* print "mem=WORD WORD ...\n" if the data+bss region is non-empty */
        la      a0, __data_start
        la      a1, _end
        bgeu    a0, a1, .Lno_mem
        la      a0, .Lstr_mem
        call    htif_puts
        la      a0, __data_start
        la      a1, _end
        call    htif_dump_words
.Lno_mem:

        /* HTIF exit */
        mv      a0, s0
        slli    a0, a0, 1
        ori     a0, a0, 1
        la      t0, tohost
        sw      a0, 0(t0)
1:      j       1b

.Lstr_a0:  .asciz "a0="
.Lstr_mem: .asciz "mem="

        .align  2       /* ensure following functions are 4-byte aligned */

/* ── htif_putchar ───────────────────────────────────────────────────────────
 * Print character in a0 to HTIF console.
 * Spike ACKs by clearing tohost to 0 after processing the command.
 * Clobbers: t0, t1  (no callee-saved registers used). */
htif_putchar:
        la      t0, tohost
        sw      a0, 0(t0)               /* lower 32: character */
        lui     t1, 0x1010              /* 0x01010000 = device 1, cmd 1 (putchar) */
        sw      t1, 4(t0)               /* upper 32: device/cmd — triggers spike */
.Lputwait:
        lw      t1, 4(t0)               /* poll tohost upper word */
        bne     t1, x0, .Lputwait      /* spin until spike clears it (ACK) */
        ret


/* ── htif_puts ──────────────────────────────────────────────────────────────
 * Print null-terminated string at a0.
 * Saves/restores: ra, s0. */
htif_puts:
        addi    sp, sp, -8
        sw      ra, 4(sp)
        sw      s0, 0(sp)
        mv      s0, a0
.Lputs_loop:
        lbu     a0, 0(s0)
        beq     a0, x0, .Lputs_done
        call    htif_putchar
        addi    s0, s0, 1
        j       .Lputs_loop
.Lputs_done:
        lw      ra, 4(sp)
        lw      s0, 0(sp)
        addi    sp, sp, 8
        ret


/* ── htif_print_hex32_noeol ─────────────────────────────────────────────────
 * Print a0 as exactly 8 hex digits (no newline).
 * Saves/restores: ra, s0, s1. */
htif_print_hex32_noeol:
        addi    sp, sp, -16
        sw      ra, 12(sp)
        sw      s0, 8(sp)
        sw      s1, 4(sp)
        mv      s0, a0
        li      s1, 28                  /* start from most-significant nibble */
.Lhex32_loop:
        srl     a0, s0, s1              /* shift current nibble to bit 0 */
        andi    a0, a0, 0xf
        li      t0, 10
        blt     a0, t0, .Lhex32_digit
        addi    a0, a0, 87              /* 'a' + (nibble - 10): 97 - 10 = 87 */
        j       .Lhex32_emit
.Lhex32_digit:
        addi    a0, a0, 48              /* '0' */
.Lhex32_emit:
        call    htif_putchar
        addi    s1, s1, -4
        bge     s1, x0, .Lhex32_loop   /* loop for shifts 28,24,...,0 (8 nibbles) */
        lw      ra, 12(sp)
        lw      s0, 8(sp)
        lw      s1, 4(sp)
        addi    sp, sp, 16
        ret


/* ── htif_print_hex32 ───────────────────────────────────────────────────────
 * Print a0 as 8 hex digits followed by '\n'.
 * Saves/restores: ra. */
htif_print_hex32:
        addi    sp, sp, -4
        sw      ra, 0(sp)
        call    htif_print_hex32_noeol
        li      a0, '\n'
        call    htif_putchar
        lw      ra, 0(sp)
        addi    sp, sp, 4
        ret


/* ── htif_dump_words ────────────────────────────────────────────────────────
 * Print every 4-byte word in [a0, a1) as "XXXXXXXX " (space after each),
 * followed by a final '\n'.  a0 and a1 must be word-aligned.
 * Saves/restores: ra, s0, s1. */
htif_dump_words:
        addi    sp, sp, -16
        sw      ra, 12(sp)
        sw      s0, 8(sp)
        sw      s1, 4(sp)
        mv      s0, a0                  /* current pointer */
        mv      s1, a1                  /* end pointer */
.Ldump_loop:
        bgeu    s0, s1, .Ldump_done
        lw      a0, 0(s0)
        call    htif_print_hex32_noeol
        li      a0, ' '
        call    htif_putchar
        addi    s0, s0, 4
        j       .Ldump_loop
.Ldump_done:
        li      a0, '\n'
        call    htif_putchar
        lw      ra, 12(sp)
        lw      s0, 8(sp)
        lw      s1, 4(sp)
        addi    sp, sp, 16
        ret


        .section .htif, "aw", @progbits
        .align  6
        .globl  tohost
tohost:   .dword 0
        .globl  fromhost
fromhost: .dword 0
