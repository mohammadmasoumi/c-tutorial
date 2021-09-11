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


    return 0;
}