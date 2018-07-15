#include <stdio.h>

int main (){
  int iarr2[2][2] = {1, 2, 3, 4};

  printf("%x \n", iarr2);
  printf("%x %x %x %x \n", iarr2[0], iarr2[1], &iarr2[0][0]);

  return 0;
}
