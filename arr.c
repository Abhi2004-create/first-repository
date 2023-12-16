#include<stdio.h>

int main(){
    int i,j;
    int arr[3][3];
    printf("Enter the elements of matrix\n");
    for( i=0;i<=2;i++)
    {
        for( j=0;j<=2;j++)
      scanf("%d",&arr[i][j]);

    }
    printf("the matrix formed is\n");
    for( i=0;i<=2;i++)
    {
        for( j=0;j<=2;j++)
      printf("%d\t",arr[i][j]);
     printf("\n");
    }
     printf("transpose of matrix is \n");
    for( j=0;j<=2;j++)
    {
        for( i=0;i<=2;i++)
      printf("%d\t",arr[i][j]);
     printf("\n");
    }

     
    return 0;
}