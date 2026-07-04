unsigned char bytes[8];
unsigned short halves[4];

int main(void) {
    bytes[0] = 0xAB;
    bytes[1] = 0x7F;
    bytes[2] = 0x80;
    bytes[3] = 0xFF;
    halves[0] = 0x1234;
    halves[1] = 0x8000;
    halves[2] = 0xFFFF;
    halves[3] = 0x0001;

    if (bytes[0] != 0xAB)                    return 1;
    if (bytes[3] != 0xFF)                    return 2;
    if ((signed char)bytes[2] != -128)       return 3;
    if ((unsigned char)bytes[2] != 0x80)     return 4;
    if (halves[2] != 0xFFFF)                 return 5;
    if ((signed short)halves[1] != -32768)   return 6;
    if ((unsigned short)halves[1] != 0x8000) return 7;
    return 0;
}
