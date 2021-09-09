// import from  mingw
#include <stdio.h>

// reserved keywords
// https://www.ibm.com/docs/en/adfz/developer-for-zos/14.2.0?topic=programs-c-reserved-keywords

/*
Out stupid printf
*/
void scanf() {
    printf("Hello from the other side.\n");
}

void printf() {
    printf("Hello to the students.\n");
    /*
    prioriry 
    
    [1] search in the current file for the method.
    [2] search in the library(included ones).
    */
    scanf();
}

/*
Method overloading.

C does not support method overloading.

myFunc(10)
myFunc(10, 20)
myFunc(10, 20, 30)

void myFunc(int a);
void myFunc(int a, int b);
void myFunc(int a, int b, int c);
*/