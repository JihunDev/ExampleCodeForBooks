#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = 20;
	int *np;
	int **npp;
	np = &n;
	npp = &np;

	printf("%x %x %x\n", n, np, npp);
	printf("%x %x %x\n", n + 1, np + 1, npp + 1);

	return 0;
}
