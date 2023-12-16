#include<stdio.h>
#include<conio.h>

int main (){    

float eng,hin,phy,che,math;
float total,average,percentage;

scanf("%f%f%f%f%f",&eng,&hin,&phy,&che,&math);

total = eng + hin + phy + che + math;
percentage = (total/500)*100;

printf("Total marks = %.2f\n",total);
printf("Percentage = %.2f\n",percentage);

return 0;


}