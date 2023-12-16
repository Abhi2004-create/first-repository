#include<stdio.h>

int main(){
    float marks[5];
    float sum=0;
    float per;
    printf("Enter the five subjects marks\n");
    for(int i=0;i<5;i++)
    {
      scanf("%f",&marks[i]);  
    }
    for(int i=0;i<5;i++)
    {
      printf("%f\n",marks[i]);  
    }
    for(int i=0;i<5;i++)
    {
      sum=sum+marks[i];  
    }
    float avg =sum/5;
    per=sum*100/500;
    printf("sum = %f\naverage = %f\npercentage = %f ",sum,avg,per);
    return 0;
}