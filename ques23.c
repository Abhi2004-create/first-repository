#include<stdio.h>

int main(){
    int i;
    int A1[5],min=0,max=0;
    printf("Enter the elements of array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&A1[i]);   
    }
    min=A1[0];
    max=A1[0];
    for ( i = 0; i < 5; i++)
    {
       if(min>A1[i])
       {
        min=A1[i];
       }
       if(max<A1[i])
       {
        max=A1[i];
       }

    }
    printf("Minimum=%d\nMaximun=%d",min,max);
    
    return 0;
}