#include<stdio.h>
int sum(int a, int b);          // function declaration

int sum(int a, int b) {       // function definition
int c = a+b;
return c;
}

int main()
{
    int a,b,c;
    printf("enter value of a and b\n ");
    scanf("%d \n%d",&a,&b);
    c= sum(a,b);            // function call
    printf("\nsum of a and b = %d",c);
    return 0;
}