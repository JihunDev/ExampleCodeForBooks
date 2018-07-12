#include <stdio.h>

int main() {
  char c = 'Z';
  char *cp = &c;
  int n = 100;
  int *np = &n;

  printf("%d %d %d\n", sizeof(c), sizeof(*cp), sizeof(cp));
  printf("%d %d %d\n", sizeof(n), sizeof(*np), sizeof(np));

  return 0;
}
