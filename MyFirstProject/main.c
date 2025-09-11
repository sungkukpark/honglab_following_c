#include <stdint.h>
#include <stdio.h>

size_t _strlen(char *one)
{
    size_t length = 0;
    for (size_t i = 0; i < sizeof(one); ++i)
    {
        if (one[i] == '\0')
        {
            return length;
        }

        ++length;
    }
}

int32_t main(void)
{
    char one[2] = "1";
    printf(one);

    printf("%zu", _strlen(one));
}
