#include <stdio.h>

int main() {
	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int *iarr[5] = {&a, &b, &c, &d, &e};

	printf("%d %d %d\n", sizeof(iarr), sizeof(iarr[0]), sizeof(*iarr[0]));

	return 0;
}
