#include <stdio.h>

int main() {
  int iarr[4] = {10, 20, 30, 40};
  int *ip = iarr;

  printf("%d %d %d %d \n", iarr[0], iarr[1], iarr[2], iarr[3]);
  printf("%d %d %d %d \n", ip[0], ip[1], ip[2], ip[3]);

  return 0;
}
