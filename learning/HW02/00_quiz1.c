#include <stdio.h>

int main() {

    int i = 100;
    int j = 50;
    int j = 0;


    while(i) {

        i = i ^ (j ^ k);
        j = (i ^ k) ^ j;
        i = j ^ (i ^ k);

        printf("%d\n", i);
    }

    return 0;

}