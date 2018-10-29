#include <stdio.h>

int main() {
	int iarr2[2][2] = {10, 20, 30, 40};
	int *ap = (int*)iarr2;

	printf("%d %d\n", sizeof(iarr2), sizeof(ap));

	return 0;
}
