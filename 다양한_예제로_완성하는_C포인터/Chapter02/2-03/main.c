#include <stdio.h>
void main(){

	char c = 'A';
	char *cp = &c;
	*cp = 'B';

	printf("%c %c\n", c, *cp);
}
