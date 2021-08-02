#include <stdio.h>

int main (void){
    int a;
    int b;
    char operator;
    int c;

    printf("Calculator\n\n");

    scanf("%d", &a);
    scanf(" %c", &operator);
    scanf("%d", &b);

    switch (operator)
    {
        case '+' :
            c = a + b;
            break;

        case '-' :
            c = a - b;
            break;

        case '*' :
            c = a * b;
            break;

        case '/' :
            c = a / b ;
            break;

        default:
            printf("Error! Invalid Operator.");
    }

    printf("= %d", c);
    return 0;
}