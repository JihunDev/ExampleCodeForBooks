#include <stdio.h>

void main() {

    int n = 0x44434241;

    printf("%d %c\n", ((char*)&n)[0], ((char*)&n)[0]);
    printf("%d %c\n", ((char*)&n)[1], ((char*)&n)[1]);
    printf("%d %c\n", ((char*)&n)[2], ((char*)&n)[2]);
    printf("%d %c\n", ((char*)&n)[3], ((char*)&n)[3]);

}