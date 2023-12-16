#include<stdio.h>
int add(int x, int y );
int main()
{
    int a,b,s;
    printf("Enter the a and b\n");
    scanf("%d%d",&a,&b);
    s=add(a,b);
    printf("The sum is \n%d",s);
}
int add(int x,int y)
{
  int sum;
  sum=x+y;
  return sum;
}