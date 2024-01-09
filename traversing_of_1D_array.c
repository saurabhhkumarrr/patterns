#include<stdio.h>
int main(){
    int arr[100],i,j,size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the elements : \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}