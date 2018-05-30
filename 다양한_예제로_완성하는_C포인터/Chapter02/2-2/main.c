#include  <stdio.h>

void main() {
	int n = 20;
	int *np = &n;
	
	printf("%c %c\n", n, *np);
	printf("%d %d\n", sizeof(int), sizeof(int*));
	printf("%d %d\n", sizeof(n), sizeof(np));

}
