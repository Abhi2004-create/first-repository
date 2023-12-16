#include<stdio.h>

int main(){
    int i,j,n,temp;
    int A[100];
    printf("Enter the number of the elements\n");
    scanf("%d",&n);
    printf("Enter the elements \n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&A[i]);
    }
    printf("The elements of the arrray is\n");
     for(i=0;i<n;i++)
    {
    printf("%d\t",A[i]);
    }
 int max = A[0];
 int min = A[0];
 for ( i = 0; i < n; i++)
 {
    if(A[i]<min)
    {
      min=A[i];
    }
    if (A[i]>max)
    {
        max = A[i];
    }
    
 }
 printf("\n");
 printf("Maximum = %d \nMinimum = %d",max,min);
 
    return 0;
}