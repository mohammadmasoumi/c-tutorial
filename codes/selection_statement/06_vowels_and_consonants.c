#include <stdio.h>

int main() {

    char c;
    scanf("%c", &c);

    // with if else selection control
    // if (c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u')
    //     printf("%c is a vowel.\n", c);
    // else 
    //     printf("%c is a consonant.\n", c);


    // with swith case selection control
    // switch (c)
    // {
    // case 'a':
    //     printf("%c is a vowel.\n", c);
    //     break;
    // case 'e':
    //     printf("%c is a vowel.\n", c);
    //     break;
    // case 'i':
    //     printf("%c is a vowel.\n", c);
    //     break;
    // case 'o':
    //     printf("%c is a vowel.\n", c);
    //     break;
    // case 'u':
    //     printf("%c is a vowel.\n", c);
    //     break;
    // default:
    //     printf("%c is a consonant.\n", c);
    //     break;
    // }

    // with switch case selection control 2 
    // switch (c)
    // {
    // case 'a':
    // case 'e':
    // case 'i':
    // case 'o':
    // case 'u':
    //     printf("%c is a vowel.\n", c);
    //     break;
    // default:
    //     printf("%c is a consonant.\n", c);
    //     break;
    // }

    // with switch case selection control 3
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a vowel.\n", c);
        break;
    default:
        printf("%c is a consonant.\n", c);
        break;
    }

    return 0;
}