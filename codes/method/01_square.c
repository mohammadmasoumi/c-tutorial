#include <stdio.h>

// function prototype
int square(int y);


int main(){

    for (int idx=0; idx < 10; idx++){
        // function call 
        printf("%d\n", square(idx));
    }

    return 0;
}


int square(int x) {

    return x * x;
}

