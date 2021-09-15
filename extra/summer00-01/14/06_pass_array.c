#include <stdio.h>


void way1(int arr);
void way2(int arr[10]);
void way3(int *p2arr);


int main() {

    int arr[10];

    // pass to method
    way1(arr);
    way2(arr[10]);
    // arr == (&arr[0] 
    way3(&arr[0]);
    way3(arr);

    return 0;
}

void way1(int arr) {

}

void way2(int arr[10]) {

}

void way3(int *p2arr) {

}