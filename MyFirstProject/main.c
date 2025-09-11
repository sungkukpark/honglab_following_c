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
    int num = 1;
    printf("%d (1)\n", num);

    int num_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size_of_num_array = sizeof(num_array) / sizeof(int);
    for (size_t i = 0; i < size_of_num_array; ++i)
    {
        printf("%d ", num_array[i]);
    }
    printf("(%zu) \n", size_of_num_array);

    char one[2] = "1";
    printf("%s (%zu)\n", one, _strlen(one));

    char array[11] = "0123456789";
    printf("%s (%zu)\n", array, _strlen(array));
}
