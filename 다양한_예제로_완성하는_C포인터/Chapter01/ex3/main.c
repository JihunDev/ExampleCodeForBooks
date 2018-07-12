#include <stdio.h>

void main() {

    char c = 'A';
    int n = 10;
    long l = 10l;
    float f = 5.25f;
    double d = 5.25;

    printf("%x\n", &c);
    printf("%x\n", &n);
    printf("%x\n", &l);
    printf("%x\n", &f);
    printf("%x\n", &d);
    puts("==============\n");
    printf("%x\n", &c + 1);
    printf("%x\n", &n + 1);
    printf("%x\n", &l + 1);
    printf("%x\n", &f + 1);
    printf("%x\n", &d + 1);

}