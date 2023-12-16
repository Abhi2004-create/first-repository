/*to find no. of years, months, and days by entering number of days*/
#include<stdio.h>

int main(){
    int years,months,days;
    printf("Enter days\n");
    scanf("%d",&days);
    years=days/365;
    months=(days%365)/30;
    days=((days%365)%30);
    printf("years= %d Months= %d days= %d",years,months,days);
    return 0;
}