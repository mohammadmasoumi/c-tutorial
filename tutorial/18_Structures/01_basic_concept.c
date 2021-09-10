#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

int main() {

    struct Book Book1;
    struct Book Book2;

    // Book1
    strcpy(Book1.title, "Book1 Title");
    strcpy(Book1.author, "Book1 Author");
    strcpy(Book1.subject, "Book1 Subject");
    Book1.book_id = 1;

    // Book2
    strcpy(Book2.title, "Book2 Title");
    strcpy(Book2.author, "Book2 Author");
    strcpy(Book2.subject, "Book2 Subject");
    Book2.book_id = 2;

    return 0;
}