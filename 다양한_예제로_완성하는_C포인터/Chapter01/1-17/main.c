#include <stdio.h>

void main() {
    char c = 10;

    printf("%d\n", c);
    printf("%d\n", *&c);
    printf("%d\n", *(int*)&c);
}