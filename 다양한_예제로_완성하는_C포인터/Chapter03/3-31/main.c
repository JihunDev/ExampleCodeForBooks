#include <stdio.h>

int main() {
  int iarr2[2][3] = {10, 20, 30, 40, 50, 60};

  printf("%x \n", iarr2);
  printf("%d %d %d %d %d %d \n", iarr2[0][0], iarr2[0][1], iarr2[0][2], iarr2[1][0], iarr2[1][1], iarr2[1][2]);
  printf("%d %d %d %d %d %d \n", *iarr2[0], *(iarr2[0] + 1), *(iarr2[0] + 2), *iarr2[1], *(iarr2[1] + 1), *(iarr2[1] + 2));
  printf("%d %d %d %d %d %d \n", **iarr2, *(*iarr2 + 1), *(*iarr2 + 2), **(iarr2 + 1), *(*(iarr2 + 1) + 1), *(*(iarr2 + 1) + 2));

  return 0;
}
