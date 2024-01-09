#include<stdio.h>
int main(){
    int arr1[100][100],arr2[20][20],result[100][100],i,j,a,b,m,n;
    //Entering rows and columns of first matrix
    printf("enter rows");
    scanf("%d",&m);
    printf("enter column");
    scanf("%d",&n);
    printf("\nEnter elements of first matrix \n");
        //taking input first matrix
    for(i=1;i<=m;i++){
          for(j=1;j<=n;j++){
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }    //Entering rows and columns of second matrix
    printf("enter rows");
    scanf("%d",&a);
    printf("enter column");
    scanf("%d",&b);
    //taking input second matrix
    printf("\nEnter elements of second matrix \n");
    for(i=1;i<=a;i++){
          for(j=1;j<=b;j++){
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }          //giving output second matrix
    printf("second matrix is \n");
    for(i=1;i<=a;i++){
        for( j=1;j<=b;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }      //giving output second matrix
    printf("First matrix is \n");
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }    //Result
        if(n==a){ //multiplication possible only when column of first matrix is equal to rows of first matrix
        for(i=0;i<=m;i++){      // a--> rows of 2nd matrix
          for(j=0;j<=n;j++){    // n--> column of 1st matrix
            result[i][j]=0;
            for(int k=0;k<3;k++){
            result[i][j]=result[i][j] + (arr1[i][k] * arr2[k][j]);
          }
          }
        }          
        printf("multiplication result\n");
        for(int i=1;i<=m;i++){
          for(j=1;j<=n;j++){                   // %s --> for sign(-,+)
            printf("%d",result[i][j]);     // %s is written bcoz if we write %d then
          }                                 // it will ignore inputted -ve integers
            printf("\n");
        }
        }
        else{
            printf("multiplication not possible");
        }
        return 0;
}