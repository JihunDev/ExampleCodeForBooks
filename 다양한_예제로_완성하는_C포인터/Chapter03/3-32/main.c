#include <stdio.h>

int main() {
  int iarr2[2][3] = {10, 20, 30, 40, 50, 60};

  printf("%x \n", iarr2);
  printf("%d %d %d %d %d %d \n", iarr2[0][0], iarr2[0][1], iarr2[0][2], iarr2[1][0], iarr2[1][1], iarr2[1][2]);
  printf("%d %d %d %D %d %D \n", *((int*)0xe95b4550), *(((int*)0xe95b4550) + 1), *(((int*)0xe95b4550) + 2), *(((int*)0xe95b4550) + 3), *(((int*)0xe95b4550) + 4), *(((int*)0xe95b4550) + 5));
  printf("%d %d %d %d %d %d \n", ((int*)0xe95b4550)[0], ((int*)0xe95b4550)[1], ((int*)0xe95b4550)[2], ((int*)0xe95b4550)[3], ((int*)0xe95b4550)[4], ((int*)0xe95b4550)[5]);
  
  return 0;
}
