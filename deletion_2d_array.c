

//Error in code


#include<stdio.h>
int main(){
    int arr[100][100],i,j,r,c,row,col;
    printf("enter the no of rows you want\n");
    scanf("%d",&r);
    printf("enter the no of column you want\n");
    scanf("%d",&c);
    printf("Enter elements \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

    if(row<0 || row>r || col<0 || col>c){
        printf("invalid");
    }
    else
    {
        for(i=row;i<r-1;i++){
            for(j=col;j<c;j++){
                arr[i][j]=arr[i+1][j];
            }
        }
        r--;
        for(i=0;i<r-1;i++){
            for(j=0;j<c;j++){
            printf("%d  ",arr[i][j]);
            }
        printf("\n");
        }
    }

}
