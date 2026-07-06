/* sc0 behavioral smoke test: xor, andi, ori synthesis.
   XOR synthesized via De Morgan: ~(a&b) & (a|b).
   ANDI/ORI: li tmp, imm; and/or rd, rs, tmp  */

int run_test(void) {
    volatile int a = 0x0F, b = 0x33;  /* 15, 51 — both SMALL_OPERAND */

    /* ---- XOR ---- */
    if ((a ^ b) != 0x3C)  return 1;   /* 0x0F ^ 0x33 = 0x3C */
    if ((a ^ a) != 0)     return 2;   /* x ^ x == 0 */
    if ((a ^ 0) != a)     return 3;   /* x ^ 0 == x */
    if ((b ^ b) != 0)     return 4;

    /* ---- AND with immediate (andi synthesis) ---- */
    volatile int c = 0x7F;
    if ((c & 0x0F) != 0x0F)  return 5;
    if ((c & 0x70) != 0x70)  return 6;
    if ((c & 0)    != 0)     return 7;

    /* ---- OR with immediate (ori synthesis) ---- */
    volatile int d = 0x10;
    if ((d | 0x0F) != 0x1F)  return 8;
    if ((d | 0)    != d)     return 9;

    /* ---- XOR with negative numbers ---- */
    volatile int e = -1;     /* 0xFFFFFFFF */
    volatile int f = -1;
    if ((e ^ f) != 0)   return 10;
    if ((e ^ 0) != -1)  return 11;

    return 0;
}
