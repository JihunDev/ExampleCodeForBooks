#include <stdio.h>

int main () {
	char a = 'A', b = 'B', c = 'C', d = 'D', e = 'E';
	char *carr[5] = {&a, &b, &c, &d, &e};

	printf("%d %d %d\n", sizeof(carr), sizeof(carr[0]), sizeof(*carr[0]));

	return 0;
}
