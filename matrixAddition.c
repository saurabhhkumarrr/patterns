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
    }
    //Entering rows and columns of second matrix

    
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
    }
    //giving output second matrix

    printf("second matrix is \n");
    for(i=1;i<=a;i++){
        for( j=1;j<=b;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
        //giving output second matrix

    printf("First matrix is \n");

    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }   
        //Result
        int x,y;
        for(i=1;i<=m;i++){
          for(j=1;j<=n;j++){
            result[i][j]=arr1[i][j] + arr2[i][j];
          }
            printf("\n");

        }
                
    printf("addition result\n");
        for(i=1;i<=m;i++){
          for(j=1;j<=n;j++){
            printf("%d ",result[i][j]);
          }
            printf("\n");

        }
        return 0;
}