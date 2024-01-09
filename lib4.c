#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

struct library{
    char book[100];
    char author[100];
    int pages;
    int price;
}lib[100];

void saveLibrary(struct library lib[],int count){
    FILE *file= fopen("books.txt","w");
    if(file==NULL){
        perror("Error : File not open");
        return;
    }
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s|%s|%d|%d\n", lib[i].book, lib[i].author, lib[i].pages, lib[i].price);
    }
    fclose(file);
}

void loadFile(struct library lib[],int *count){
    FILE *file=fopen("books.txt","r");
    if(file!=NULL){
        char line[256];
        while (fgets(line, sizeof(line), file) != NULL) {
            sscanf(line, "%[^|]|%[^|]|%d|%d\n", lib[*count].book, lib[*count].author, &lib[*count].pages, &lib[*count].price);
            (*count)++;
        }
        fclose(file);
    }
}

    
int main(){
    //struct library lib[100];
    int input, count=0;
    loadFile(lib,&count);

    while(true){
    printf("\n----- Welcome to the library -----\n");
    printf("What you wanna do\n");
    printf("1. Wanna add book\n");
    printf("2. Display the books stored\n");
    printf("3. Search book by author name\n");
    printf("4. Count no of books stored here\n");
    printf("5. Exit\n");

    printf("Enter what you want from (1-5) : ");
    scanf("%d",&input);

    switch(input){
        case 1:
            if(count<100){ //wanna add book
                printf("Enter the book name : ");
                scanf(" %[^\n]s",lib[count].book);
                printf("Enter Author name : ");
                scanf(" %[^\n]s",lib[count].author);
                printf("No. of pages : ");
                scanf("%d",&lib[count].pages);
                printf("Price of this book : ");
                scanf("%d",&lib[count].price);
                count++;
                saveLibrary(lib,count);
            }
            else{
                printf("Library is full\n");
            }
        break;
        case 2: //display info
            if(count!=0){
                printf("Book information\n");
                for(int i=0;i<count;i++){
                    printf("\n----Book %d -----\n\n",i+1);
                printf("Book name : %s\n",lib[i].book);
                printf("Author name : %s\n",lib[i].author);
                printf("No. of pages : %d\n",lib[i].pages);
                printf("Price : %d\n",lib[i].price);
                }
            }
            else{
                printf("\nLibrary is Empty\n");
            }
            break;
        case 3: //Search book by author
            if(count==0){
                printf("\n>>> Attention : Library is empty <<<\n");
            }
            else{
            char author_name[100];
            printf("Enter author name : \n");
            scanf(" %[^\n]s",author_name);
            int found=0;
            for(int i=0;i<count;i++){
                if(strcmp(author_name,lib[i].author)==0){
                    found = 1;
                    printf("Book name : %s\n",lib[i].book);
                    printf("No. of pages : %d\n",lib[i].pages);
                    printf("Price : %d\n",lib[i].price);
                }
                else{
                    printf("\nBook not found\n");
                }
            }
            }
            break;
        case 4: //count no of books
            printf("No. of books : %d",count);
            break;
        case 5:
            exit(0);
        default:
        printf("Invalid choice\n");
        }
    }
    }
    