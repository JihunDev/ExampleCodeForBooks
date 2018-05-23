#include <stdio.h>

void main() {
    char c = 'A';

    printf("%x\n", &c);
    printf("%c %c\n", c, *&c);

}