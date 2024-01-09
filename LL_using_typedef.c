#include<stdio.h>
#include<stdlib.h>
typedef struct node{ //-------------------------------->typedef
    int data;
    struct node *next;
}str;  //--------------------------------------------> typedef
str *head=NULL, *newnode=NULL, *temp=NULL; //---------------------------
str *createll(int n){  //------------------------------
    for(int i=0;i<n;i++){
    newnode=(str*)malloc(sizeof(str));
    printf("enter data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else{
    temp->next=newnode;
    temp=temp->next;
    }
    }
    return head;
}
str *display(str *head){  //----------------------------
    str *temp=head;
    while(temp!=NULL){
        printf("-> %d",temp->data);
        temp=temp->next;
    }
    return head;
}
str *loc(str* head){  //---------------------------------
    int d, lc;
    printf("\nenter loc and data : ");
    scanf("%d\n%d",&lc,&d);
    str* newnode=(str*)malloc(sizeof(str)); //----------------
    newnode->data=d;
    newnode->next=NULL;
    if(lc==1){
        newnode->next=head;
        head=newnode;
    }
    else{
        str *temp=head;   // ---------------------------------
        for(int i=0;i<lc-1 && temp!=NULL;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;
}
int main(){
    //str *head=NULL;
    int n;
    printf("\n enter no. of node : ");
    scanf("%d",&n);
    head=createll(n);
    head=display(head);
    head=loc(head);
    head=display(head);

    return 0;
}