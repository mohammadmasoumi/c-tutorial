#include <stdio.h>

int simpleSum(int a, int b);

int main() {

    int a, b;
    
    // initializing the value - assigning them values
    a = 10;
    b = 20;

    // invoke the simpleSum function
    /*
    At this time the compiler make a copy of variable a and b 
    then send the copied variable to the function.

    So 

    The address of a and b should be differenct from the address of numOne and numTwo.
    
    printf("a address: %p\n", &a);
    printf("b address: %p\n", &b);

    printf("numOne address: %p\n", &numOne);
    printf("numTwo address: %p\n", &numTwo);
    
    */

    printf("a address: %p\n", &a);
    printf("b address: %p\n", &b);

    int c = simpleSum(a, b);

    printf("C: %d\n", c);

    return 0;
}

int simpleSum(int numOne, int numTwo){
    
    printf("numOne address: %p\n", &numOne);
    printf("numTwo address: %p\n", &numTwo);

    return numOne + numTwo;
}