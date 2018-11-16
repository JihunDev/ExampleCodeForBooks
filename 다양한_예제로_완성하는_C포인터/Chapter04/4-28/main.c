#include <stdio.h>

int main() {
  int iarr[4] = {0x1011, 0x2022, 0x3033, 0x4044};
  char *ap = (char*) iarr;

  printf("%x %x %x %x\n", iarr[0], iarr[1], iarr[2], iarr[3]);
  printf("%x %x %x %x\n", ap[0], ap[1], ap[2], ap[3]);
  printf("%x %x %x %x\n", ap[4], ap[5], ap[6], ap[7]);
  printf("%x %x %x %x\n", ap[8], ap[9], ap[10], ap[11]);
  printf("%x %x %x %x\n", ap[12], ap[13], ap[14], ap[15]);

  return 0;
}
