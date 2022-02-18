#include <stdio.h>

// A variable declaration like basic data types
struct Pointer
{
    int x, y;
};

// A variable declaration with structure declaration.
// A variable declaration with struct keyword.
struct Pointer
{
    int x, y;
} p1;


int main() {
    // `struct` keyword is mandatory. 
    struct Pointer p1;

    return 0;
}