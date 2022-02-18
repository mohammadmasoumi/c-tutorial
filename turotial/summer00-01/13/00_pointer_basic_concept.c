#include <stdio.h>

int main()
{
    int score = 12;

    int *pointer1 = NULL;
    int *pointer2 = &score;
    int *pointer3;

    pointer3 = &score;

    return 0;
}