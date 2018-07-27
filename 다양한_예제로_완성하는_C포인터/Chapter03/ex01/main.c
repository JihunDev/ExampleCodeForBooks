#include <stdio.h>

int main() {
  int arr[5] = {10, 20, 30, 40, 60};

  printf("%d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4]);
  printf("%d %d %d %d %d \n", *arr, *(arr + 1), *(arr + 2), *(arr + 3), *(arr + 4));

  return 0;
}
