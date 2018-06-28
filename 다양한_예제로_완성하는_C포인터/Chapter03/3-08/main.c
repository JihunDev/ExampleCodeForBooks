#include <stdio.h>

int main(){
  char carr[5] = {'A', 'B', 'C', 'D', 'E'};
  printf("%x %x %x %x %x\n", *(char*)0x12ff78, *(char*)0x12ff79, *(char*)0x12ff7a, *(char*)0x12ff7b, *(char*)0x12ff7c);

  return 0;
}
