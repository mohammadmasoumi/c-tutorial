#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void charMalloc(void);
void intMalloc(void);


int main (){

    /*
    void *malloc(size_t size);
    ptr = (castType*) malloc(size);

    return a null pointer which needs to be casted to another date type
    The name "malloc" stands for memory allocation.

    The malloc() function reserves a block of memory of the specified number of bytes. 
    And, it returns a pointer of void which can be casted into pointers of any form.

    This function allocates an array of num bytes and leave them uninitialized.
    */
    charMalloc();
    intMalloc();
    
    return 0;
}


void charMalloc(void) {
    char name[100];
    char *description;

    strcpy(name, "Hello world");

    // allocate memory dynamically
    description = (char*) malloc(200 * sizeof(char));

    if (description == NULL) 
        fprintf(stderr, "Error - unable to allocate required memory\n");
    else 
        strcpy(description, "Hello world to the programmers.");
    
    printf("name: %s\n", name);
    printf("description: %s\n", description);
}

void intMalloc(void) {
    int* ptr, n, m, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);
    // Segmentation fault (core dumped)
    ptr = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        printf("%p: ", ptr + i);
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    // free(ptr);

    printf("Sum: %d\n", sum);
    printf("ptr: %p\n", ptr);
    printf("---------------------\n");
    
    for (int i = 0; i < n; i++){
        printf("%p: %d\n", ptr + i, *(ptr + i));
    }

    // reallocating memory
    printf("Enter m: ");
    scanf("%d", &m);
    ptr = realloc(ptr, m * sizeof(int));

    for (int i = 0; i < m; i++){
        printf("%p: ", ptr + i);
        scanf(" %d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum: %d\n", sum);
    printf("ptr: %p\n", ptr);
    printf("---------------------\n");
    
    for (int i = 0; i < m; i++){
        printf("%p: %d\n", ptr + i, *(ptr + i));
    }

    free(ptr);

    
}

