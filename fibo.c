#include<stdio.h>

int main(){
    int i,n,t1=0,t2=1,nextterm=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Fibonacci series having first term t1=%d and t2=%d\n",t1,t2);
    for(i=1;i<=n;i++)
    {  printf("%d\n",nextterm);
        t1=t2;
       t2=nextterm;
       nextterm=t1+t2;
    }
    return 0;
}