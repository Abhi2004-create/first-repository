#include<stdio.h>
#include<conio.h>

int main(){

int a,b,c=0;
printf("Enter two numbers to swap\n");
printf("a = ");
scanf("%d",&a);
printf("b = ");
scanf("%d",&b);
c = a;
a = b;
b = c;
printf("swap numbers are\n");
printf("a = %d\n",a);
printf("b = %d",b);

return 0;
}