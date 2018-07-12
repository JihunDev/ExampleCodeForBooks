#include <stdio.h>

int main() {
  char carr2[2][3] = {'A', 'B', 'C', 'D', 'E', 'F'};

  printf("%x\n", carr2);
  printf("%x %x %x %x\n", carr2[0], carr2[1], &carr2[0][0], &carr2[1][0]);

  return 0;
}
