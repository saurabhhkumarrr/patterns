#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *createLL(int n) {
    struct node *head = NULL, *newnode = NULL, *temp = NULL;
    for (int i = 1; i <= n; ++i) {
        struct node* newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed.\n");
            exit(EXIT_FAILURE);
        }
        printf("\nEnter the data in node %d: ", i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = temp->next;
        }
    }
    return head;
}

struct node* displayLL(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
    return head;
}

struct node *insertBeginning(struct node *head, int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

struct node *insertEnd(struct node *head, int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        struct node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

struct node *insertAtPosition(struct node *head, int data, int position) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        struct node *temp = head;
        for (int i = 1; i < position - 1 && temp != NULL; ++i) {
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Invalid position.\n");
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    return head;
}

int main() {
    int n, newData, position;
    struct node *head=NULL;
    printf("Enter how many nodes you want: ");
    scanf("%d", &n);

    head = createLL(n);
    head=displayLL(head);

    printf("\nEnter data for a new node to insert at the beginning: ");
    scanf("%d", &newData);

    // Inserting data at the beginning
    head = insertBeginning(head, newData);

    // Display the linked list after insertion at the beginning
    printf("\nLinked List after insertion at the beginning:\n");
    displayLL(head);

    printf("\nEnter data for a new node to insert at the end: ");
    scanf("%d", &newData);

    // Inserting data at the end
    head = insertEnd(head, newData);

    // Display the linked list after insertion at the end
    printf("\nLinked List after insertion at the end:\n");
    head =displayLL(head);

    printf("\nEnter data and position to insert at a specific location:\n");
    printf("Data: ");
    scanf("%d", &newData);
    printf("Position: ");
    scanf("%d", &position);

    // Inserting data at a specific position
    head = insertAtPosition(head, newData, position);

    // Display the final linked list after insertion at a specific position
    printf("\nLinked List after insertion at position %d:\n", position);
    displayLL(head);

    return 0;
}
