#include <stdio.h>
#include <stdbool.h>


int main() {

    // https://stackoverflow.com/questions/1608318/is-bool-a-native-c-type
    // bool type in C89/90
    // bool keyword is native in C99
    _Bool C89C90boolean = true;
    bool C99Boolean = true;

    if (C89C90boolean)
        printf("Boolean in C89/C90.\n");

    if (C99Boolean) 
        printf("Boolean in C99.\n");

    return 0;
}