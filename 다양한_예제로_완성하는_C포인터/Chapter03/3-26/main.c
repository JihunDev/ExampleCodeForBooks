#include <stdio.h>

int main() {
  int iarr3[2][3][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  printf("%x \n", iarr3);
  printf("%x %x \n", iarr3[0], iarr3[1]);
  printf("%x %x %x %x \n", iarr3[0][0], iarr3[0][1], iarr3[1][0], iarr3[1][1]);
  printf("%x %x %x %x \n", &iarr3[0][0][0], &iarr3[0][1][0], &iarr3[1][0][0], &iarr3[1][1][0]);
  printf("%x %x %x %x \n", iarr3[0][0][0], iarr3[0][1][0], iarr3[1][0][0], iarr3[1][1][0]);

  return 0;
}
