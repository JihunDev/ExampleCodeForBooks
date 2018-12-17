#include <stdio.h>
#include <wchar.h>

int main() {
	char c = 'A';
	wchar_t wc = L'A';

	printf("ASCII : %c\n", c);
	wprintf(L"UNICODE : %c\n", wc);

	printf("ASCII : %d\n", sizeof(c));
	wprintf(L"UNICODE : %d\n", sizeof(wc));
	
	return 0;
}
