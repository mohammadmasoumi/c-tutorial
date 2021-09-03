#include <stdio.h>


/*
Arrays: a collection of variables of the same type.
___________________________________________________________________________________________________
Instead of declaring individual variables, such as number0, number1, ..., and number99, 
you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] 
to represent individual variables. A specific element in an array is accessed by an index.
*/

int main() {

    int myArray[10];

    // The address of array's elements.
    printf("The address of first element of array: %p\n", &myArray);

    // Assigning value to the array's elements.
    for(int idx = 0; idx < 10;  ++idx) {
        myArray[idx] = idx;
        printf("[%d]: %p\n", idx, &myArray[idx]);
    }

    return 0;
}