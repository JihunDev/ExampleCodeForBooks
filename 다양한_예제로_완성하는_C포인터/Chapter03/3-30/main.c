#include <stdio.h>

int main () {
  int iarr2[2][3] = {10, 20, 30, 40, 50, 60};

  printf("%x \n", iarr2);
  printf("%x %x %x %x %x %x \n", &iarr2[0][0], &iarr2[0][1], &iarr2[0][2], &iarr2[1][0], &iarr2[1][1], &iarr2[1][2]);
  printf("%x %x %x %x %x %x \n", &iarr2[0][0], &iarr2[0][1], &iarr2[0][2], &iarr2[0][3], &iarr2[0][4], &iarr2[0][5]);
  printf("%x %x %x %x %x %x \n", &iarr2[1][-3], &iarr2[1][-2], &iarr2[1][-1], &iarr2[1][0], &iarr2[1][1], &iarr2[1][2]);
  printf("==================================== \n");
  printf("%x %x %x %x %x %x \n", iarr2[0], iarr2[0] + 1, iarr2[0] + 2, iarr2[0], iarr2[1] + 1, iarr2[1] + 2);
  printf("%x %x %x %x %x %x \n", iarr2[0], iarr2[0] + 1, iarr2[0] + 2, iarr2[0] + 3, iarr2[0] + 4, iarr2[0] + 5);
  printf("%x %x %x %x %x %x \n", iarr2[1] - 3, iarr2[1] - 2, iarr2[1] - 1, iarr2[1], iarr2[1] + 1, iarr2[1] + 2);

  return 0;
}
