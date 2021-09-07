#include <stdio.h>

const int MAX = 5;

int main() {

    int anInt = 1;

    int* aPointer1 = &anInt;
    int* aPointer2 = &anInt;

    printf("anInt: %d | aPointer1: %p\n", anInt, aPointer1);
    printf("anInt: %d | aPointer2: %p\n", anInt, aPointer2);

    if (aPointer1 == aPointer2) 
        printf("%p == %p\n", aPointer1, aPointer2);
    
    printf("**************************************************************************\n");
    int vars[] = {1, 2, 3, 4, 5};
    int* pointer, counter=0;
    pointer = vars;

    printf("sizeof(int) %ld bytes\n", sizeof(int));
    printf("pointer: %p\n", pointer);
    printf("*pointer: %d\n", *pointer);
    printf("&vars[MAX-1]: %p\n", &vars[MAX-1]);
    printf("vars[MAX-1]: %d\n", vars[MAX-1]);

    while(pointer <= &vars[MAX-1]) {
        printf("Index: %d - Address: %p - Value: %d\n", counter, pointer, *pointer);
        pointer++;
        counter++;
    }

    printf("**************************************************************************\n");
    printf("pointer: %p\n", pointer);
    
    while(vars < pointer) {
        pointer -= 1;
        counter--;
        printf("Index: %d - Address: %p - Value: %d\n", counter, pointer, *pointer);
    }

    return 0;
}