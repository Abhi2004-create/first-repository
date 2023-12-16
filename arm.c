#include<stdio.h>

int main(){
    int sum,num,n,rem,cube;
    printf("Armstrong numbers are\n");
    for(num=100;num<=999;num++)
    { sum=0;
      n=num;
      while(n>0)
      {
        rem=n%10;
        n=n/10;
        cube=rem*rem*rem;
        sum=sum+cube;
      }
     if(num==sum)
     printf("%d\n",num);
    }
    return 0;
}