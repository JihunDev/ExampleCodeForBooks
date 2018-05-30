#include <stdio.h>

void main () {
	char c = 'A';
	char *cp;
	char **cpp;
	cp = &c;
	cpp = &cp;

	printf("%c %c %c\n", c, *cp, **cpp);
	printf("%x %x %x\n", &c, cp, *cpp);

}
