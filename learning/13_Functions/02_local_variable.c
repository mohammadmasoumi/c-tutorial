#include <stdio.h>


int x = 100;

int localVariable(int y){
    int x = 300;

    printf("local variable x in method: %d\n", x);
}


int main() {

    printf("global variable x in main: %d\n", x);

    int x = 200;

    printf("local variable x in main: %d\n", x);

    localVariable(x);

    return 0;
}

