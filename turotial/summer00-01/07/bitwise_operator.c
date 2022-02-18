#include <stdio.h>

int main()
{

    int a = 2;
    int b = 2;

    /*
    ^ - XOR 

    1 1 -> 0
    1 0 -> 1
    0 1 -> 1
    0 0 -> 0
    _____________________________________

    0010
    0010 ^
    ______
    0000

    */

    if (a ^ b)
        printf("What happened?");
    else
        printf("No");

    return 0;
}