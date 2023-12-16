/*To find prime factors of a given number*/
#include<stdio.h>

int main(){
    while(1){
    int n,x;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Prime factors of %d are:\n",n);
    if(n<=1)
    {printf("Enter a value greater than 1");
    }
    x=2;
    do
    {
     if(n%x==0)
     {printf("%d\n",x);
     n/=x; }
     else{
        x++;
     }
    } while (x<=n);
    }
    return 0;
}