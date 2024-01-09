#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node *insert(struct node *list, int item) {
    struct node *temp, *current;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->link = NULL;
    current = list;
    if (list == NULL) {
        list = temp;
    } else {
        while (current->link != NULL) {
            current = current->link;
        }
        current->link = temp;
    }
    return list;
}
int main() {
    struct node *list = NULL;
    list = insert(list, 1);
    list = insert(list, 2);
    list = insert(list, 3);
    struct node *current = list;
    while (current != NULL) {
        printf("%d  \t", current->data);
        current = current->link;
    }
    printf("NULL\n");
    return 0;
}
