#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int32_t main(void) {

  int a = 0;

  unsigned int int_size1 = sizeof a;
  unsigned int int_size2 = sizeof(int);
  unsigned int int_size3 = sizeof(a);

  size_t int_size4 = sizeof(a);
  size_t float_size = sizeof(float);

  printf("Size of int type is %u bytes.\n", int_size1);
  printf("Size of int type is %zu bytes.\n", int_size4);
  printf("Size of int type is %zu bytes.\n", float_size);

  int int_arr[30];
  int *int_ptr = NULL;
  int_ptr = (int *)malloc(sizeof(int) * 30);

  printf("Size of array = %zu bytes\n", sizeof(int_arr));
  printf("Size of array = %zu bytes\n", sizeof(int_ptr));

  free(int_ptr);
}
