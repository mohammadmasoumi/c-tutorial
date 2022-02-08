#include <stdio.h>
#include <math.h>

int main()
{

    /*
    control statment

        - sequential statement: goto
        - selection statement: if, if else, switch
        - repetition statement: while, do while, for
    */

    // control variable name
    // initial value

    // [1] define control variable outside of for
    // int counter;
    // for (counter = 0; counter <= 10; counter++){
    //     printf("%d", counter);
    // }

    // [2] - variable control is optional
    // int counter = 0;
    // for (; counter <= 10; counter++){
    //     printf("%d", counter);
    // }

    /*
    [1]: expression1 - initial control variable
    [2]: sxpression2 - check coninuation test
    [3]: block
    [4]: expression3
    [5]: go back to step 2  
    */

    // for (expression1; expression2; expression3) {
    // block
    // }

    // off-by-one error
    // for (int counter = 0; counter <= 10; counter++){
    //     // block
    //     // %d conversion specifier
    //     /*
    //     \n new line
    //     \t tab (8 characters)
    //     \a computer

    //     %20d -> 20 characters before
    //     %-20d -> 20 characters before
    //     */
    //     printf("%20.2f\n", (float) counter);
    // }

    // for (int counter=1; counter <= 10; counter++){
    //     printf("%-100.0lf\n", 10 * pow(10, counter));
    // }

    // [3] - no condition - infinite loop
    //
    // for (int counter = 0; ; counter++) {
    //     if (counter <= 10)
    //         break;
    //     printf("%d", counter);
    // }

    // [4] - no condition - infinite loop
    //
    // for (int counter = 0; counter <= 10; ){
    //     printf("%d", counter);
    //     counter += 1;
    // }

    // for (int counter=1; counter <= 10; ++counter) {
    //     sum += counter;
    // }

    // for (int counter=1; counter < 11; ++counter) {
    //     sum += counter;
    // }

    // for (int counter=0; counter < 10; ++counter) {
    //     sum += counter + 1;
    // }

    // for (int counter=0, sum = 0 ; counter < 10; sum += counter + 1 ,++counter);

    // for (int counter=1; counter <= 10; counter++) {
    // block
    // }

    /*
    sxpression2 - check condition
    block
    expression3 - increment control value
        ++counter
        counter++
        coutner += 1
        counter = counter + 1
    */

    //    for (expression1; expression2; expression3) {
    //        // block
    //    }

    //    expression1
    //    while (expression2) {
    //        // block
    //        expression3
    //    }

    // exception

    // break
    // continue

    // int flag = 1;

    // for (int a =0; a< 10, a++){
    //     if (flag)

    // }

    /*
    for-loop
    continue
    skip the rest
    ++counter (separate statement)
    check condition

    */
    // for (int counter = 0; counter < 10; counter++) {
    //     if (counter == 5)
    //         continue;
    //         // skip rest of code

    //     printf("%d\n", counter);
    // }

    /*
    while-loop
    continue
    skip the rest
    check condition
    */
    // int counter = 0;
    // while(counter < 10){
    //     printf("%d\n", counter);
    //     if (counter == 5)
    //         continue;

    //     ++counter;
    // }

    for (int counter = 100; counter >= 0; --counter)
    {
        printf("%d\n", counter);
    }

    return 0;
}