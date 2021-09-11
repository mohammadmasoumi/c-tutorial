#include <stdio.h>
#include <stdlib.h>

const int MAX = 5;
const int STRING_LENGTH = 50;

int main() {
    char *myList[MAX];

    /*
        myList[i] address
        *myList[i] value
    */

    for(int i = 0; i < MAX; i++){
        myList[i] = (char *) malloc(sizeof(char) * STRING_LENGTH); 
        scanf("%s", myList[i]);
    }

    printf("----------------- NAMES ----------------\n");
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < STRING_LENGTH; j++) {
            if (*(myList[i] + j) == NULL){
                // printf(".");
                break;
            }
                
            printf("%c", *(myList[i] + j));
        }
        printf("\n");
    }
    

    return 0;
}