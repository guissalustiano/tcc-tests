/* sc0 behavioral smoke test: NOT synthesis.
   ~x synthesized as: sub rd, x0, rs; addi rd, rd, -1  (i.e. -x - 1)
   All constants are SMALL_OPERAND (-2048..2047). */

int run_test(void) {
    volatile int x = 0;
    if (~x != -1)    return 1;   /* ~0  == -1 */

    volatile int y = -1;
    if (~y != 0)     return 2;   /* ~(-1) == 0 */

    volatile int z = 1;
    if (~z != -2)    return 3;   /* ~1  == -2 */

    volatile int w = -128;
    if (~w != 127)   return 4;   /* ~(-128) == 127 */

    volatile int v = 127;
    if (~v != -128)  return 5;   /* ~127 == -128 */

    /* NOT combined with AND/OR using SMALL_OPERAND values.
       0x0F = 15, 0x33 = 51, results 0x30 = 48, 0x0C = 12. */
    volatile int a = 0x0F, b = 0x33;
    if ((~a & b) != 0x30)  return 6;   /* ~0x0F & 0x33 = 0x30 */
    if ((a & ~b) != 0x0C)  return 7;   /* 0x0F & ~0x33 = 0x0C */
    if ((~a | b)  != -13)  return 8;   /* ~0x0F | 0x33 = 0xFFFFFFF3 = -13 */

    /* Independent cross-check of XOR (compiler synthesizes it as
       (a|b)-(a&b)) against the unrelated identity a^b == (a|b) & ~(a&b) */
    volatile int xr = a ^ b;
    if (xr != ((a | b) & ~(a & b)))  return 9;

    return 0;
}
