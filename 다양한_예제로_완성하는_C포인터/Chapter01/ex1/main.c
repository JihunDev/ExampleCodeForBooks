#include <stdio.h>

void main() {

    char c = 'A';
    int n = 10;
    long l = 10l;
    float f = 5.25f;
    double d = 5.25;

    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(n));
    printf("%d\n", sizeof(l));
    printf("%d\n", sizeof(f));
    printf("%d\n", sizeof(d));
    printf("================\n");
    printf("%d\n", sizeof(&c));
    printf("%d\n", sizeof(&n));
    printf("%d\n", sizeof(&l));
    printf("%d\n", sizeof(&f));
    printf("%d\n", sizeof(&d));
}