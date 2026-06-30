#include <stdint.h>
#include <sys/stat.h>

extern volatile uint32_t tohost[];
extern char __data_start[], _end[];

static void htif_putchar(unsigned char c)
{
    volatile uint32_t *th = tohost;
    th[0] = c;
    th[1] = 0x01010000;
    while (th[1])
        ;
}

static void print_str(const char *s)
{
    while (*s)
        htif_putchar((unsigned char)*s++);
}

static void print_hex32(uint32_t v)
{
    for (int shift = 28; shift >= 0; shift -= 4) {
        unsigned n = (v >> shift) & 0xf;
        htif_putchar(n < 10 ? '0' + n : 'a' + n - 10);
    }
}

int _write(int fd, const char *buf, int len)
{
    (void)fd;
    for (int i = 0; i < len; i++)
        htif_putchar((unsigned char)buf[i]);
    return len;
}

void _exit(int code)
{
    print_str("a0=");
    print_hex32((uint32_t)code);
    htif_putchar('\n');
    if (__data_start < _end) {
        print_str("mem=");
        for (uint32_t *p = (uint32_t *)(void *)__data_start;
             p < (uint32_t *)(void *)_end; p++) {
            print_hex32(*p);
            htif_putchar(' ');
        }
        htif_putchar('\n');
    }
    volatile uint32_t *th = tohost;
    th[0] = ((uint32_t)(unsigned)code << 1) | 1;
    while (1)
        ;
}

int _read(int fd, char *buf, int len)       { (void)fd; (void)buf; (void)len; return -1; }
int _close(int fd)                          { (void)fd; return -1; }
int _lseek(int fd, int off, int whence)     { (void)fd; (void)off; (void)whence; return -1; }
int _fstat(int fd, struct stat *st)         { (void)fd; (void)st; return -1; }
int _isatty(int fd)                         { (void)fd; return 1; }
int _kill(int pid, int sig)                 { (void)pid; (void)sig; return -1; }
int _getpid(void)                           { return 1; }
