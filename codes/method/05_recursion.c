#include <stdio.h>

/*
Importance of function prototype in C

Here we will see why we should use function prototype in C. 
The function prototypes are used to tell the compiler about the number of arguments and about the required datatypes of a function parameter,
 it also tells about the return type of the function. By this information, the compiler cross-checks the function signatures before calling it. 
 If the function prototypes are not mentioned, then the program may be compiled with some warnings, and sometimes generate some strange output.

If some function is called somewhere, but its body is not defined yet, 
that is defined after the current line, then it may generate problems. 
The compiler does not find what is the function and what is its signature. 
In that case, we need to function prototypes. If the function is defined before then we do not need prototypes.
*/
int fibonacchi(unsigned int a, char caller);


int main() {
    unsigned int a = 4;
    printf("fibonacchi of %d is: %d\n", a, fibonacchi(a, 'm'));

    /*
    Expected output:

                        fibo(4) // print: a = 4
                     fibo(3)      +       fibo(2) // a is: 3 - caller is: a
                fibo(2) + fibo(1)    fibo(1) + fibo(0)

    */

    return 0;
}


int fibonacchi(unsigned int a, char caller) {
    printf("a is: %d - caller is: %c\n", a, caller);

    if (a <= 1)
        return 1;

    int res = fibonacchi(a  - 1, 'a') + fibonacchi(a - 2, 'b'); 
    printf("res: %d\n", res);

    return res;
}