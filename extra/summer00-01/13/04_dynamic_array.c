#include <stdio.h>
#include <stdlib.h>


int main() {
    int initialLength = 1;
    int counter = 0, sum = 0;

    // calloc(initialLength, sizeof(int)); | filled by zero
    int *pointer = (int *) malloc(initialLength * sizeof(int)); 
    scanf("%d", pointer);

    while (*(pointer + counter) != -1){
        sum += *(pointer + counter);
        counter++;

        pointer = (int *) realloc(pointer, (counter + 1) * sizeof(int));
        scanf("%d", pointer + counter);
    }
    
    // printf("counter: %d\n", counter);
    // printf("sum: %d\n", sum);
    free(pointer);
    printf("Avg: %.2f\n", (float)sum / counter);

    return 0;
}