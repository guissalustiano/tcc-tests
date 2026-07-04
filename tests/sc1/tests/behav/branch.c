static int clamp(int v, int lo, int hi) {
    if (v < lo) return lo;
    if (v > hi) return hi;
    return v;
}

int main(void) {
    if (clamp(-5, 0, 10) != 0)   return 1;
    if (clamp(7, 0, 10) != 7)    return 2;
    if (clamp(15, 0, 10) != 10)  return 3;
    if ((3 != 4) != 1)           return 4;
    if (!(-1 < 0))               return 5;
    if (!(0u - 1u > 0u))         return 6;
    if (!(10 >= 10))             return 7;
    if (9 <= 8)                  return 8;
    return 0;
}
