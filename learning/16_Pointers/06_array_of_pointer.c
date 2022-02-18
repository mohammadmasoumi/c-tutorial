#include <stdio.h>

const int MAX = 5;

int main() {

    int vars[] = {1, 2, 3, 4, 5};
    int *varsPointer[MAX];

    for (int i = 0; i < MAX; ++i)
        varsPointer[i] = &vars[i];

    for (int i = 0; i < MAX; i++)
        printf("Value of *varsPointer[%d] is %d\n", i, *varsPointer[i]);

    printf("*********************************************************\n");

    char *listOfString[] = {
        "Hello world 1",
        "Hello world 2",
        "Hello world 3"
    };

    int len = sizeof(listOfString) / sizeof(listOfString[0]);

    printf("len: %d\n", len);

    for (int i = 0; i < len; i++)
        printf("listOfString[%d]: %s\n", i, listOfString[i]);

    return 0;
}