#include <stdio.h>

int main() {
    char *str = "ABCEDF";

    printf("%c %c %c\n", str[0], str[1], str[2]);
    puts("=====================");
    printf("%s\n", str);
    printf("%s\n", str + 1);
    puts(str + 2);
    puts(str + 3);

    return 0;
}
