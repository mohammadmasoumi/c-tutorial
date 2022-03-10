#include <stdio.h>


int main() {

    int a = 12;

    /*
    if keyword

    {} code block
    1. if
    if (condition) {
        // code block
        // statement
    }

    2. if else
    if (condition) {
        // code block
    } else {
        // code block
    }

    3. if else if 
    // اولین جایی که شرط درست باشد بقیه را اجرا نمیکند
    if (condition1){
        // code block
    } else if (condition2) {
        // code block
    } else if (condition3) {
        // code block
    } else {
        // code block
    }

    4. 
    if (condition1) {
        // code block
    }
    if (condition2) {
        // code block
    }

    5. 
    if (condition1) {
        if (condition2) {
            // code block
        }
    }

    = assignment operator

    condition
    == 
    !=
    >=
    <=
    >
    <
    */

    /*
    only one statement
    if (condition)
        statement


    mulit-statement 
    if (condition){
        statement1
        statement2
    }
    */

    // one-line comment
    /*
    multi-line comment
    */

    if (a == 12) 
        printf("Bingo");
    else
        printf("You lost!");

    return 0;
}