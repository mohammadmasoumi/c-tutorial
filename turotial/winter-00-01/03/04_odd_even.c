#include <stdio.h>

int main() {

    int a;

    // get an int from user
    printf("Enter a number\n");
    scanf("%d", &a);

    // if (a % 2 == 0){
    //     printf("Even!");
    // } else {
    //     printf("Odd!");
    // }
    if (a % 2 == 0)
        printf("Even!");
    else
        printf("Odd!");
    
    return 0;
}