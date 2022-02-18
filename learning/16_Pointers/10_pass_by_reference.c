#include <stdio.h>

const int COUNT = 10;


void passIntByReference(int* num);
void passArrayByReferenceWay1(int* arr);
void passArrayByReferenceWay2(int arr[]);
void passArrayByReferenceWay3(int arr[COUNT]);

int main() {
    // pass int by reference
    int score = 10;
    int *number = &score;

    passIntByReference(number);
    printf("%d\n", *number);

    // pass array by reference
    int myArray[COUNT];

    passArrayByReferenceWay1(myArray);
    printf("-----------------------------------\n");
    for (int i = 0; i < COUNT; i++)
        printf("%d\n", myArray[i]);

    passArrayByReferenceWay2(myArray);
    printf("-----------------------------------\n");
    for (int i = 0; i < COUNT; i++)
        printf("%d\n", myArray[i]);

    passArrayByReferenceWay3(myArray);
    printf("-----------------------------------\n");
    for (int i = 0; i < COUNT; i++)
        printf("%d\n", myArray[i]);


    return 0;
}

void passIntByReference(int* num) {
    *num *= 2;
    return;
}

void passArrayByReferenceWay1(int* arr) {
    for (int i = 0; i < COUNT; i++){
        arr[i] = i * 1;
    }
    return;
}

void passArrayByReferenceWay2(int arr[]) {
    for (int i = 0; i < COUNT; i++){
        arr[i] = i * 2;
    }
    return;
}

void passArrayByReferenceWay3(int arr[COUNT]) {
    for (int i = 0; i < COUNT; i++){
        arr[i] = i * 3;
    }
    return;
}

