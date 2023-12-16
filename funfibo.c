#include<stdio.h>
int fibo(int a, int b, int n);
int main()
{
    int x=0,y=1,num;
    printf("Enter the number of terms \n");
    scanf("%d",&num);
    printf("The fibonacci series having first term and second term 0 and 1 is \n%d\n%d\n",x,y);
    fibo(x,y,num-2);
    return 0;
}
int fibo(int a, int b,int n)
{  int nextterm;
  if(n>0)
  {
  nextterm=a+b;
  printf("%d\n",nextterm);
  a=b;
  b=nextterm;
  return fibo(a,b,n-1);
  }
  
}