#include <stdio.h>

/*
storage classes in C:
    - auto:
        - default variables
    - register:
        - CPU registers
    - static:
        - terminates on program termination.
    - extern:
        - from the other file.
*/
void autoScope();
void staticScope();

int main() {
    // g++ .\07.storage_class.c .\support.c
    extern int externVariable;
    printf("%d\n", externVariable);

    autoScope();
    autoScope();
    staticScope();
    staticScope();
    return 0;
}

void autoScope() {
    // allocation memory
    int autoVariable;
    // initialize variable
    autoVariable = 10;
    printf("%d\n", autoVariable);
    printf("address: %p\n", &autoVariable);
    // free space
}

void staticScope() {
    static int staticVariable = 10;
    staticVariable = 20;
    printf("%d\n", staticVariable);
    printf("address: %p\n", &staticVariable);   
}

void registerScope() {
    // it does not gurantee to save on register.
    register int registerVariable = 10;
    registerVariable = 20;
    printf("%d\n", registerVariable);
    printf("address: %p\n", &registerVariable);
    
}