#include<stdio.h>
int fact(int n);
int main()
{
    int num,f=0;
    printf("Enter the number \n");
    scanf("%d",&num);
    f=fact(num);
    printf("The factorial of the given number is \n%d",f);
}
int fact(int n)
{
  int factorial=1;
  if(n==1)
  return 1;
  else if(n==0)
  return 1;
  else
  return factorial=n*fact(n-1);
}