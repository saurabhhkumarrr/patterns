#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void main(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    head=0;
    int choice;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the data : ");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if(head==0){
        head=temp=newnode;
    }
    else{
    temp->next=newnode;
    temp=newnode;
    }
    printf("wanna continue adding node press 1 otherwise 0 ");
    scanf("%d",&choice);
    }
//printing part
    temp=head;
    while(temp!=0){
    printf("%d",temp->data);
    temp=temp->next;
}
}
