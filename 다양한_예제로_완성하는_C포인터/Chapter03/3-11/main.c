#include <stdio.h>

int main() {
	int iarr[5] = {10, 20, 30, 40, 50};

  printf("%d %d %d %d %d\n", *(int*)0x12ff6c, *(int*)0x12ff70, *(int*)0x12ff74, *(int*)0x12ff78, *(int*)0x12ff7c);

	return 0;

}
