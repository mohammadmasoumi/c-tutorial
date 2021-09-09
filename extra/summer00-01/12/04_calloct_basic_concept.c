#include <stdio.h>
#include <stdlib.h>

const int MAX = 5;
// const long long MAX = 10000000000;

int main() {

    int* aPointer = (int*) calloc(MAX, sizeof(int));
    // int* aPointer = (int*) calloc(20);
    
    for (int i = 0; i < MAX; i++) {
        printf("%d\n", *(aPointer + i));
    }

    return 0;
}