#include <stdio.h>

// function and method are the same concept
// function = method

// function prototype
/*
    [*] function signiture - function header
    
    return_type function_name(parameters_list)
    int my_function_name(int param1, float param2, char param3)

*/

// function prototype vs function actual declaration
/*

// function prototype
return_type function_name(parameter_list);

// function definition
return_type function_name(parameter_list) {
    // block 
    // statements
    // return ;
}

[*] function prototype's name and function definition's name must be the same name
[*] function prototype's return_type and function definition's return_type must be the same name
[*] function prototype's params_list and function definition's params_list must be the same name
[*] function prototype's params_list types and function definition's params_list types must be the same name
[*] function prototype's params_list order and function definition's params_list order must be the same name

[*] function prototype's params_list order and function definition's params_list order can be the same name

*/

/*
function's name can be any valid name in C(the same concept as we had for variable naming). 

[*] it must not start with number. 

*/

int square(int y);

int main(){

    for (int idx=0; idx < 10; idx++){
        // function call 
        printf("%d\n", square(idx));

        /*
        The expected ouput
        0
        1
        4
        9
        16
        25
        36
        49
        64
        81
        */
    }

    return 0;
}

// define function block 
int square(int x) {
    return x * x;
}

