#include <stdio.h>

int main() {
  char carr[3] = {'A', 'B', 'C'};
  char *cp = carr;

  printf("%d %d \n", sizeof(cp), sizeof(carr));

  cp = NULL;

  return 0;
}
