#include<stdio.h>

int main(){
    int n,i,sum=0;
    printf("Enter the number up to which you want find the sum\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum+=i;
    }
   printf("Sum of numbers = %d",sum);

    return 0;
}