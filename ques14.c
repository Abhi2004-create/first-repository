#include<stdio.h>

int main(){
    int i,n,s1=0,s2=0;
    printf("Enter the number up to which you want to find the sum of even and odd number\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        if(i%2==0)
            s1=s1+i;
        else
        s2=s2+i;
    }
    printf("sum of even numbers = %d\n",s1);
    printf("sum of odd numbers = %d",s2);
    
    return 0;
}