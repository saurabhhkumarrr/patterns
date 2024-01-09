#include <stdio.h>
#include <string.h>

struct library {
    char book_name[100];
    char author[100];
    int pages;
    float price;
};

void saveLibraryToFile(struct library lib[], int count) {
    FILE *file = fopen("library.txt", "w");
    if (file == NULL) {
        perror("Error opening the file");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s|%s|%d|%.2f\n", lib[i].book_name, lib[i].author, lib[i].pages, lib[i].price);
    }

    fclose(file);
}

void loadLibraryFromFile(struct library lib[], int *count) {
    FILE *file = fopen("library.txt", "r");
    if (file != NULL) {
        char line[256];
        while (fgets(line, sizeof(line), file) != NULL) {
            sscanf(line, "%[^|]|%[^|]|%d|%f\n", lib[*count].book_name, lib[*count].author, &lib[*count].pages, &lib[*count].price);
            (*count)++;
        }
        fclose(file);
    }
}

int main() {
    struct library lib[100];
    int count = 0;

    // Load the library data from the file when the program starts
    loadLibraryFromFile(lib, &count);

    int input;

    while (1) {
        printf("\nWELCOME TO E-LIBRARY\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books by a given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");

        printf("Enter one of the above: ");
        scanf("%d", &input);

        switch (input) {
            case 1: // Add book information
                if (count < 100) {
                    printf("Enter book name: ");
                    scanf(" %[^\n]s", lib[count].book_name);
                    printf("Enter author name: ");
                    scanf(" %[^\n]s", lib[count].author);
                    printf("Enter pages: ");
                    scanf("%d", &lib[count].pages);
                    printf("Enter price: ");
                    scanf("%f", &lib[count].price);
                    count++;

                    // Save the library data to the file
                    saveLibraryToFile(lib, count);

                    printf("Book information added successfully.\n");
                } else {
                    printf("Library is full. Cannot add more books.\n");
                }
                break;

            case 2: // Display book information
                if (count == 0) {
                    printf("The library is empty.\n");
                } else {
                    printf("Book information:\n");
                    for (int i = 0; i < count; i++) {
                        printf("Book %d:\n", i + 1);
                        printf("Book name: %s\n", lib[i].book_name);
                        printf("Author: %s\n", lib[i].author);
                        printf("Pages: %d\n", lib[i].pages);
                        printf("Price: %.2f\n", lib[i].price);
                    }
                }
                break;

            case 3: // List all books by a given author
                if (count == 0) {
                    printf("The library is empty.\n");
                } else {
                    char author_name[100];
                    printf("Enter author name: ");
                    scanf(" %[^\n]s", author_name);
                    int found = 0;
                    printf("Books by %s:\n", author_name);
                    for (int i = 0; i < count; i++) {
                        if (strcmp(author_name, lib[i].author) == 0) {
                            found = 1;
                            printf("Book name: %s\n", lib[i].book_name);
                            printf("Pages: %d\n", lib[i].pages);
                            printf("Price: %.2f\n", lib[i].price);
                        }
                    }
                    if (!found) {
                        printf("No books found by %s.\n", author_name);
                    }
                }
                break;

            case 4: // List the count of books in the library
                printf("Number of books in the library: %d\n", count);
                break;

            case 5: // Exit the program
                return 0;

            default:
                printf("Invalid choice. Please choose a valid option.\n");
        }
    }

    return 0;
}
    