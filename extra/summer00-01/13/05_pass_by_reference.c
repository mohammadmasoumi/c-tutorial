#include <stdio.h>

// daemon
// dynamic
int passByValueIntDouble(int num);
void passByReferenceIntDouble(int* num);

int main() {
    int score = 10;

    printf("[main]: %p\n", &score);
    score = passByValueIntDouble(score);
    printf("[score]: %d\n", score);

    passByReferenceIntDouble(&score);
    printf("[score]: %d\n", score);
    
    return 0;
}

int passByValueIntDouble(int num) {
    printf("[passByValueIntDouble]: %p\n", &num);
    return num * 2;
}

void passByReferenceIntDouble(int* num) {
    // the value of the address of pointer.
    printf("[passByReferenceIntDouble]: %p\n", num);
    // double
    *num *= 2;
}