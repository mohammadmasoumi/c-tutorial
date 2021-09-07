#include <stdio.h>

const int MAX = 5;

int main() {
    int vars[] = {1, 2, 3, 4, 5};
    int* pointer;

    pointer = vars;

    for (int index=0; index < MAX; ++index) 
        printf("The value at the index %d is %d\n", index, *(pointer + index));

    return 0;
}