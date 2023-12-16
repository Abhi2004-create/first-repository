#include<stdio.h>

int main(){
    int i;
    int A1[5],A2[5],sum[5];
    printf("Enter the elements of first array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&A1[i]);
    }
    printf("enter the elements of second array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&A2[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        sum[i]=A1[i]+A2[i];
    }
    printf("Sum of arrays=\n");
    for ( i = 0; i < 5; i++)
    {
     printf("%d\n",sum[i]);   
    }
    
    return 0;
}