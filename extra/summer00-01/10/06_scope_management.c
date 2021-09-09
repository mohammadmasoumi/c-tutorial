#include <stdio.h>

// variable scope
// global variable - out side of the main
int a = 100;

// function prototype
void useless();

int main() {
    
    int a = 10;
    int b = 20;
    int c = 30;

    // declaration is not allowed without braces.
    // if (a == 10)
    //    int a = 20;
    
    if (a == 10) {
        // block scope
        int c = 40;
        // printf("%d\n", c);
        
        // printf("%d", d);
    }

    int d;

    // printf("%d\n", c);
    useless();

    return 0;
}

void useless() {
    // {
    //     int a = 10;
    //     printf("%d", a);
    // }
    /*
    first, search for the variable in the current scope.
    then, search for the variable in the outer scope (refrenced scope).
    */
    printf("[Address a in line 5]: %p\n", &a);
    printf("%d\n", a);
    a = 1000; // change a in line 5

    int a = 200;
    printf("[Address a in line 47]: %p\n", &a);
    printf("%d\n", a); // a from line 46
    
    if (a == 200) {
        a = 400; // from the line 46.
        
        int a = 300;
        printf("[Address a in line 54]: %p\n", &a);
        printf("%d\n", a); // a from the line 52.
        a = 500; // a from the line 52.
    }
    a = 600; // a from line 46

    printf("%d\n", a);

}