#include <stdio.h>

/*

Integral Types
In C, an integral type can declare:

* Integer values, signed or unsigned
* Boolean values, where 0 is equivalent to false and any nonzero number is equivalent to true
* Characters, which are automatically converted to an integer value by the compiler
* Members of an enumerated type, which are interpreted as an integer by the compiler
* Bit fields
*/

int main(){

    int grade;

    printf("Please enter your grade: \n");
    scanf("%d", &grade);

    // There is no clean way to solve this with switch, as cases need to be integral types. Have a look at if-else if-else.
    switch (grade)
    {
    case 90:
        printf("90\n");
        break;
    
    case 80:
        printf("80\n");
        break;
    
    case 70:
        printf("70\n");
        break;
    
    case 60:
        printf("60\n");
        break;
    
    default:
        break;
    }


    return 0;
}