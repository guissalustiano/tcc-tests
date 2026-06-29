int results[8];

static int clamp(int v, int lo, int hi) {
    if (v < lo) return lo;
    if (v > hi) return hi;
    return v;
}

int main(void) {
    results[0] = clamp(-5, 0, 10);
    results[1] = clamp(7, 0, 10);
    results[2] = clamp(15, 0, 10);
    results[3] = (3 != 4) ? 1 : 0;
    results[4] = (-1 < 0) ? 1 : 0;
    results[5] = (0u - 1u > 0u) ? 1 : 0;  /* unsigned comparison */
    results[6] = (10 >= 10) ? 1 : 0;
    results[7] = (9 <= 8) ? 1 : 0;
    return results[0] + results[1] + results[2];
}
