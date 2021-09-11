#include <stdio.h>

const int MAX = 5;
const int STRING_LENGTH = 50; 

int main() {

    char arr[MAX][STRING_LENGTH];

    // char arr1[MAX];
    // arr1 | the address of first element.
    // scanf("%s", arr1);

    for (int i = 0; i < MAX; i++){
        /*
        arr[i] = [               ]
        arr[i] ==> the address of first element of the inner array.
        [[               ]
        [               ]
        [               ]
        [               ]]
        */
        scanf("%s", arr[i]);
    }

    // != 
    // '\n'
    // int a = 10;
    // a *= 2 => a = 10 * 2

    printf("----------------- NAMES ----------------\n");
    for (int i = 0; i < MAX; i++){
        printf("%s\n", arr[i]);
    }

    return 0;
}