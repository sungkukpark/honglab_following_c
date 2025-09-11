#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

void itoa(unsigned int value, char *str)
{
    for (unsigned long i = 0; i < 32; i++)
    {
        str[i] = (value >> i) & 1 ? '1' : '0';
    }
    str[32] = '\0';
}

int main(void)
{
    unsigned int u_max = UINT_MAX;
    // uint8_t u_max = 255;

    // i to binary representation
    char buffer[33];
    itoa(u_max + 1, buffer);
    printf("Binary: %s\n", buffer);
    printf("%u", u_max + 1);
    return 0;
}
