#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[50];
    char author[50];
    int year;
};

struct Library {
    struct Book books[MAX_BOOKS];
    int count;
};

void add_book(struct Library *lib) {
    if (lib->count >= MAX_BOOKS) {
        printf("Error: library is full\n");
        return;
    }

    struct Book *book = &lib->books[lib->count];
    printf("Enter title: ");
    scanf("%s", book->title);
    printf("Enter author: ");
    scanf("%s", book->author);
    printf("Enter year: ");
    scanf("%d", &book->year);
    lib->count++;
    printf("Book added successfully\n");
}

void display_books(struct Library *lib) {
    printf("Title\t\tAuthor\t\tYear\n");
    for (int i = 0; i < lib->count; i++) {
        struct Book *book = &lib->books[i];
        printf("%s\t\t%s\t\t%d\n", book->title, book->author, book->year);
    }
}

void list_books_of_author(struct Library *lib) {
    char author[50];
    printf("Enter author name: ");
    scanf("%s", author);

    printf("Books by %s:\n", author);
    for (int i = 0; i < lib->count; i++) {
        struct Book *book = &lib->books[i];
        if (strcmp(book->author, author) == 0) {
            printf("%s\n", book->title);
        }
    }
}

void list_book_count(struct Library *lib) {
    printf("Total number of books: %d\n", lib->count);
}

int main() {
    struct Library lib = {0};

    int choice;
    do {
        printf("Menu:\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_book(&lib);
                break;
            case 2:
                display_books(&lib);
                break;
            case 3:
                list_books_of_author(&lib);
                break;
            case 4:
                list_book_count(&lib);
                break;
            case 5:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice, try again\n");
                break;
        }
    } while (choice != 5);

    return 0;
}
