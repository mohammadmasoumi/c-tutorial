#include <stdio.h>

int main() {
    // define a variable
    // data_type: char
    // name: score
    // value: null
    char score;

    // % is `conversion specifier`
    printf("Please enter a character ... \n");
    scanf("%c", &score);

    switch (score)
    {
    // constant-expression
    case 'A':
    case 'a':
        printf("I've got an a/A\n");
        break;
    
    // check two conditions together
    case 'B':
    case 'b':
        printf("I've got an b/B\n");
        break;
    
    default:
        printf("I've got sth else.\n");
        break;

    }

    return 0;
}