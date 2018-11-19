#include <stdio.h>

int main() {
  int iarr[4] = {0x1011, 0x2022, 0x3033, 0x4044};
  char *ap = (char*) iarr;

  printf("%x %x %x %x\n", iarr, iarr + 1, iarr + 2, iarr + 3);
  printf("%x %x %x %x\n", ap, ap + 4, ap + 8, ap + 12);

  return 0;
}
