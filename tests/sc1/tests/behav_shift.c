int results[6];

int main(void) {
    int x = 0x12345678;
    results[0] = x << 3;
    results[1] = x << 7;
    int y = -256;
    results[2] = (unsigned)y >> 4;
    results[3] = y >> 4;
    int n = 5;
    results[4] = x << n;
    results[5] = (unsigned)x >> n;
    return results[0] ^ results[3];
}
