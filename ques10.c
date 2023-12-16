#include<stdio.h>
#include<conio.h>

int main (){    

float eng,hin,phy,che,math;
float total,average,percentage;

printf("Enter the subject marks\n");
scanf("%f%f%f%f%f",&eng,&hin,&phy,&che,&math);

total = eng + hin + phy + che + math;
percentage = (total/500)*100;

printf("Percentage = %.2f\n",percentage);

if(percentage>=90 && percentage<=100)
{printf("Grade = A");}

if(percentage>=80 && percentage<=90)
{printf("Grade = B");}

if(percentage>=60 && percentage<=80)
{printf("Grade = C");}

if( percentage<=60)
{printf("Grade = D");}

return 0;


}
