#include<stdio.h>

int main(){
    int i,temp,A[6]={7,2,9,4,5,8};
    printf("Before reversing the elements of the array is\n");
    for ( i = 0; i < 6; i++)
    {
     printf("%d\t",A[i]);
    }
    printf("\n");
    printf("After reversing the elements of the array is\n");
    //for ( i = 0; i < 6; i++)
    //{
     //    printf("%d\t",A[6-i-1]);
   // }
   for ( i = 0; i < 6/2; i++)
   {
    temp = A[i];
    A[i] = A[6-i-1];
    A[6-i-1] = temp;
   }
   for ( i = 0; i < 6; i++)
   {
    printf("%d\t",A[i]);
   }
   
   
    
    
    
    return 0;
}