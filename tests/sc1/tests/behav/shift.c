int main(void) {
    /* constant-count shifts */
    if ((1 << 3) != 8)                         return 1;
    if ((1 << 15) != 32768)                    return 2;
    if (((unsigned)0xFFFF0000u >> 16) != 0xFFFFu) return 3;  /* logical right shift */
    if ((-1 >> 4) != -1)                       return 4;  /* arithmetic: sign propagates */
    if ((-16 >> 4) != -1)                      return 5;
    /* variable-count shifts */
    int n = 5;
    if ((1 << n) != 32)                        return 6;
    if (((unsigned)(-1) >> n) != 0x07FFFFFFu)  return 7;  /* logical */
    if ((-32 >> n) != -1)                      return 8;  /* arithmetic */
    return 0;
}
