#include <stdio.h>

const int WORD_COUNT = 5;
const int MAX_WORD_LIST = 256;

int main() {
    char myList[WORD_COUNT][MAX_WORD_LIST];

    for (int i = 0; i < WORD_COUNT; i++) {
        scanf("%s", myList[i]);
    }

    printf("------------- Names: -------------\n");
    for (int i = 0; i < WORD_COUNT; i++) {
        printf("%s\n", myList[i]);
    }

    return 0;
}