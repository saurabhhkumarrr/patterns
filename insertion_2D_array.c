#include<stdio.h>
int main(){
    int arr[100][100],i,j,c,r,col,row,element;
    printf("enter no. of columns\n");
    scanf("%d",&c);
    printf("enter no. of rows\n");
    scanf("%d",&r);


    printf("Enter elements\n");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
        scanf("%d",&arr[i][j]);
        }
    }

    printf("Elements before shifting\n");
        for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
        printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter row to insert\n");
    scanf("%d",&row);
    printf("Enter column to insert\n");
    scanf("%d",&col);


    if(row<0 || row>r || col<0 || col>c){
    printf("invalid position\n");
    }
    else{
        printf("Enter element to be inserted\n");
        scanf("%d",&element);

     // Shift elements to make room for the new element
        for (i = r - 1; i >= row; i--) {
            for (j = c - 1; j > col; j--) {
                arr[i][j] = arr[i][j - 1];
            }
        }
    arr[row][col]=element;
    }

    printf("Elements After shifting\n");
    for(i=1;i<=r;i++){
    for(j=1;j<=c;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
    }

return 0;
}