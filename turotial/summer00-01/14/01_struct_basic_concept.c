#include <stdio.h>
#include <string.h>

/*
    struct limitation
    
    []: No data hiding.
    []: No private memeber. (access modifier)
    []: No method declaration.

*/

struct Book
{
    // namem, author, id -> members
    char name[20];
    char author[20];
    int id;
};

int main()
{

    /*
    data-type: Book
    variable: book1
    */
    struct Book book1;

    // initialization - assignment
    // access to the members with dot(.)
    strcpy(book1.name, "Jungle Book");
    strcpy(book1.author, "Asghar Agha");
    book1.id = 123;

    printf("name: %s\n", book1.name);
    printf("author: %s\n", book1.author);
    printf("id: %d\n", book1.id);

    return 0;
}