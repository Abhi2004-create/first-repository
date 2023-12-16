#include<stdio.h>
#include<conio.h>
int main(){

int n,x;
printf("Enter the number\n");
scanf("%d",&n);
x = n*(n+1)/2;
printf("sum of all numbers up to %d = %d",n,x);
return 0;

}