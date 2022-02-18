#include <stdio.h>
#include <stdlib.h>

const int MAX = 5;
const int WORD_LENGTH = 256;

int main() {
    char* myString[MAX];

    for (int i = 0; i < MAX; i++) {
        myString[i] = (char*) malloc(WORD_LENGTH * sizeof(char));
        scanf("%s", myString[i]);
    }

    printf("------------ Names ---------------\n");
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < WORD_LENGTH; j++) {
            if (*(myString[i] + j) == '\0')
                break;
            printf("%c", *(myString[i] + j));
        }
        printf("\n");
    }

    return 0;
}