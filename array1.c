#include<stdio.h>

int main(){
    int i,j,k;
    int A[3][3],B[3][3],C[3][3];
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
    scanf("%d",&B[i][j]); }    
    }
    printf("the matrix B formed is\n");
    for( i=0;i<=2;i++)
    {
        for( j=0;j<=2;j++){
      printf("%d\t",B[i][j]);}
     printf("\n");
    }
    
    for( i=0;i<=2;i++)
    {
       
        for( j=0;j<=2;j++){
         C[i][j]=0;
        for(k=0;k<=2;k++)
        C[i][j]+=A[i][k]*B[k][j];}
    }
    printf("The multiplication of matrix is \n");
    for( i=0;i<=2;i++)
    {
        for( j=0;j<=2;j++){
      printf("%d\t",C[i][j]);}
     printf("\n");
    }

    return 0;
}
