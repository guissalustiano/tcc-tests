/* sc0 behavioral smoke test: bne, blt, bge, bltu, bgeu synthesis.
   Ordered comparisons are synthesized via slt/sltu + beq chains. */

int run_test(void) {
    volatile int  a  = 5, b  = 10;
    volatile unsigned ua = 5, ub = 10;

    /* bne synthesis */
    if (a == b)    return 1;
    if (!(a != b)) return 2;

    /* blt / bge synthesis (signed) */
    if (!(a < b))  return 3;
    if (a >= b)    return 4;
    if (b < a)     return 5;
    if (!(b >= a)) return 6;

    /* bltu / bgeu synthesis (unsigned) */
    if (!(ua < ub))  return 7;
    if (ua >= ub)    return 8;
    if (ub < ua)     return 9;
    if (!(ub >= ua)) return 10;

    return 0;
}
