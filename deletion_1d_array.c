#include<stdio.h>
int main(){
    int arr[100],i,position,size,element;
    printf("Enter the size of array\n");
    scanf("%d",&size);

    printf("Enter elements\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Elements before deletion\n");
    for(i=0;i<size;i++){                           //indexing start from 0
        printf("%d\t",arr[i]);                     // hence 2nd postion means 3rd position acc. to index
    }
    printf("\n");
    printf("Enter at which postion to delete\n");
    scanf("%d",&position);

    if(position<0 || position>size){
        printf("invalid position\n");
    }
    else{
    for(i=position;i<=size;i++){
        arr[i]=arr[i+1];
    }

    //arr[position]=element;

    size--;
    printf("Elements After shifting\n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    }
return 0;
}
