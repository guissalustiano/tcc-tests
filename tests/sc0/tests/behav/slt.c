/* sc0 behavioral smoke test: slt/sltu synthesis.
   All constants are SMALL_OPERAND (-2048..2047).
   INT_MIN/INT_MAX comparisons avoided (they are LUI_OPERAND → pool).
   Negative unsigned wrap-around uses volatile to prevent constant folding. */

int run_test(void) {
    volatile int a = -1, b = 1;

    /* slt: signed less-than */
    if (!(a < b))   return 1;   /* -1 < 1 */
    if (a > b)      return 2;   /* -1 not > 1 */
    if (!(b > a))   return 3;   /* 1 > -1 */
    if (!(a <= a))  return 4;   /* equal: -1 <= -1 */
    if (!(b >= b))  return 5;   /* equal: 1 >= 1 */
    if (!(0 < b))   return 6;   /* 0 < 1 */
    if (!(a < 0))   return 7;   /* -1 < 0 */

    /* sltu: unsigned less-than.
       (unsigned)(-1) == 4294967295, which wraps above any small positive.  */
    volatile unsigned ua = 5, ub = 10;
    if (!(ua < ub))   return 8;   /* 5 < 10 */
    if (!(ub > ua))   return 9;   /* 10 > 5 */
    if (!(ua <= ua))  return 10;  /* equal */
    if (!(ub >= ub))  return 11;  /* equal */

    /* unsigned: wrapping negative is larger than any positive small value */
    volatile unsigned big = (unsigned)(-4);   /* 0xFFFFFFFC */
    if (!(ub < big))  return 12;  /* 10 < 0xFFFFFFFC */
    if (!(big > ub))  return 13;

    return 0;
}
