#include <stdio.h>

int main () {
  int iarr1[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int iarr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  printf("%d %d\n", sizeof(iarr1), sizeof(iarr2));
  printf("%d %d %d\n", sizeof(iarr2[0]), sizeof(iarr2[1]), sizeof(iarr2[2]));


  return 0;
}
