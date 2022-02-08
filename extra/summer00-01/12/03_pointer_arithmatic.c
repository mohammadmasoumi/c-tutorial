#include <stdio.h>
#include <stdlib.h>

const int MAX = 5;

int main()
{

    /*
    ++
    --
    +=
    */
    /*
    memory allocation

    # The way that you write
    void (p_type *)malloc(sizeof(p_type) * SIZE) [signiture]
    */
    // for (size_t i = 0; i < count; i++)
    // {
    //     /* code */
    // }

    // reserve 20 bytes in memory
    // (int *) cast void pointer to int pointer
    // NULL
    int *aPointer = (int *)malloc(MAX * sizeof(int));

    // Wrong - you should cast it.
    // int* aImpicitPointer = malloc(MAX * sizeof(int));

    printf("aPointer: %p\n", aPointer);
    printf("The value which aPointer points to: %d\n", *aPointer);

    // aPointer++;
    // printf("aPointer: %p\n", aPointer);
    // printf("The value which aPointer points to: %d\n", *aPointer);

    // aPointer++;
    // printf("aPointer: %p\n", aPointer);
    // printf("The value which aPointer points to: %d\n", *aPointer);

    // aPointer++;
    // printf("aPointer: %p\n", aPointer);
    // printf("The value which aPointer points to: %d\n", *aPointer);

    // aPointer++;
    // printf("aPointer: %p\n", aPointer);
    // printf("The value which aPointer points to: %d\n", *aPointer);

    // no & need
    /*
    int aValue = 1;
    scanf("%d", &aValue);
    */
    // scanf("%d", aPointer);

    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", aPointer + i);
        printf("aPointer[%d]: %d\n", i, *(aPointer + i));
    }

    /*
    Free memory and allocate random number to resereved values
    */
    // free(aPointer);

    // printf("aPointer: %p\n", aPointer);
    // for (int i = 0; i < MAX; i++) {
    //     printf("aPointer[%d]: %d\n", i, *(aPointer + i));
    // }
    /*

    */
    printf("aPointer: %p\n", aPointer);

    realloc(aPointer, MAX * sizeof(int));

    printf("aPointer: %p\n", aPointer);
    for (int i = 0; i < MAX; i++)
    {
        printf("aPointer[%d]: %d\n", i, *(aPointer + i));
    }

    /*
    calloc
    This function allocates an array of num elements each of which size in bytes will be size.
    */

    return 0;
}