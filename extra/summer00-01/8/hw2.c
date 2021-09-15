#include <stdio.h>

int main() {

    int i = 1, j = 1;

    // i++ -> i += 1 

    /*
    [1]: check condition j = 1
    [2]: block 
        i = 1
        1 <= 4
        j = 1
        end of expression i = 2
        print(21)
    [3]: check condition j = 1
    [4]: block 
        i = 2
        2 <= 4
        j = 1
        end of expression i = 3
        print(31)
    [5]: check condition j = 1
    [6]: block 
        i = 3
        3 <= 4
        j = 1
        end of expression i = 4
        print(41)
    [7]: check condition j = 1
    [8]: block 
        i = 4
        4 <= 4
        j = 1
        end of expression i = 5
        print(51)
    [9]: check condition j = 1
    [10]: block 
        i = 5
        5 <= 4
        j = 0
        end of expression i = 6
        print(60)
    [11]: check condition j = 0
    [12]: end of program   
    */
    for (;j; printf("%d%d\t",i,j))
        j = i++ <= 4;

    return 0;
}
