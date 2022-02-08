#include <stdio.h>
#include <string.h>

int main()
{
    // https://www.tutorialspoint.com/cprogramming/c_strings.html
    // string a = "myString";
    // Implicitly add null-termination character.
    char str1[] = "Hello";
    char str3[] = "Hello";
    char str4[] = "HelloWorld";
    char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    int lenthOfstr1 = sizeof(str1) / sizeof(str1[0]);
    char str1cpy[lenthOfstr1];
    char str1cat[] = "World";

    int lengthOfstrcpy;
    int str1CmpStr3, str1CmpStr4, str1CmpStr5;

    /*
    string.h functions

    */
    // copy str1 to str1cpy
    strcpy(str1cpy, str1);
    printf("str1cpy: %s\n", str1cpy);

    // concatenation str1cat += str1;
    strcat(str1cat, str1);
    printf("str1cat: %s\n", str1cat);

    // length of str - minus 1
    lengthOfstrcpy = strlen(str1cpy);
    printf("lengthOfstr1cpy: %d\n", lengthOfstrcpy);
    printf("length of str1cpy array: %d\n", sizeof(str1cpy) / sizeof(str1cpy[0]));

    // compare str1 to str3
    /*
    0 => equal
    <0(-1) => str1 < str2
    >0(+1) => str1 > str2
    */
    str1CmpStr3 = strcmp(str1, str3);
    // ternary operator
    printf("str1CmpStr3: %s", str1CmpStr3 == 0 ? "str1 is equal to str3" : "str1 is not equal to str3");

    str1CmpStr4 = strcmp(str1, str4);
    printf("str1CmpStr4: %d\n", str1CmpStr4);

    str1CmpStr5 = strcmp(str4, str1);
    printf("str1CmpStr5: %d\n", str1CmpStr5);

    // compare ascii codes
    printf("a: %d, A: %d\n", 'a', 'A');
    printf("a?A: %d\n", strcmp("a", "A"));
    printf("a?b: %d\n", strcmp("a", "b"));

    // strchr(s1, ch)
    // Returns a pointer to the first occurrence of character ch in string s1.
    // Returns a pointer to the first occurrence of string s2 in string s1.
    printf("strchr: %p\n", strchr(str4, 'l'));
    printf("strstr: %p\n", strstr(str4, "ll"));

    // print whole sting
    // printf("str1: %s\n", str1);
    // printf("str1[0]: %c\n", str1[0]);

    // null-termination: '\0' - indicates end of the string
    // int lenOfstr1 = sizeof(str1)/sizeof(str1[0]);
    // printf("sizeof str1: %d\n", lenOfstr1);

    // index == i
    // for (int i=0; i<lenOfstr1; i++){
    //     printf("str1 at index %d: %c\n", i, str1[i]);
    // }

    // int lenOfstr2 = sizeof(str2)/sizeof(str2[0]);

    // for (int i=0; i<lenOfstr2; i++){
    //     printf("str2 at index %d: %c\n", i, str2[i]);
    // }

    // compare address of str1 and str3
    // if (str1 == str3) {
    //     printf("str1 is equal to str3!\n");
    // }

    return 0;
}