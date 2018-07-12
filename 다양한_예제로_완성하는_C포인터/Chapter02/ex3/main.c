#include <stdio.h>

int main () {
  int n = 10;
  int *np = &n;
  int **npp = &np;

  printf("%d %d %d\n", n, *np, **npp);
  printf("%d %d %d\n", sizeof(n), sizeof(*np), sizeof(**npp));
  printf("%d %d %d\n", sizeof(n), sizeof(np), sizeof(npp));

  return 0;
}
