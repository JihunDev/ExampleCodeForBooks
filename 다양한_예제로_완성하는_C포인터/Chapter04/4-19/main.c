#include <stdio.h>

int main(){
	int iarr2[2][2] = {10, 20, 30, 40};
	int *ap = (int*)iarr2;

	printf("%d %d %d %d\n", iarr2[0][0], iarr2[0][1], iarr2[1][0], iarr2[1][1]);
	printf("%d %d %d %d\n", ap[0], ap[1], ap[2], ap[3]);

	return 0;
}
