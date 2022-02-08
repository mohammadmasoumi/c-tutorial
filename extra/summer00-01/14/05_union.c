#include <stdio.h>

typedef union myUnion
{
    int a;
    char b;
    float c;
} my_union;

int main()
{
    my_union u;

    u.a = 12;
    printf("u.a: %d\n", u.a);

    u.b = 'C';
    printf("u.b: %c\n", u.b);

    u.c = 10.0;

    printf("u.a: %d\n", u.a);
    printf("u.b: %c\n", u.b);
    printf("u.c: %f\n", u.c);

    unsigned int a = -12;
    printf("a: %d\n", a);

    // inifinitive loop
    while (1)
    {
    }

    for (;;)
    {
    }

    printf("char: %d\n", (int)sizeof(char));
    printf("int: %d\n", (int)sizeof(int));
    printf("unsigned int: %d\n", (int)sizeof(unsigned int));
    printf("float: %d\n", (int)sizeof(float));
    printf("double: %d\n", (int)sizeof(double));
    printf("long: %d\n", (int)sizeof(long));
    printf("long long: %d\n", (int)sizeof(long long));

    printf("%d\n", (int)sizeof(u));

    return 0;
}