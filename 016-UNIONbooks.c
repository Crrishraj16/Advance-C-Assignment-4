#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

union Accession {
    int num;
};

struct Book {
    char title[100];
    char author[50];
    char publisher[50];
    float cost;
    union Accession acc;
};

int main() {
    struct Book books[MAX_BOOKS];
    int n, i, j, choice;
    char author[50], publisher[50];

    printf("Enter the number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i+1);
        printf("Title: ");
        getchar();
        fgets(books[i].title, 100, stdin);
        printf("Author: ");
        fgets(books[i].author, 50, stdin);
        printf("Publisher: ");
        fgets(books[i].publisher, 50, stdin);
        printf("Cost: ");
        scanf("%f", &books[i].cost);
        books[i].acc.num = i + 1;
    }

    do {
        printf("\nChoose an option:\n");
        printf("1. Books of a specific author\n");
        printf("2. Books by a specific publisher\n");
        printf("3. All books costing Rs. 500 and above\n");
        printf("4. All books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter author name: ");
                getchar();
                fgets(author, 50, stdin);
                printf("Books by %s:\n", author);
                for (i = 0; i < n; i++) {
                    if (strcmp(author, books[i].author) == 0) {
                        printf("%d. %s", books[i].acc.num, books[i].title);
                    }
                }
                break;
            case 2:
                printf("\nEnter publisher name: ");
                getchar();
                fgets(publisher, 50, stdin);
                printf("Books published by %s:\n", publisher);
                for (i = 0; i < n; i++) {
                    if (strcmp(publisher, books[i].publisher) == 0) {
                        printf("%d. %s", books[i].acc.num, books[i].title);
                    }
                }
                break;
            case 3:
                printf("\nBooks costing Rs. 500 and above:\n");
                for (i = 0; i < n; i++) {
                    if (books[i].cost >= 500) {
                        printf("%d. %s", books[i].acc.num, books[i].title);
                    }
                }
                break;
            case 4:
                printf("\nAll books:\n");
                for (i = 0; i < n; i++) {
                    printf("%d. %s", books[i].acc.num, books[i].title);
                }
                break;
            case 5:
                printf("\nExiting...");
                break;
            default:
                printf("\nInvalid choice!");
        }
    } while (choice != 5);

    return 0;
}
