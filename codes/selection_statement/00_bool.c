#include <stdio.h>
#include <stdbool.h>


int main() {

    // https://stackoverflow.com/questions/1608318/is-bool-a-native-c-type
    // bool type in C89/90
    // bool keyword is native in C99
    _Bool boolean;

    boolean = true;

    if (boolean)
        printf("Helllo this is a boolean");

    return 0;
}