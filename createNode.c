#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    head=0;
        for(int i=0; i<=5;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    }
// now for printing from starting
temp=head;
while(temp!=0)
{
    printf("%d\n",temp->data);
    temp=temp->next;
}
}
