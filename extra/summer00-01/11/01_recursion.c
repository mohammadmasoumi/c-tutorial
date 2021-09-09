#include <stdio.h>

/*
// heap | stack

First In Last Out

push(fibo(10))
push(extraFunc())
pop(extraFunc())
pop(fibo(10))

fibo(10) --> extraFunc() -> extraFunc() --> fibo(10)

|-----------------|
|    extraFunc()  |
|    fibo(10)     |
|                 |
|                 |
|-----------------|
Exception: Stackoverflow
*/

/*
fibo:

1, 1, 2, 3, 5, ... 

2 = 1 + 1
3 = 2 + 1

f(n) = f(n-1) + f(n-2)
fibo(n) = fibo(n-1) + fibo(n-2)


                                fibo(4)
                        fibo(3)         +      fibo(2)
                fibo(2)    +    fibo(1)   fibo(1)    +    fibo(0)      
            fibo(1)    +    fibo(0)

*/

int fibo(int a, char caller);
// void extraFunc();

int main() {
    
    fibo(4, 'm');
    
    // the rest of the code
    
    return 0;  
}

int fibo(int a, char caller){
    // extraFunc();
    // caller: a, b, m
    printf("Input is: %d | Caller: %c\n", a, caller);

    if (a <= 1)
        return 1;

    int result = fibo(a-1, 'a') + fibo(a-2, 'b'); 

    // result
    printf("result is: %d\n", result);

    return result;
}

// void extraFunc(){
//     printf("Extra function");
// }


