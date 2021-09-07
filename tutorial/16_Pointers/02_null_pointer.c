#include <stdio.h>


int main() {
    int *aNullPointer = NULL;

    printf("aNullPointer: %p\n", aNullPointer);

    if(!aNullPointer)
        printf("ANullPointer\n");
    
    return 0;
}