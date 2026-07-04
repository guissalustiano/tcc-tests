int main(void) {
    int a = 0xAA55FF00, b = 0x12345678;
    if ((a ^ b) != (int)0xB861A978)       return 1;
    if ((a | 0x0F0F) != (int)0xAA55FF0F) return 2;
    if ((a & 0xFF00) != 0x0000FF00)       return 3;
    if (~a != (int)0x55AA00FF)            return 4;
    if (((a | b) & ~(a & b)) != (a ^ b)) return 5;  /* XOR via De Morgan */
    if ((a ^ -1) != ~a)                   return 6;  /* complement via xor */
    return 0;
}
