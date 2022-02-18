#include <stdio.h>

int main() {
    /*
    The sizeof()function in C is a built-in function that is used to calculate the size (in bytes)that a data type occupies in ​the computer’s memory.
    */
    int myArray[4] = {1, 2, 3 ,4};
    
    // the returned type of sizeof us `Long`, So we should print them with `ld` specifier.
    long arraysLength = sizeof(myArray) / sizeof(myArray[0]);
    printf("Length of array: %ld\n", arraysLength);

    printf("In range index: %d\n", myArray[arraysLength - 1]);
    // printf("Out of range index: %d\n", myArray[++arraysLength]);

    return 0;
}