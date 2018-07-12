#include <stdio.h>

void main() {
    int n1 = 100;
    int n2 = 200;

    printf("%x\n", &n1 + 1);
    printf("%x\n", &n2 + 1);
}