#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
float p,r,t,si,ci;
printf("Enter principle\n");
scanf("%f",&p);
printf("Enter rate\n");
scanf("%f",&r);
printf("Enter time\n");
scanf("%f",&t);
si = (p*r*t)/100;
printf("si = %.4f\n",si);
ci = p*pow(1 + r/100,t) - p;
printf("ci = %.4f",ci);
return 0;
}