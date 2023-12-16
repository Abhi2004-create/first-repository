#include<stdio.h>

int main(){
     int x,i,n;
    int A[100];
    printf("Enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for ( i = 0; i < n; i++)
    {
      scanf("%d",&A[i]);  
    }
    for ( i = 0; i < n; i++)
    {
      printf("%d\t",A[i]);  
    }
    printf("Enter the position of the element that you want to remove\n");
    scanf("%d",&x);
    for(i=x-1;i<n-1;i++)
    {
        A[i]=A[i+1];
    }
    printf("Array after deleting the element\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",A[i]);
    }
    
    return 0;
}