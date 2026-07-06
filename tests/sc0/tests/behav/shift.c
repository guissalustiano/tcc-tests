/* sc0 behavioral smoke test: sll, srl, sra synthesis.
   SLL(const): N × (add rd,rd,rd)
   SLL(var):   beq countdown loop of add self
   SRL/SRA:    ~170-instruction bit-extraction loop
   All constants are SMALL_OPERAND (-2048..2047). */

int run_test(void) {
    volatile int x = 1;

    /* ---- SLL constant ---- */
    if ((x << 1) != 2)    return 1;
    if ((x << 3) != 8)    return 2;
    if ((x << 8) != 256)  return 3;

    /* ---- SLL variable ---- */
    volatile int sh = 4;
    if ((x << sh) != 16)  return 4;
    sh = 0;
    if ((x << sh) != 1)   return 5;

    /* ---- SRL (unsigned) ---- */
    volatile unsigned u = 0x80u;   /* 128 = SMALL_OPERAND */
    if ((u >> 1) != 64u)  return 6;
    if ((u >> 3) != 16u)  return 7;
    volatile int sv = 3;
    if ((u >> sv) != 16u) return 8;

    /* SRL must zero-extend, not sign-extend */
    volatile unsigned u2 = 0x400u; /* 1024 = SMALL_OPERAND */
    if ((u2 >> 4) != 64u) return 9;

    /* ---- SRA (signed) ---- */
    volatile int neg = -16;
    if ((neg >> 1) != -8)   return 10;
    if ((neg >> 2) != -4)   return 11;
    volatile int sv2 = 2;
    if ((neg >> sv2) != -4) return 12;

    /* SRA must sign-extend: shifting -1 by any amount stays -1 */
    volatile int minus1 = -1;
    volatile int sv3 = 7;
    if ((minus1 >> 1)   != -1) return 13;
    if ((minus1 >> sv3) != -1) return 14;

    return 0;
}
