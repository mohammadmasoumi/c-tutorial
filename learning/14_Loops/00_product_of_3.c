#include <stdio.h>

/*
    product = 3 

    while (product <= 100) {
        product = product * 3
    }

    printf("the first power of 3 greater that 100 is: %d", product)

*/



int main() {

    int product = 3;

    while (product <= 100)
    {
        /* code */
        product *= 3;
    }

    printf("the first power of 3 greater that 100 is: %d\n", product);

    return 0;
}