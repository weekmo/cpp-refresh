#include <cstdint>
#include <cstdio>

const char *u8_to_bstr(const uint8_t &u8)
{
    static char s[9];
    s[8] = 0;
    char *sp = s;
    for (uint8_t xbit = 0b10000000; xbit > 0; xbit >>= 1)
    {
        *(sp++) = ((u8 & xbit) == xbit) ? '1' : '0';
    }
    return s;
}
