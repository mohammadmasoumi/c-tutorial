#include <stdio.h>

// function and method are the same concept
// function = method

// function prototype
/*
    [*] function signiture - function header
    
    return_type function_name(parameters_list)
    int my_function_name(int param1, float param2, char param3)

*/

// function prototype and function actual declaration
int square(int y);


int main(){

    for (int idx=0; idx < 10; idx++){
        // function call 
        printf("%d\n", square(idx));
    }

    return 0;
}

// define function block 
int square(int x) {
    return x * x;
}

