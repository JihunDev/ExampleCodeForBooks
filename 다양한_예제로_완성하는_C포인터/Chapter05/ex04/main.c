#include <stdio.h>

int main()
{
	char *str = "ABCDEF";
	char arr[] = "ABCDEF";

	printf("%d %d\n", sizeof(str), sizeof(arr));
	printf("%c %c\n", str[0], arr[0]);
	printf("%c %c\n", *str, *arr);

	return 0;
}
