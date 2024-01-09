#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack[MAX];
int top = -1;
void push (int data){
    if(top==MAX-1){
        printf("stack overflow\n");
        return;
    }
    top++;
    stack[top]=data;
}
int pop(){
    int value;
    if(top==-1){
        printf("underflow");
        exit(1);
    }
   value = stack[top];
    top--;
    printf("deleted item = %d\n",value);
}
void display(int stack[]){
    int i;
    if(top==-1){
        printf("underflow");
        return;
    }
    for(i=top;i>=0;i--){
        printf("%d",stack[i]);
        printf("\n");
    }
}
int main(){
push(10);push(50);push(62);push(25);push(68);
pop();pop();

display(stack);
return 0;
}
