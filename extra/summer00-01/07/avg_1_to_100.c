#include <stdio.h>

int main()
{

    /*
    avg 1 to 100

    */

    int counter = 1;
    int count;
    scanf("%d", &count);

    // 1 - 200
    // sum
    // sum / count

    /*
    counter-controlled

    int counter = 1

    while(counter <= 100) {
        // counter = 1
        // counter = 2
        // counter = 3
        // counter = 4
        
        counter += 1;
    } 
    */

    int total = 0;

    while (counter <= count)
    {
        // printf("counter is: %d\n", counter);
        // unary  - 1 operand - 1 operator
        // binary - 2 operands - 1 operator
        // pre-increment -> ++counter
        // post-increment -> counter++
        // --counter pre-decrement
        // counter-- post-decrement
        // counter += 1 is equavalent  ++counter
        total += counter;
        ++counter;
    }
    /*
    int / int = int
    7 / 2 = 3
    7 / 2 = 3.5?
 
    operande -> the same data type
    int / int
    float / float

    
    float / int -> float / float (iimplicit convert)

    */

    /*
    (float) total / count
    
    total -> float
    count -> int ??
    count -> float (implicit)
    ________________________________________________________________
    int, float => int -> float
    float, double -> float -> double
    int, double => int -? double

    float / float
    */

    printf("avg: %.2f", (float)total / count);

    return 0;
}