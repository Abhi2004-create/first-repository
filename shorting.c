//selection shorting
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
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
         if(A[i]>A[j]) // for arrange in ascending
         // for arrrange in descending (A[i]<A[j])
         {
          temp=A[i];
          A[i]=A[j];
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