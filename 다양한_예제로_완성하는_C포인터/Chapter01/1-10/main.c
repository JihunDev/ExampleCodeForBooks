#include <stdio.h>

void main() {
    int n = 100;

    printf("%x\n", &n);
    printf("%x\n", &n + 1);
    printf("%x\n", &n + 2);
    printf("%x\n", &n + 3);
}