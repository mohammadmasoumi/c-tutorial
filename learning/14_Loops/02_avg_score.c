#include <stdio.h>

int main() {

    int score;
    int scoreCount;
    int aCounter = 0;
    int total = 0;

    printf("Please enter the number of scores: \n");
    scanf("%d", &scoreCount);

    while(aCounter < scoreCount){
        printf("Please enter the next score: \n");
        scanf("%d", &score);

        total += score;
        aCounter += 1;
    }
    
    // the output is an integer not float. why?
    printf("avg: %d\n", total / scoreCount);


    return 0;
}