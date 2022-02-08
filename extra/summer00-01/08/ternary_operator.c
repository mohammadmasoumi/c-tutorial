#include <stdio.h>

int main()
{

    int a, b;

    // if (1 & 126)
    //     a = 1
    // else
    //     a = 2

    printf("%d\n", 1 & 126);

    /*
    https://en.wikipedia.org/wiki/Bitwise_operation

    0000001
    1111110 & 
    _______
    0000000
    _____________________________

    0000001
    1111110 | 
    _______
    1111111
    _____________________________

    OR - | (at least one of the inputs should be true or 1)
    0, 0 -> 0
    1, 0 -> 1
    0, 1 -> 1
    1, 1 -> 1
    */

    /*
    0 -> false
    1 -> true
   */

    a = 1 & 126 ? 1 : 2;
    b = 1 && 126 ? 1 : 2;

    printf("%d", a);
    printf("%d", b);

    // ternary operator
    // if else

    return 0;
}