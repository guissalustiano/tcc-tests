/* sc0 behavioral smoke test: lb, lbu, lh, lhu, sb, sh synthesis.
   All synthesis paths use lw+shift+mask.  Stack-allocated buffers only
   — global variables are unusable at 0x80000000 (pool would be out of
   x0 range).  All constants are SMALL_OPERAND (-2048..2047).
   Volatile indices prevent GCC from folding bit-offsets at compile time
   (which would produce non-SMALL_OPERAND mask constants). */

int run_test(void) {
    /* ---- sb / lb / lbu ---- */
    volatile unsigned int word = 0;
    volatile unsigned char *bp = (volatile unsigned char *)&word;

    /* Use volatile indices so the byte position is runtime-unknown;
       this keeps the mask (0xFF << bit_off) as a runtime SLL expression
       rather than a compile-time non-SMALL_OPERAND constant.  */
    volatile int i0 = 0, i1 = 1, i2 = 2, i3 = 3;

    bp[i0] = 0x12;
    bp[i1] = 0x34;
    bp[i2] = 0x56;
    bp[i3] = 0x78;
    if (bp[i0] != 0x12u) return 1;
    if (bp[i1] != 0x34u) return 2;
    if (bp[i2] != 0x56u) return 3;
    if (bp[i3] != 0x78u) return 4;

    /* lb sign extension: 0xFC (252) → -4 as signed char */
    bp[i0] = 0xFC;
    if ((signed char)bp[i0] != -4)     return 5;
    if ((unsigned char)bp[i0] != 252u) return 6;

    /* 0x80 (128) → -128 as signed char */
    bp[i0] = 0x80;
    if ((signed char)bp[i0] != -128)   return 7;

    /* ---- sh / lh / lhu ---- */
    volatile unsigned int word2 = 0;
    volatile unsigned short *hp = (volatile unsigned short *)&word2;
    volatile int j0 = 0, j1 = 1;

    /* positive halfword */
    hp[j0] = 0x7FF;  /* 2047 = SMALL_OPERAND */
    if ((unsigned short)hp[j0] != 0x7FFu) return 8;
    if ((signed short)hp[j0]   != 0x7FF)  return 9;

    /* negative halfword: 0xFFFF → sign-extends to -1.
       The comparison uses a volatile int intermediary so GCC compares the
       sign-extended 32-bit value with -1 (SMALL_OPERAND) rather than
       transforming it to (unsigned short)x != 65535 (non-SMALL_OPERAND → pool). */
    hp[j0] = (unsigned short)(-1);
    volatile int sv0 = (int)(signed short)hp[j0];
    if (sv0 != -1) return 10;

    hp[j1] = 0x100;  /* 256 */
    if ((unsigned short)hp[j1] != 0x100u) return 11;

    /* ---- round-trip: sb then lb gives back the same byte ---- */
    volatile unsigned int word3 = 0;
    volatile unsigned char *cp = (volatile unsigned char *)&word3;
    volatile int k0 = 0, k1 = 1, k2 = 2, k3 = 3;
    cp[k0] = 0x11;   cp[k1] = 0x22;   cp[k2] = 0x33;   cp[k3] = 0x44;
    if (cp[k0] != 0x11u) return 12;
    if (cp[k1] != 0x22u) return 13;
    if (cp[k2] != 0x33u) return 14;
    if (cp[k3] != 0x44u) return 15;

    return 0;
}
