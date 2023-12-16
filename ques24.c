#include<stdio.h>

int main(){
    int i,num,sum=0;
    int A1[5],min=0,max=0;
    printf("Enter the elements of array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&A1[i]);

    }
    printf("Enter the number you want search\n");
    scanf("%d",&num);
    for ( i = 0; i < 5; i++)
    {
       if(A1[i]==num)
       {
        sum=1;
       }
    }
       if(sum==1)
       {
        printf("The found number is %d",A1[i]);
        
       }
       
       else{
       printf("The number is not found\n");
       }

    
    
    return 0;
}