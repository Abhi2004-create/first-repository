// insertion shorting
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
        temp = A[i];
        j=i-1;
        while(j>=0 && A[j]>temp)
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=temp;
    }
    printf("\n");
    printf("The elements in assending order is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}