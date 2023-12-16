#include<stdio.h>
#include<conio.h>

int main()
{
int a,x=0;    
printf("Enter the number\n");
scanf("%d",&a);
do
{
printf("%d\n",x+1);
x=x+1;
} while (x<a);
return 0;
}