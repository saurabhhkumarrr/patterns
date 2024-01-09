#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;   
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter a no. n : ");
    scanf("%d",&n);
   int fact=factorial(n);
  // for(int i=1;i<=n;i++){
    //int fact+=i*fact;
   //}
    printf("factorial of %d is equal to %d",n,fact);
    return 0;
}