#include <stdio.h>

void main() {
    char c1 = 'A';
    char c2 = 'B';

    printf("%x\n", &c1 + 1);
    printf("%x\n", &c2 + 1);
}