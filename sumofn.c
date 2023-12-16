/*Sum of n given numbers*/
#include<stdio.h>
int main(){
int n,i;    
float sum=0,number;
printf("Enter the number of terms\n");
scanf("%d",&n);
printf("Enter the numbers\n");
for(i=0;i<n;i++)
{
    scanf("%f",&number);
    sum=sum+number;
    }
printf("sum = %.2f",sum);
return 0;
}