#include <stdio.h>

int main() {
  char carr2[2][2] = {'A', 'B', 'C', 'D'};

  printf("%x %x %x \n", carr2 + 1, *(carr2 + 1), **(carr2 + 1));
  printf("%x %x %x \n", carr2 + 1, carr2[1], carr2[1][0]);

  return 0;
}
