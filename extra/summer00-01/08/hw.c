#include <stdio.h>


int main(){

    int a=3, b=4, c=4;

    /*
    == equation
    = assignment

    */
    if (c==4 || b==4 && a==2)
        // b>=a -> 1 
        // c>=1 -> 1 (true)
        // final res: 100 
        printf("%d", (c>=(b>=a)) ? 100 : 200);
    
    return 0;
}