#include <stdio.h>


int main() {

    /*
    vowels:
    a, e, i, o ,u
    consonant:
    rest of ...
    */

   /*
    [variable]
        name: character
        value: null
        address
        data type: char
   */
    char character;

    // character value before assigning a value
    // printf("---------------------");
    // printf("%c", character);

    // prompt
    scanf("%c", &character);

    // auto-complete type sw and press ENTER
    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }

    // | or 
    // & and

    // || or 
    // && and

    /*
    a i e o u
    میخواهیم بررسی کنیم که متغیر ما حداقل یکی از مقادیر بالا را داشته باشد.

    */

   /*
    single statement -> no braces - 1 line
    compound statment  -> braces

   */

    // 7 control statement
    // 1. sequential statement -> goto 
    // 2. selection statement -> if , if else , switch
    // 3. repeition stetement -> while, do while, for 

    // if (character == 'a' || character == 'i' || character == 'e' || character == 'o' || character == 'u')
    //     printf("Vowels\n");
    // else
    //     printf("Consonants\n");

    // switch (character)
    // {
    // case 'a': // single qoute
    // case 'A':
    //     printf("Vowels %c\n", character);
    //     break;
    
    // case 'i': // single qoute
    // case 'I':    
    //     printf("Vowels\n");
    //     break;
    
    // case 'e': // single qoute
    // case 'E':
    //     printf("Vowels\n");
    //     break;
    
    // case 'u': // single qoute
    // case 'U':    
    //     printf("Vowels\n");
    //     break;
    
    // case 'o': // single qoute
    // case 'O':
    //     printf("Vowels\n");
    //     break;
    
    // default:
    //     printf("Consonants\n");
    //     break;
    // }

    // shortcuts
    // ctrl + x -> cut
    // ctrl + c -> copy
    // ctrl + v -> paste
    // ctrl + s -> save

    switch (character)
    {
    case 'a': // single qoute
    case 'A':
    case 'i': // single qoute
    case 'I':    
    case 'e': // single qoute
    case 'E':
    case 'u': // single qoute
    case 'U':    
    case 'o': // single qoute
    case 'O':
        printf("Vowels\n");
        break;

    default:
        printf("Consonants\n");
        break;
    }


    return 0;
}