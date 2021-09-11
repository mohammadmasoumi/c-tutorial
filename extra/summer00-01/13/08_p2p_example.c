#include <stdio.h>
#include <stdlib.h>

void allocate(int **p2p);

int main() {
    int *p = NULL;

    // printf("p: %d\n", *p);
    // printf("p: %p\n", p);
    /*
    p - the address of another value
    *p - the value of address that p points to
    &p - address of p
    */
    allocate(&p);
    *p = 42;
    printf("*p: %d\n", *p);

    return 0;
}

void allocate(int **p2p) {
    *p2p = (int*) malloc(sizeof(int));
}
