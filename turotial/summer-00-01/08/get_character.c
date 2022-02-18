#include <stdio.h>

int main()
{

    int score;

    // scanf("%c", &score)
    // get only one character
    // '1' -> ascii code 49
    // '2'
    // 'a'
    score = getchar();

    // score == 0 wrong
    if (score == '0')
        printf("Bingo\n");

    // if (score == 'A')
    //     printf("Bingo");

    // implicit cast on print
    printf("%d", score);

    return 0;
}