int results[6];

int main(void) {
    int a = 0xAA55FF00, b = 0x12345678;
    results[0] = a ^ b;
    results[1] = a | 0x0F0F;
    results[2] = a & 0xFF00;
    results[3] = ~a;
    results[4] = (a | b) & ~(a & b);   /* xor via De Morgan */
    results[5] = a ^ -1;               /* complement via xor */
    return results[0] ^ results[4];
}
