#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = 20;
	int *np;
	int **npp;
	int ***nppp;
	np = &n;
	npp = &np;
	nppp = &npp;
	
	printf("%d %d %d %d\n", n, *np, **npp, ***nppp);
	printf("%x %x %x %x\n", &n, np, *npp, **nppp);
	printf("%x %x %x\n", &np, npp, *nppp);
	printf("%d %d %d %d\n", sizeof(int), sizeof(int*), sizeof(int**), sizeof(int***));
	printf("%d %d %d %d\n", sizeof(n), sizeof(np), sizeof(npp), sizeof(nppp));

	return 0;
}
