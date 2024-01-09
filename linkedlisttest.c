#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
//creating nodes of linked list
//linked list representation using functions call
struct node *head=NULL, *newnode=NULL, *temp=NULL;
struct node *createll(int n){
    for(int i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data for node %d : ",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head;
}
//to display the linked list
struct node* display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\n");
    return head;
}
//adding node at the end of list
//Inserting node at the End of the linked list
struct node*atend(struct node* head){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to be added at the end of list : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        newnode->next=NULL;
    }
    else{
        struct node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }
    return head;
}
//adding node at the beginning of the linked list
//Inserting node at the beginning of the linked list
struct node* atbeg(struct node* head){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data for begging node : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        newnode->next=NULL;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
    return head;
}
//iserting node at the desired or specific location/position
struct node* atpos(struct node* head, int n){
    if(head==0){
    printf("List is empty");
    return head;
    }
    int p,d;
    printf("\n enter the position : ");
    scanf("%d",&p);
    printf("\nEnter the data to be inserted at the position %d : ",p);
    scanf("%d",&d);
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=NULL;
    if(p>n-1){
        printf("\ninvalid position");
        return head;
    }
    if(p==0){
        newnode->next=head;
        head=newnode;
    }
    else{
        struct node* temp=head;
        for(int i=1;i<p-1 && temp!=NULL; i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;
}
int main(){
    struct node *head=NULL;
    int n;
    printf("\n Enter the no of node you want : ");
    scanf("%d",&n);
    head=createll(n);
    head=display(head);
    head=atend(head);
    head=display(head);
    head=atbeg(head);
    head=display(head);
    head=atpos(head,n);
    head=display(head);
    return 0;
}


//////// Thanks 