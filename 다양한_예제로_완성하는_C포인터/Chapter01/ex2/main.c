#include <stdio.h>

int main() {

    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("================\n");
    printf("%d\n", sizeof(char*));
    printf("%d\n", sizeof(int*));
    printf("%d\n", sizeof(long*));
    printf("%d\n", sizeof(float*));
    printf("%d\n", sizeof(double*));
}