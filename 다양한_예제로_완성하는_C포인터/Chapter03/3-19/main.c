#include <stdio.h>

int main() {
  char carr2[2][2] = {'A', 'B', 'C', 'D'};

  printf("%x %x %x %x \n", &carr2[0][0], carr2, carr2[0], carr2[1]);
  printf("%x %x %x %x \n", &carr2[0][0] + 1, carr2 + 1, carr2[0] + 1, carr2[1] + 1);


  return 0;
}
