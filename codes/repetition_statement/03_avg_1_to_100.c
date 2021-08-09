#include <stdio.h>


int main() {

    int counter = 0;
    int total = 0; 
    int count = 100;


    while (counter < count) {

        total += counter + 1;

        // ++counter;
        counter += 1;
    }

    printf("avg: %d\n", total / count);


    return 0;
}