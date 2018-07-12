#include <stdio.h>

int main (){
  char carr1[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
  char carr2[2][3] = {'A', 'B', 'C', 'D', 'E', 'F'};
  
  printf("%d %d\n", sizeof(carr1), sizeof(carr2));
  printf("%d %d\n", sizeof(carr2[0]), sizeof(carr2[1]));

  return 0;
}
