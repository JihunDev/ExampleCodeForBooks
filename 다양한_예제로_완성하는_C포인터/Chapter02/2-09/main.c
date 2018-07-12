#include<stdio.h>

int main(int argc, char *argv[])
{
	char c = 'A';
	char *cp;
	char **cpp;
	cp = &c;
	cpp = &cp;
	
	printf("%x %x %x\n", c, cp, cpp );
	printf("%x %x %x\n", c + 1, cp + 1, cpp + 1 );

	return 0;
}
