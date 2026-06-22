unsigned char bytes[8];
unsigned short halves[4];
int words[4];

int main(void) {
    /* byte stores and loads */
    bytes[0] = 0xAB;
    bytes[1] = 0x7F;
    bytes[2] = 0x80;   /* sign bit set */
    bytes[3] = 0xFF;

    /* half-word stores and loads */
    halves[0] = 0x1234;
    halves[1] = 0x8000;  /* sign bit set */
    halves[2] = 0xFFFF;
    halves[3] = 0x0001;

    /* read back as signed and unsigned */
    words[0] = (signed char)bytes[2];    /* should be negative */
    words[1] = (unsigned char)bytes[2];  /* should be 0x80 */
    words[2] = (signed short)halves[1];  /* should be -32768 */
    words[3] = (unsigned short)halves[1];/* should be 0x8000 */

    return words[0] + words[2];
}
