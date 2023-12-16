#include<stdio.h>

int main(){
  int x,i,count=0;
    long num,sum=0;
    int r[count];
    printf("Enter the number\n");
    scanf("%ld",&num);
   int a=num;
   int d=num;
   while(a>0)
   {
    count++;
    a/=10;
   }
   while(d>0)
   {
    r[i]=d%10;
    d/=10;
    
   }
   x=0;
    x=r[0];
    r[0]=r[count-1];
    r[count-1]=x;

    
   
   
    return 0;
}