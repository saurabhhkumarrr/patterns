#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a linked list
struct Node* createLinkedList(int n) {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode = NULL;

    for (int i = 0; i < n; ++i) {
        // Create a new node
        newNode = (struct Node*)malloc(sizeof(struct Node));

        if (newNode == NULL) {
            perror("Memory allocation failed");
            exit(EXIT_FAILURE);
        }

        // Input data for the node
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &(newNode->data));

        // Set the next pointer to NULL
        newNode->next = NULL;

        // If it's the first node, set it as the head
        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            // Link the new node to the previous one
            temp->next = newNode;
            // Move the temp pointer to the newly added node
            temp = temp->next;
        }
    }

    return head;
}

// Function to display the linked list
void displayLinkedList(struct Node* head) {
    struct Node* current = head;

    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    int n;

    // Input the number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Create the linked list
    struct Node* head = createLinkedList(n);

    // Display the linked list
    displayLinkedList(head);

    return 0;
}
