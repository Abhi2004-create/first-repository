#include<stdio.h>

int main()
{
float eng,hin,phy,che,math;
float total,percentage;

printf("Enter the subject marks\n");
scanf("%f%f%f%f%f",&eng,&hin,&phy,&che,&math);

total = eng + hin + phy + che + math;
percentage = (total/500)*100;  
if(percentage<40||eng<33||hin<33||phy<33||che<33||math<33)
{
    printf("You are failed");
}
else
{
    printf("You are passed");
}
    return 0;
}