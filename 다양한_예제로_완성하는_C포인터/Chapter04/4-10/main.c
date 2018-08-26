#include <stdio.h>

int main() {
  char carr[4] = {'A', 'B', 'C', 'D'};
  char (*ap)[2] = (char(*)[2]) carr;

  printf("%c %c %c %c \n", carr[0], carr[1], carr[2], carr[3]);
  printf("%c %c %c %c \n", ap[0][0], ap[0][1], ap[1][0], ap[1][1]);
  
  return 0;
}
