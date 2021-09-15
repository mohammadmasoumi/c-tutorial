#include <stdio.h>


int main() {

    /*
    post increment -> 
    execute the statement then increment the number
    */
    int aNumber = 10;

    /*
    printf(aNumber)
    aNumber += 1
    printf(aNumber)
    aNumber += 1
    printf(aNumber)
    */

    printf("%d\n", aNumber++);
    printf("%d\n", aNumber);
    // aNumber = 11
    printf("%d\n", ++aNumber);

    // no difference
    aNumber++;
    ++aNumber;
    printf("%d\n", aNumber);

    return 0;
}