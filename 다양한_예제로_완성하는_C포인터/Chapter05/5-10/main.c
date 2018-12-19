#include <stdio.h>
#include <wchar.h>

int main() {
	char s[] = "ABC";
	wchar_t ws[] = L"ABC";

	printf("ASCII : %s \n", s);
	wprintf(L"UNICODE : %s \n", ws);
	
	printf("ASCII : %d \n", sizeof(s));
	wprintf(L"UNICODE : %d \n", sizeof(ws));

	return 0;
}
