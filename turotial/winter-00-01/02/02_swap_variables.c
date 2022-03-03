#include <stdio.h>

int main () {

    int a = 12;
    int b = 13;
    int c;

    // \n -> new line
    printf("[BEFORE]: a: %d, b: %d\n", a, b);

    c = a;
    a = b;
    b = a;

    printf("[AFTER]: a: %d, b: %d", a, b);

    return 0;
}