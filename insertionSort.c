#include<stdio.h>
#include<conio.h>
int main(){
    int n=5,i,j,temp;
    int a[5]={5,8,2,9,1};
        for(i=1;i<n;i++){
            temp=a[i];
            j=i-1;
            while(temp<a[j] && j>=0){
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=temp;
        }
        for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
///////////////////insertion sort