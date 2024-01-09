#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}list;

list *head=0, *newnode=0, *temp=0;
list* create(int n){
    for(int i=0;i<n;i++){
        newnode=(list*)malloc(sizeof(list));         //////////  by passing values and typedef
            printf("\n enter the data : ");
            scanf("%d",&newnode->data);
            newnode->next=0;
            if(head==0){
                head=temp=newnode;
            }
            else{
                temp->next=newnode;
                temp=newnode;
            }
    }
    return head;
}
list* display(list *head){
    list *temp=head;
    while(temp!=0){
        printf("%d-> ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    return head;
}
list *end(list *head){
    list *temp=head;
    list* newnode=(list*)malloc(sizeof(list));
    printf("\nEnter the end : ");
    scanf("%d",&newnode->data);
    if(temp==0){
        head=newnode;
        head->next=0;
    }
    while(temp->next!=0){     ////////////////////// forgets the most
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=0;
    return head;
}
list* loc(list* head, int dt, int lc){   ////////// note:- first write data (dt) and then location (lc)
   list* newnode=(list*)malloc(sizeof(list));
   newnode->data=dt;
   newnode->next=0;
   if(lc==0){
    newnode->next=head;
    head=newnode;
   }
   else{
    list* temp=head;
    for(int i=1;i<lc-1 && temp!=0; i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
   }
   return head;
}

int main(){
    list *head=0;
    int n;
    printf("\n enter the node : ");
    scanf("%d",&n);
    head=create(n);
    head=display(head);
    head=end(head);
    head=display(head);
    int lc,dt;
    printf("\n enter data & loc : ");
    scanf("%d%d",&lc,&dt);
    head=loc(head,lc,dt); /////// passing values (locaton and data)
    head=display(head);

    return 0;
}