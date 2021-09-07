#include <stdio.h>

int main() {

    int aValue;
    int *aPointer;
    int **aPoint2Pointer;

    aPointer = &aValue;
    aPoint2Pointer = &aPointer;

    printf("aValue: %d\n", aValue);
    printf("aValue: %d\n", *aPointer);
    printf("aValue: %d\n", **aPoint2Pointer);
    
    printf("aValue address: %p\n", &aValue);
    printf("aValue address: %p\n", aPointer);

    printf("aValue address of address: %p\n", &aPointer);
    printf("aValue address of address: %p\n", aPoint2Pointer);

    return 0;
}