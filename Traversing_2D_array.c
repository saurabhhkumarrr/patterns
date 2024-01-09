#include<stdio.h>
int main(){
    int arr[100][100],i,j,r,c;
    printf("enter no. of columns\n");
    scanf("%d",&c);
    printf("enter no. of rows\n");
    scanf("%d",&r);

    printf("enter the elements : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}