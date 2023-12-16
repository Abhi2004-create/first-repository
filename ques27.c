#include<stdio.h>

int main(){
    int i,j,sum=0;
    int A[3][3];
    printf("Enter the elements of matrix\n");
    for( i=0;i<=2;i++)
    {
        for( j=0;j<=2;j++){
      scanf("%d",&A[i][j]);}

    }
    printf("the matrix A formed is\n");
    for( i=0;i<=2;i++)
    {
        for( j=0;j<=2;j++){
      printf("%d\t",A[i][j]);}
     printf("\n");
    }
    for( i=0;i<=2;i++)
    {
        for( j=0;j<=2;j++){
      if(i==j)
      sum=sum+A[i][j];
    }}
    printf("sum = %d",sum);
    return 0;
}