#include<stdio.h>

int main(int argc, char *argv[])
{

	int n = 20;
	int *np;
	int **npp;
	np = &n;
	npp = &np;

	printf("%d %d %d\n", n, *np, **npp);
	printf("%x %x %x\n", &n, np, *npp );
	return 0;
}
