#include <stdio.h>


int main() {
    int score = 0;
    int* nullPointer = NULL;

    // !(None - NULL - 0) => true 
    /*
    nullPointer != NULL
    !NULL
    */
    if (!nullPointer) {
        printf("There is null pointer.\n");
    }

    return 0;
}