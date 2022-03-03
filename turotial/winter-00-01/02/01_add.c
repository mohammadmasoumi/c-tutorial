// stdio is a library which contains function for standard input/output
// printf function is in stdio.f 
#include <stdio.h>

// run in windows
// gcc 01_add.c
// a.exe 

// Or - change the name of compiled file with -o 
// -o stands for -output
// gcc 01_add.c -o add.exe
// add.exe

// you must compile the program each time you change it

int main () {

    int a = 12;
    int b = 13;

    // conversion specifier 
    // %d -> decimal - integer
    // %s -> string
    // %c -> character
    // %f -> float

    // %d will be replaced by a + b result 
    // output: sum: 25
    printf("sum: %d", a + b); 

    return 0;
}