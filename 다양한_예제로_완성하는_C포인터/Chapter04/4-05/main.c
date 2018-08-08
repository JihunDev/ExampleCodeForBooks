#include <stdio.h>

int main() {
  int iarr[4] = {10, 20, 30, 40};
  int *ip = iarr;

  printf("%d %d \n", sizeof(iarr), sizeof(ip));

  return 0;
}
