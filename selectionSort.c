#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,temp,n=5,a[5]={5,4,9,2,7};
    for(i=0;i<n-1;i++){
       int min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}