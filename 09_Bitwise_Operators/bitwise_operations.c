#include <stdio.h>

int main(void)
{
    unsigned char a = 0x0A;  // 00001010
    unsigned char b = 0x03;  // 00000011

    printf("a & b = 0x%02X\n", (unsigned int)(a & b));
    printf("a | b = 0x%02X\n", (unsigned int)(a | b));
    printf("a ^ b = 0x%02X\n", (unsigned int)(a ^ b));
    printf("a << 1 = 0x%02X\n", (unsigned int)(a << 1));
    printf("a >> 1 = 0x%02X\n", (unsigned int)(a >> 1));

    return 0;
}
