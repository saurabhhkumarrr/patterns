#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
    //function
    struct node *createLL(int n){
        struct node *head=0, *newnode=0, *temp=0;
        for(int i=1;i<=n;++i){
        newnode =(struct node*)malloc(sizeof(struct node));
        printf("\nenter the data in %d node ", i);
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=temp->next;
        }
        }
       return head; 
    }


    void displayLL(struct node *head){
        struct node *current=head;
            while(current!=0){
                printf("%d\n",current->data);
                current=current->next;
            }
    }
int main(){
    int n;
    printf("enter how much nodes you want : ");
    scanf("%d",&n);
    struct node *head= createLL(n);
    displayLL(head);
}