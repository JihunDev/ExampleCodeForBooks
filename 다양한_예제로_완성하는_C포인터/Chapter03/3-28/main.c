#include <stdio.h>

int main() {
  int iarr[6] = {10, 20, 30, 40, 50, 60};

  printf("%x \n", &iarr[2]);
  printf("%d %d %d %d %d %d \n", iarr[0], iarr[1], iarr[2], iarr[3], iarr[4], iarr[5]);
  printf("%d %d %d %d %d %d \n", (&iarr[2])[-2], (&iarr[2])[-1], (&iarr[2])[0], (&iarr[2])[1],(&iarr[2])[2],(&iarr[2])[3]);

  return 0;
}
