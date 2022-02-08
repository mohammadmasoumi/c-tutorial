#include <stdio.h>


int main() {
    
    /*
    Sentinel controlled

    */

    int score;
    int total;
    int count = 0;    
    
    do {
        printf("Please enter next number: \n");
        scanf("%d", &score);
        if (score != -1){
            total += score;
            count += 1;
        }
            
    } while (score != -1);

    printf("avg: %d", total / count);

    return 0;
}