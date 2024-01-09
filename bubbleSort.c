#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n=5,temp, a[5]={5,8,2,9,1};
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
        temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    
    }
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
////////////////bubble sort