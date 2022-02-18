#include <stdio.h>
#include <stdlib.h>


int main() {
    int initialCount = 5;
    int score, counter = 0;
    int *ptr = (int*) calloc(initialCount, sizeof(int));

    scanf("%d", &score);
    
    while(score != -1) {
        *(ptr + counter) = score;
        scanf("%d", &score);
        
        counter += 1;
        if (counter >= initialCount){
            initialCount *= 2;
            ptr = realloc(ptr, initialCount * sizeof(int));
        }    
    }

    for (int i = 0; i < initialCount; i++)
        printf("%d\n",*(ptr + i));

    return 0;
}