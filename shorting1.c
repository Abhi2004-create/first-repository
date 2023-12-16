//bubble shorting
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
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
         if(A[j]>A[j+1]) // for arrane in ascending
         //(A[j]<A[j+1]) for arrange in descending
         {
          temp=A[j+1];
          A[j+1]=A[j];
          A[j]=temp;
         }
        }
    }
    printf("\n");
    printf("The elements in assending order is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}