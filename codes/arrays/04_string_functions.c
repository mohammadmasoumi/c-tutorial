#include <stdio.h>
#include <string.h>

int main() {

    char str1[12] = "str1";
    char str2[12] = "str2";
    
    char str1cpy[12];
    char str1cat[12] = "str1cat";

    char *ptr2ch;
    char *ptr2str;

    int len;
    int cmp;

    // copy str1 to str1cpy
    strcpy(str1cat, str1);
    printf("str1cpy: %s\n", str1cat);

    // concatinate str1 and str1cat
    strcat(str1cat, str1);
    printf("str1cat: %s\n", str1cat);

    // str1 length
    len = strlen(str1);
    printf("str1 length: %d\n", len);

    // compare s1 to s2
    cmp = strcmp(str1, str2);
    printf("s1 compare to s2: %d\n", cmp);

    // the first occurence of a character.
    ptr2ch = strchr(str1, 's');
    printf("ptr to first occurence of s: %p\n", ptr2ch);

    // the first occurence of a string.
    ptr2str = strstr(str1 , "str");
    printf("ptr to first occurence of str: %p\n", ptr2str);

    return 0;
}