#include <stdio.h>

void main() {
    char c = 'A';

    printf("%x %x %x\n", &c, (char*)&c, (int*)&c);
    printf("%x %x %x\n", &c + 1, (char*)&c + 1, (int*)&c + 1);
    printf("%x %x %x\n", &c + 2, (char*)&c + 2, (int*)&c + 2);
    printf("%x %x %x\n", &c + 3, (char*)&c + 3, (int*)&c + 3);
}