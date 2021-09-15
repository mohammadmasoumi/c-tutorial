#include <stdio.h>

int main() {
    
    // counter-controlled 
    int scoreCount;
    int counter = 0;
    int total = 0;
    int score;

    printf("please enter your lessons number: \n");
    scanf("%d", &scoreCount);

    /*
    [1]: check aCondition
    [2]: if true -> go into while block
    [3]: else -> skip while
    [4]: if go into while:
        execute block
        check aCondition
        back to [4]

    while(aCondition) {
        // block
    }

    */

    // counter = 0 
    // scoreCount = 10

    // next
    // counter = 1 
    // scoreCount = 10

    // 0 - 9
    while(counter < scoreCount) {
        // int total = 0; - reset total - wrong!
        
        printf("Enter your score: \n");
        scanf("%d", &score);
        total += score;

        printf("total: %d  - score: %d\n", total, score);
        
        counter += 1;
    }

    printf("avg: %d\n", total / scoreCount);

    return 0;
}