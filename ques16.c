#include<stdio.h>
#include<math.h>

int main(){

    int i,n,count=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    if(n%i==0)
   {
      count=count+1;
   }
    if(count==2)
    {printf("it is a prime number\n");}
    else
    {printf("it is not a prime number\n");}


    return 0;
}