#include <stdio.h>

/*
struct Point {
    // Do not reserve memory for Point right now.
    // When you declare a variable from Point date type, it'll reserve memory for it. 
    int x;
    // int x = 1; // Compiler Error
    int y;
    // int y = 2; // Compiler Error
} p1, p2, p3;
*/

// typedef -> alias - shortcut
// point == struct Point
/*
typedef struct Int {} int;
*/
typedef struct Point {
    // Do not reserve memory for Point right now.
    // When you declare a variable from Point date type, it'll reserve memory for it. 
    int x;
    // int x = 1; // Compiler Error
    int y;
    // int y = 2; // Compiler Error
} point;

int main() {
    // struct Point p1;
    point p1;

    // syntax sugar
    // the order is important
    point p2 = {0, 1};
    
    // designated initialization. 
    point p3 = {.y = 0, .x = 1};

    scanf("%d", &p1.x);
    scanf("%d", &p1.y);

    printf("x: %d\n", p1.x);
    printf("y: %d\n", p1.y);

    return 0;
}