#include <stdio.h>

int main() {
  int arr[5] = {10, 20, 30, 40, 50};

  printf("%x \n", arr);
  printf("%x %x \n", arr, &arr[0]);
  printf("%x %x \n", arr + 1, &arr[1]);
  printf("%x %x \n", arr + 2, &arr[2]);
  printf("%x %x \n", arr + 3, &arr[3]);
  printf("%x %x \n", arr + 4, &arr[4]);

  return 0;
}
