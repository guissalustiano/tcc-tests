/* sc0 behavioral smoke test: loops combining branch synthesis + arithmetic.
   Exercises beq/bne/blt counters.  All values stay SMALL_OPERAND. */

int run_test(void) {
    /* ---- ascending for-loop: sum 1+2+…+10 = 55 ---- */
    volatile int sum = 0;
    volatile int i;
    for (i = 1; i <= 10; i++)
        sum = sum + i;
    if (sum != 55)  return 1;

    /* ---- countdown while-loop: 1 << 8 via doublings ---- */
    volatile int n = 8;
    volatile int acc = 1;
    while (n > 0) {
        acc = acc + acc;
        n = n - 1;
    }
    if (acc != 256)  return 2;   /* 256 = SMALL_OPERAND */

    /* ---- do-while: multiply 3 × 7 via repeated addition ---- */
    volatile int mul = 0;
    volatile int k = 7;
    do {
        mul = mul + 3;
        k = k - 1;
    } while (k > 0);
    if (mul != 21)  return 3;

    /* ---- nested loops: 4 × 5 iterations ---- */
    volatile int count = 0;
    volatile int r;
    for (r = 0; r < 4; r++) {
        volatile int c;
        for (c = 0; c < 5; c++)
            count = count + 1;
    }
    if (count != 20)  return 4;

    return 0;
}
