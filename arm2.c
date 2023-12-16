#include<stdio.h>

int main(){
    int sum=0,num,n,rem,cube;
    printf("Enter the number\n");
    scanf("%d",&num);
      n=num;
      while(n>0)
      {
        rem=n%10;
        n=n/10;
        cube=rem*rem*rem;
        sum=sum+cube;
      }
     if(num==sum)
     {printf("It is armstrong number");}
     if(num!=sum)
     {printf("It is not armstrong number");}
    
    return 0;
}