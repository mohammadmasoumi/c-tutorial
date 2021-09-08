#include <stdio.h>
#include <stdlib.h>

int main() {


    char* myStudent[5];
    char myBuffer[50];

    for (int i = 0; i < 5; i++) {
        scanf("%s", myBuffer);
        myStudent[i] = myBuffer;
    }

    return 0;
}