#include <stdio.h>
#include <wchar.h>

int main() {
	char* s = "ABC";
	wchar_t* ws = L"ABC";

	printf("ASCII : %s\n", s);
	wprintf(L"UNICODE : %s\n", ws);

	return 0;
}
