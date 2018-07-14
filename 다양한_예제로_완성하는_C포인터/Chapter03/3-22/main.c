#include <stdio.h>

int main() {
  char carr2[2][2] = {'A', 'B', 'C', 'D'};

  printf("%x %x %x \n", carr2 + 2, *(carr2 + 2), **(carr2 + 2));
  printf("%x %x %x \n", carr2 + 2, carr2[2], carr2[2][0]);

  return 0;
}
