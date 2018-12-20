#include <stdio.h>
#include <string.h>
#include <wchar.h>

int main() {
	char s[100] = "ABC";
	wchar_t ws[100] = L"ABC";

	printf("ASCII : %s \n", s);
	wprintf(L"UNICODE : %s \n", ws);

    strcpy(s, "Hello!");
    strcpy(ws, L"Hello!");
    printf("ASCII : %s \n", s);
    wprintf(L"UNICODE : %s \n", ws);

    strcat(s, "+String");
    wcscat(ws, L"+String");
    printf("ASCII : %s \n", s);
    wprintf(L"UNICODE : %s \n", ws);

    printf("s 문자열의 길이 : %d \n", strlen(s));
    printf("ws 문자열의 길이 : %d \n", wcslen(ws));

    return 0;
}
