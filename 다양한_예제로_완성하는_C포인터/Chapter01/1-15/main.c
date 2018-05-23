#include <stdio.h>

void main() {
    int n = 100;

    printf("%x\n", &n);
    printf("%d %d\n", n, *&n);

}