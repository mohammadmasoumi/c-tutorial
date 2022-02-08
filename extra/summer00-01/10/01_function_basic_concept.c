#include <stdio.h>

// function
// function prototype
// returen_type function_name(parameters_list) (function header)
int square(int a);

// no input - no output
void checkReturnType();

int maxf(int a, int b, int c)
{
    int max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    return max;
}
/*
Doc string

[*] call by value
[*] call by reference

8 bit = 1 byte

int 32 bits => 4 bytes

|_______________________|
|   | 10|   |   |   |   |
|   | 10|   |   |   |   |
|   |   |   |   |   |   |
|   |   |   |   |   |   |
|   |   |   |   |   |   |
|_______________________|


Call by value
 - default in C
 - copy params and then pass the params
 - prevent future errors. (side effect)

*/
int main()
{
    /*
    method's usage
    
    1. reusable (you can use `scanf` in multiple files.)
    2. modulize (divide and conquare, reduce code lines). logical separation. stdio.h, math.h
    3. extendable (increase development speed.)
    4. ...

    */
    int a = 10;
    int b;
    // &a - get the address of value a

    // invoke or call
    printf("address: %p\n", &a);
    // printf("[before] a: %d\n", a);
    printf("square: %d\n", square(a));
    // printf("[after] a: %d\n", a);

    // call by refrence
    // scanf("%d", &b);
    checkReturnType();

    // ----------------------
    // malloc(20)
    // calloc()
    // free()

    // Successfully execute.
    return 0;
}

int square(int a)
{
    printf("[function] address: %p\n", &a);
    return a * a;
}

void checkReturnType()
{
    printf("Hello");

    return;
    // return 10; runtime error
}
