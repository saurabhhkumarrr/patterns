#include<stdio.h>
int main(){

    int n;
   
    do{
    printf("enter n: ");
    scanf("%d",&n);
    if(n%7==0)
    break;
   }
   while(1);
   printf("thankyou");
   // printf("factorial of %d is equal to %d",n,fact);
    return 0;
}