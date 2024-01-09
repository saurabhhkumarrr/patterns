#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *next;
};
struct stack *push(struct stack *top){
    int n,p;
    printf("\nEnter no of node you want : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("\nenter data for %d : ",i+1);
    scanf("%d",&p);
    struct stack* newnode;
    newnode=(struct stack*)malloc(sizeof(struct stack));
    newnode->data=p;
    if(top==NULL){
        newnode->next=NULL;
        top=newnode;
    }
    else{
        newnode->next=top;
        top=newnode;
    }
    }
    return top;
}
struct stack* display(struct stack *top){
    if (top==NULL){
        printf("stack is empty");
        exit(1);
    }
    struct stack *ptr=top;
    while(ptr!=NULL){
        printf("\n -> %d",ptr->data);
        ptr=ptr->next;

    }
    printf("\n");
    return top;
}
struct stack* pop(struct stack *top){
    struct stack *ptr=top;
    if(top==NULL){
        printf("stack underflow");
    }
    top=top->next;
    printf("\nthe deleted item is : %d",ptr->data);
    free(ptr);
    return top;
}
int main(){
    struct stack *top=NULL;
    top=push(top);
    top=display(top);
    top=pop(top);
    top=display(top);
    return 0;
}