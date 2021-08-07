#include <stdio.h>

int main() {
    /*
    How to run this program?
    g++ odd_and_even_number.c
    a.exe  or  ./a.out
    */

    int aNumber;
    scanf("%d", &aNumber);
    
    if (aNumber%2 == 0)
        printf("%d is an Even number!\n", aNumber);
    else 
        printf("%d is an Odd number!\n", aNumber);

    return 0;
}