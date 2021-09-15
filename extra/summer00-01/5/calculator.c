#include <stdio.h>


int main(){


    /*
    [1]: get 3 inputs from user
    [2]: indicates the operator + - * /
    [3]: do the operation
    [4]: print result
    */
   // two inputs int
   int a, b;
    // operator
   char opt;

    // final result 
    int result;

    // inputs
    printf("Please enter first number: \n");
    scanf("%d", &a);

    // converstion specifier 
    // %d -> decimal integer
    // %c -> char
    // %s -> string
    // %f -> float
    printf("Please enter the operator: \n");
    scanf(" %c", &opt);

    printf("Please enter second number: \n");
    scanf("%d", &b);

    // single statement - 1 line
    // compound statement
    // if () {
    //     a = 21;
    //     b = 2;
    //     c = 3;
    // }

    // what to do?
    if (opt == '+') 
        // if operator == + 
        // sum a + b
        result = a + b; // 1 statemnet
    else if (opt == '-')
        result = a - b;
    else if (opt == '*')
        result = a * b;
    else if (opt == '/')
        result = a / b;
    else if (opt == '%')
        result = a % b;
    else
        printf("Invalid operator!");

    // finally
    printf("result: %d\n", result);

    return 0;
}