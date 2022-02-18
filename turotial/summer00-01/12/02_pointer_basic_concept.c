# include <stdio.h>

int main() {

    /*
    Pointer: pointer is a variable whose value is an address of another value.
    
    unary *

    data_type *variable_name;
    data_type* variable_name;
    data_type * variable_name;
    */
    int aValue = 5;
    // int bValue;

    // bValue = aValue;
    // printf("aValue: %d\n", aValue);
    // printf("bValue: %d\n", bValue);
    
    // aValue = 6;
    // printf("aValue: %d\n", aValue);
    // printf("bValue: %d\n", bValue);

    // printf("aValue: %d\n", aValue);
    // printf("Address of aValue: %p\n", &aValue);

    int* aPointer;
    aPointer = &aValue;

    printf("aValue: %d\n", *aPointer);
    printf("aValue: %p\n", aPointer);

    aValue = 6;
    printf("aValue: %d\n", *aPointer);
    printf("aValue: %p\n", aPointer);

    // https://docs.microsoft.com/en-us/dotnet/standard/base-types/standard-date-and-time-format-strings
    // printf("%p\n", 1000); //hexadecimal converter
    // printf("\20"); ►
    
    return 0;
}