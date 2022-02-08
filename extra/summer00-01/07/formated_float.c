#include <stdio.h>
#include <math.h>

int main()
{

    float a = 3.65;

    /*
    output:

    ans1:
    3.6
    3.67

    .1f
    5 - 9 -> up
    0 - 4 -> down
    */

    // printf("a: %d\n", a); wrong
    printf("a: %.1f\n", ceil(a));  // 4.0
    printf("a: %.1f\n", floor(a)); // 3.0

    // -------------------------------------------------
    printf("a: %d\n", (int)a); // 3
    printf("a: %.1f\n", a);    // 3.7
    printf("a: %.2f\n", a);    // 3.65

    return 0;
}