#include <stdio.h>
#include <stdlib.h>

void allocate(int **p2p);


int main() {
    // a pointer of p
    /*

            XF00
    |---------------|
    |      NULL     |
    |---------------|

    */
    int *p = NULL;

    printf("[1]p: %p\n", p);
    // Segmentation fault (core dumped)
    // printf("[1]*p: %d", *p);
    
    allocate(&p);

    printf("[2]p: %p\n", p);
    printf("[2]*p: %d\n", *p);
    
    *p = 42;

    printf("[3]p: %p\n", p);
    printf("[3]*p: %d\n", *p);

    free(p);

    return 0;
}

void allocate(int **p2p) {
    int *pointer = (int *)malloc(sizeof(int));
    printf("*pointer: %d\n", *pointer);
    *p2p = pointer; 
}