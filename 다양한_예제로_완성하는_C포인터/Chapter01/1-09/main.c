#include <stdio.h>

int main() {
    char c = 'A';

    printf("%x\n", &c);
    printf("%x\n", &c + 1);
    printf("%x\n", &c + 2);
    printf("%x\n", &c + 3);
}