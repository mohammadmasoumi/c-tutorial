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
    
    allocate(&p);
    printf("p point to: %d\n", *p);
    *p = 42;
    printf("%ls\n", p);
    printf("value: %d\n", *p);
    
    free(p);

    return 0;
}


void allocate(int **p2p) {
    int *pointer = (int *)malloc(sizeof(int));
    printf("*pointer: %d\n", *pointer);
    *p2p = pointer; 
}