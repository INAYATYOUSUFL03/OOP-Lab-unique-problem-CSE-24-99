#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    int year;
};

int main() {
    int n, i;
    char search[50];
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter title of book %d: ", i+1);
        scanf(" %[^\n]", b[i].title);
        printf("Enter author: ");
        scanf(" %[^\n]", b[i].author);
        printf("Enter year: ");
        scanf("%d", &b[i].year);
    }

    printf("\nEnter author name to search: ");
    scanf(" %[^\n]", search);

    printf("\n------ Books by %s ------\n", search);
    for(i = 0; i < n; i++) {
        if(strcmp(b[i].author, search) == 0) {
            printf("Title: %s | Year: %d\n", b[i].title, b[i].year);
        }
    }

    return 0;
}

