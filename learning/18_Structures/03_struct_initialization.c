#include <stdio.h>

struct Pointer {
    int x, y;
};

/*
Error: no default value for members

Why? 
The reason for above error is simple, when a datatype is declared, no memory is allocated for it. 
Memory is allocated only when variables are created.

struct Pointer {
    int x = 0; // COMPILER ERROR:  cannot initialize members here
    int y = 0; // COMPILER ERROR:  cannot initialize members here
};

*/

int main() {

    struct Pointer p1 = {0, 1};
    struct Pointer p2 = {.y=1, .x=0};
    struct Pointer p3;
    p3.x = 0;
    p3.y = 1;

    printf("p1.x: %d, p1.y: %d\n", p1.x, p1.y);
    printf("p2.x: %d, p2.y: %d\n", p2.x, p2.y);
    printf("p3.x: %d, p3.y: %d\n", p3.x, p3.y);

    return 0;
}