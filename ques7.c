#include<stdio.h>

int main(){
    int i,num;
    int A1[5];
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
        printf("The found number is %d",A1[i]);
        return 0;
       }
    }
    printf("Element not found");
    
}