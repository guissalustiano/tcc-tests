/* sc0 behavioral smoke test: add, sub, addi, and, or, not synthesis.
   All values are SMALL_OPERAND (-2048..2047) — no constant pool needed. */

int run_test(void) {
    volatile int a = 3, b = 4;

    if (a + b != 7)   return 1;
    if (b - a != 1)   return 2;
    if (a & b)        return 3;   /* 3 & 4 == 0 */
    if ((a | b) != 7) return 4;   /* 3 | 4 == 7 */

    /* NOT synthesis: ~x == -x - 1 == sub x0,x; addi -1 */
    if ((int)(~a) != -4)  return 5;   /* ~3 == -4 */
    if ((int)(~b) != -5)  return 6;   /* ~4 == -5 */

    return 0;
}
