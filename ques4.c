#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {

float f,c;

printf("Enter temperature in Centigrade\n");
scanf("%f",&c);
f = 9*c/5+32;
printf("Temperature in Fahrenheit = %.2f",f);

return 0;

}