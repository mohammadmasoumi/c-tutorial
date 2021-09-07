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
    
    int vars[] = {1, 2, 3, 4, 5};
    int* pointer, counter=0;
    pointer = vars;

    printf("%p\n", pointer);
    printf("%d\n", *pointer);
    printf("%p\n", &vars[MAX-1]);
    printf("%d\n", vars[MAX-1]);

    while(pointer <= &vars[MAX-1]) {
        printf("Index: %d - Address: %p - Value: %d\n", counter, pointer, *pointer);
        pointer++;
        counter++;
    }

    return 0;
}