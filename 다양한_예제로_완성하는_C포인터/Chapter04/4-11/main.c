#include <stdio.h>

int main() {
  char carr[4] = {'A', 'B', 'C', 'D'};
  char (*ap)[2] = (char(*)[2]) carr;
  printf("%d %d \n", sizeof(carr), sizeof(ap));

  printf("%x %x \n", carr, ap);

  printf("%x %x \n", ap, ap[0]);
  printf("%x %x \n", ap + 1, ap[0] + 1);
  
  return 0;
}
