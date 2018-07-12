#include <stdio.h>

int main() {
  int n = 0x10;
  int *np = &n;
  int **npp = &np;

  printf("%x %x %x\n", n, *np, **npp);

  return 0;
}
