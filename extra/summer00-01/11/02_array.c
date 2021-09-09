#include <stdio.h>

/*
Array: a list of element with the same data type.

int num1;
int num2;
...
int num100;

Such waste of time. (memory)

date_type variable_name = value;
int array1[100];

 0 1 2       ...       99
[][][][][][][][][] ... []
index = 0, 1, ... 99
element = []
element of an array

array1[0] // the first element of array1
array1[1]
...
array1[99]

* Assgiment
array1[0] = 100
*/

int main() {
    // index: 0 - 9
    int array1[10];
    int array2[] = {1, 2, 3, 4, 5};
    // int array3[] = 123;
    // filled all elements with 0
    int array4[10] = {0};

    // out of range index
    // array1[10] = 10;

    // Address is in hexadecimal
    // printf("Address: %p\n", &array1[9]);
    // printf("Element at index 10 [%p]: %d\n", &array1[10], array1[10]);

    // assiging-1
    // array1[0] = 0;
    // array1[1] = 1;

    // assigning-2
    // for(int i=0; i<10; i++) {
    //     // 
    //     array1[i] = i + 1;
    // }
    /*
    Address 
    Default value
    Index
    */
    // for(int i=0; i<10; i++) {
    //     printf("element at index[%p]: %d: %d\n", &array1[i], i, array1[i]);
    // }

    // printf("sizeof(array2): %d bytes\n", sizeof(array2));
    // printf("sizeof(array2[0]): %d bytes\n", sizeof(array2[0]));
    // printf("array2 length %d/%d: %d\n",sizeof(array2), sizeof(array2[0]), sizeof(array2)/ sizeof(array2[0]));

    // index 0 -4
    // array2[5] = 6;
    // printf("sizeof(array2): %d bytes\n", sizeof(array2));
    // printf("sizeof(array2[0]): %d bytes\n", sizeof(array2[0]));
    // printf("array2 length %d/%d: %d\n",sizeof(array2), sizeof(array2[0]), sizeof(array2)/ sizeof(array2[0]));    

    int lenArray4 = sizeof(array4)/sizeof(array4[0]);
    for (int i=0; i<lenArray4; ++i) {
        printf("element at index %d: %d\n", i, array4[i]);
    }

    return 0;
}