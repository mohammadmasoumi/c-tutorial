#include <stdio.h>

int main()
{

    /*
    program:

        input: score
        range: 0 - 20
        raise exception -> out of range

        output: 
            20 -> A
            19 -> B
            18 -> E
            17 -> D
            > 16 -> Failed 

    */
    int a;
    scanf("%d", &a);

    // check range
    // || or
    // && and

    /*
    boundaries
    corner case 
    */

    // || or logical
    // | bitwise
    // ... - 0 ****************** - 20 ...
    // if (a < 0 || a > 20)

    // || or
    // حداقل یکی از شرط ها باید درست باشد تا نتیجه نهایی درست شود.
    // اگر شرط اول درست باشد بقیه شرط ها چک نمیشود.
    // aCondition or bCondition or cCondition
    // if aCondition is true, it will not check bCondition and cCondition
    // at least one condition should be true -> final result is true

    // && and
    // همه شرط ها باید درست باشد.
    // اگر یک شرط نادرست باشد دیگر بقیه شرط ها چک نمیکند و جواب نهایی غلط میشود.
    // aCondition and bCondition and cCondition
    // all condition should be true -> final result is true

    // 0 < a < 20

    // int a1 = 20;
    // int a2 = 19;
    // int a3 = 18;
    // int a4 = 17;

    // if ((a1 == 20 && a2 == 19) || a3 == 21)
    //     printf("True");
    // else
    //     printf("False");

    // if a is less than zero or is greater than 20

    // if (a < 0 || a > 20)
    //     printf("Input is out of range, please try again later.\n");
    // else {
    //     if (a == 20)
    //         printf("A\n");
    //     else if(a == 19)
    //         printf("B\n");
    //     else if(a == 18)
    //         printf("C\n");
    //     else
    //         printf("Failled\n");
    // }

    if (a < 0 || a > 20)
        printf("Input is out of range, please try again later.\n");
    else
        switch (a)
        {
        case 20:
            printf("A\n");
            break;

        case 19:
            printf("B\n");
            break;

        case 18:
            printf("C\n");
            break;

        default:
            printf("failed\n");
            break;
        }

    return 0;
}