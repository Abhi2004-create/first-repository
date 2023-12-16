#include<stdio.h>

int main(){
    int sm,sesm,n,i;
    int A[100];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Entered elements are \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t\n",A[i]);
    }
      if(A[0]<A[1])
      {
        sm=A[0];
        sesm=A[1];
      }
    else
    {
      sm=A[1];
        sesm=A[0];  
    }
    for ( i = 2; i < n; i++)
    {
       if(A[i]<sm)
       {
        sesm=sm;
        sm=A[i];
       } 
       else if (A[i]<sesm)
       {
        sesm=A[i];
       }
    }
    printf("second smallest no. is\n %d",sesm);    
    
    return 0;
}