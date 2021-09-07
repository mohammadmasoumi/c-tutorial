#include <stdio.h>

int main() {


    /*
    Pointer: pointer is a varible whose address is the address of another variable.

    type *var-name;
    type* var-name;
    type * var-name;
    */

    int aVariable = 10;

    printf("************************ Variable's address and value ************************\n");
    printf("The value of aVariable: %d\n", aVariable);
    printf("The address of aVariable: %p\n", &aVariable);

    printf("************************ Pointer declaration ************************\n");
    int *anIntPonter; // a Pointer to an integer 
    char *aCharPointer; // a Pointer to a char
    float *aFloatPointer; // a Pointer to a float
    double *aDoublePointer; // a Pointer to a double

    int* anotherIntPointer; // a Pointer to an integer 
    char* anotherCharPointer; // a Pointer to a char
    float* aontherFloatPointer; // a Pointer to a float
    double* anotherDoublePointer; // a Pointer to a double

    int * ip; // a Pointer to an integer 
    char * cp; // a Pointer to a char
    float * fp; // a Pointer to a float
    double * dp; // a Pointer to a double

    // printf("anIntPonter: %d\n", *anIntPonter);
    // printf("aCharPointer: %c\n", *aCharPointer);
    // printf("aFloatPointer: %f\n", *aFloatPointer);
    // printf("aDoublePointer: %lf\n", *aDoublePointer);

    // printf("anotherIntPointer: %d\n", *anotherIntPointer);
    // printf("anotherCharPointer: %c\n", *anotherCharPointer);
    // printf("aontherFloatPointer: %f\n", *aontherFloatPointer);
    // printf("anotherDoublePointer: %lf\n", *anotherDoublePointer);

    // --------------------------------------------------------------------------    
    int pValue1 = 5;
    int *pAddress1;
    pAddress1 = &pValue1;

    int pValue2 = 5;
    int *pAddress2 = &pValue2;

    printf("pValue1: %d - pAddress1: %p - size of pValue1: %ld bytes\n", *pAddress1, pAddress1, sizeof(pValue1) / sizeof(int));
    printf("pValue2: %d - pAddress2: %p - size of pValue2: %ld bytes\n", *pAddress2, pAddress2, sizeof(pValue2) / sizeof(int));

    return 0;
}