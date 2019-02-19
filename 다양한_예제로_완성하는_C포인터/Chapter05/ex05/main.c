#include <stdio.h>

int main()
{
	char *str = "ABCDEF";
	char arr[] = "ABCDEF";

//	str[0] = 'Z';
	arr[1] = 'Z';

	printf("%c %c\n", str[0], arr[1]);

	return 0;
}
