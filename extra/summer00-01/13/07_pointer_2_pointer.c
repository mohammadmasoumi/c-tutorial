#include <stdio.h>

int main()
{

    /*
    pointer to pointer

    */

    int score = 10;
    int *p = &score;
    int **p2p = &p;

    printf("[Value] score: %d\n", score);
    printf("[Address] score: %p\n", &score);

    printf("[Value] p: %d\n", *p);
    printf("[Address point to] p: %p\n", p);
    printf("[Address] p: %p\n", &p);

    printf("[Value] p2p: %d\n", **p2p);
    printf("[Address point to] p2p: %p\n", &p2p);
    printf("[Address] p2p: %p\n", p2p);

    return 0;
}