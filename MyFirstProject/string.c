#include <stdio.h>

int32_t main(void) {

  char fruit_name[40];
  printf("WHat is your favorite fruit?\n");
  scanf("%s", fruit_name);

  printf("You like %s\n!", fruit_name);
  return 0;
}
