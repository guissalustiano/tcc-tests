/* sc0 behavioral test entry point.
   Defines tohost/fromhost for Spike HTIF exit detection, sets up sp and gp,
   calls the C function  int run_test(void)  defined in each test file, then
   converts the return value to an HTIF exit token and writes it to tohost.

   HTIF protocol: write (exit_code << 1) | 1 to tohost.
     exit_code == 0  (token == 1) → Spike exits 0 (PASS)
     exit_code == N  (token == 2N+1) → Spike exits N (FAIL) */

        .section .htif, "aw", @progbits
        .align  3
        .globl  tohost
tohost:   .dword  0
        .globl  fromhost
fromhost: .dword  0

        .section .text.entry, "ax", @progbits
        .globl  _start
_start:
        /* Stack pointer: top of the reserved stack region. */
        lui     sp, %hi(_stack_top)
        addi    sp, sp, %lo(_stack_top)

        /* Global pointer for GP-relative small-data access. */
        .option push
        .option norelax
        la      gp, __global_pointer$
        .option pop

        /* Call C test — a0 = 0 pass, != 0 fail code. */
        jal     ra, run_test

        /* Translate: pass → token 1 (exit 0), fail N → token (N<<1)|1. */
        beq     a0, zero, .Lpass
        slli    a0, a0, 1
        ori     a0, a0, 1
        j       .Lwrite
.Lpass:
        addi    a0, zero, 1

.Lwrite:
        lui     t0, %hi(tohost)
        addi    t0, t0, %lo(tohost)
        sw      a0, 0(t0)
.Lspin:
        beq     zero, zero, .Lspin
