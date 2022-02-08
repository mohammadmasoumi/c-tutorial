#include <stdio.h>

int main(void)
{

    // odd or even
    int a;

    // decimal - conversion specifier
    // inpput from user
    scanf("%d", &a);

    // condition ?
    // How we can tell the pc
    /*
    == 
    <=
    >=
    >
    <
    two variable
    */
    // [wrong] if (a > b > c)
    // [right] if (a > b && b > c)

    if (a % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}