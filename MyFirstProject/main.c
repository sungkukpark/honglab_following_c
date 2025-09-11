#include <stdint.h>
#include <stdio.h>

size_t _strlen(char *str)
{
    size_t length = 0;
    while (str[length] != '\0')
    {
        ++length;
    }
    return length;
}

int32_t main(void)
{
    char one[2] = "1";
    printf("%s (%zu)\n", one, _strlen(one));

    char array[11] = "0123456789";
    printf("%s (%zu)\n", array, _strlen(array));
}
