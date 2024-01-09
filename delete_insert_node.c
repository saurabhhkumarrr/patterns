//creating a linked list
//create and delete (end, beginning, at location)
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL, *newnode=NULL, *temp=NULL;
struct node *createLL(int n){
    for(int i=0;i<n;i++){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data of element %d : ",i+1);
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;<
    }
    temp->next=newnode;
    temp=temp->next;
}
return head;
}
struct node* display(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
    return head;
}
struct node* insend(struct node *head){
    int n;
    printf("\nenter end node : ");
    scanf("%d",&n);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    if(head==NULL){
    head=newnode;
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    return head;
}
struct node* inspos(struct node *head){
    int n,p;
    printf("\nenter the position : ");
    scanf("%d",&p);
    printf("\nenter the data : ");
    scanf("%d",&n);
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    if(p==1){
        newnode->next=head;
        head=newnode;
    }
    else{
        struct node* temp=head;
        for(int i=0;i<p-1 && temp!=NULL;i++){
            temp=temp->next;
        }
            newnode->next=temp->next;
            temp->next=newnode;
        }
    
    return head;
    }
struct node* insbeg(struct node* head){
    int n;
    printf("\n enter beg data : ");
    scanf("%d",&n);
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=head;
    head=newnode;
    return head;
}
struct node* deletebeg(struct node *head){
    struct node *temp=head;
    head=head->next;
    printf("\nThe deleted item = %d",temp->data);
    printf("\n");
    free(temp);
    return head;
}
struct node* deleteend(struct node* head){
    struct node *preptr, *temp=head;
    while(temp->next!=NULL){
        preptr=temp;
        temp=temp->next;
    }
    printf("\nThe deleted item : %d",temp->data);
    printf("\n");
    preptr->next=NULL;
    free(temp);
    return head;
}
struct node* deletepos(struct node* head){
    int n;
    printf("\nEnter pos to be deleted : ");
    scanf("%d",&n);
    printf("\nentered position : %d",n+1);
    printf("\n");
    struct node *temp=head, *preptr=NULL;
    if(n==0){
        head=temp->next;    //updating head
        printf("\nThe deleted item = %d",temp->data);
        printf("\n");
        free(temp);
        return head;
    }
    for(int i=0;i<n && temp!=NULL;i++){
        preptr=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("\nposition invalid");
        exit(1);
    }
    printf("deleted item : %d",temp->data);
    printf("\n");
    preptr->next=temp->next;
    free(temp);
    return head;
}
int main(){
    int n;
    printf("enter no of node : ");
    scanf("%d",&n);
    struct node *head=NULL;
    head=createLL(n);
    head=insbeg(head);
    head=display(head);
    head=insend(head);
    head=display(head);
    head=inspos(head);
    head=display(head);
    head=deletebeg(head);
    head=display(head);
    head=deleteend(head);
    head=display(head);
    head=deletepos(head);
    head=display(head);
    return 0;
}