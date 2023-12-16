#include<stdio.h>

int main(){
    int i,num,n;
    int A[100];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);

    }
    printf("Enter the number you want search\n");
    scanf("%d",&num);
    for ( i = 0; i < n; i++)
    {
       if(A[i]==num)
       {
        printf("The found number is %d",A[i]);
        break;
       }
       else;
       printf("The number is not found");
     }
     
    
    
    return 0;
}