#include <stdio.h>

void main() {
  char carr[5] = {'A', 'B', 'C', 'D', 'E'};

  printf("%c %c %c %c %c\n", *carr, *(carr + 1), *(carr + 2), *(carr + 3), *(carr + 4));
}

