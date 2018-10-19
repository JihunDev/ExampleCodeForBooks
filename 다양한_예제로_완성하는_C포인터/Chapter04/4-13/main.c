#include <stdio.h>

int main() {
	int iarr[4] = {1, 2, 3, 4};
	int (* ap)[2] = (int(*)[2]) iarr;

	printf("%d %d\n", sizeof(iarr), sizeof(ap));

	printf("%x %x\n", iarr, ap);

	printf("%x %x\n", ap, ap[0]);
	printf("%x %x\n", ap + 1,  ap[0] + 1);
	return 0;
}
