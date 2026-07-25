/* sc0 behavioral smoke test: lui synthesis (large 32-bit constants).
   Synthesized via addi/add: the would-be lui immediate is split into two
   10-bit halves and built with shifts, then combined with any remaining
   addi-sized low bits — no lui, no memory access, so this is correct
   regardless of where the program is loaded (Spike loads bare-metal
   binaries at 0x80000000, well outside the old constant-pool's valid
   range).  Volatile locals prevent GCC from folding the comparisons away
   at compile time. */

int run_test(void) {
    /* Clean case: low 12 bits already zero. */
    volatile unsigned a = 0xABCD0000u;
    if (a != 0xABCD0000u) return 1;

    /* Negative, also a clean case. */
    volatile int b = -65536;             /* 0xFFFF0000 */
    if (b != -65536) return 2;

    volatile unsigned c = 0x12345000u;
    if (c != 0x12345000u) return 3;

    /* General case: nonzero low 12 bits, needs a trailing addi. */
    volatile unsigned d = 0x12345678u;
    if (d != 0x12345678u) return 4;

    volatile int e = (int)0x80000000u;   /* INT32_MIN */
    if (e != (int)0x80000000u) return 5;

    /* Combine two large constants to cross-check the synthesis. */
    volatile unsigned f = a - c;
    if (f != (0xABCD0000u - 0x12345000u)) return 6;

    return 0;
}
