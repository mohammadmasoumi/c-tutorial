#include <stdio.h>

int main () {

    int a = 12;
    int b = 13;

    // \n -> new line
    printf("[BEFORE]: a: %d, b: %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("[AFTER]: a: %d, b: %d\n", a, b);

    return 0;
}