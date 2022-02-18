#include <stdio.h>

int main() {
    // the ways of defining a string in C.

    // 1. write the whole string.
    printf("1. Write the whole string.\n");

    char myString1[] = "Hello";

    for(int idx = 0; idx < sizeof(myString1); idx++){
        printf("%c\n", myString1[idx]);
    }

    printf("The size of myString1: %ld\n", sizeof(myString1));

    // 2. write the characters. null-termination string.
    printf("2. Write the characters. null-termination string.\n");

    char myString2[] = {'H', 'e' ,'l' ,'l' ,'o' ,'\0'};

    for(int idx = 0; idx < sizeof(myString2); idx++){
        printf("%c\n", myString2[idx]);
    }

    printf("The size of myString2: %ld\n", sizeof(myString2));

    // 3. write the characters. null-termination string and defnied length.
    printf("3. Write the characters. null-termination string and defnied length.\n");

    char myString3[6] = {'H', 'e' ,'l' ,'l' ,'o' ,'\0'};

    for(int idx = 0; idx < sizeof(myString3); idx++){
        printf("%c\n", myString2[idx]);
    }

    printf("The size of myString3: %ld\n", sizeof(myString3));

    return 0;
}