#include<stdio.h>
int main(){
int n,i,a;    
int sum=0,number;
printf("enter no of digit\n");
scanf("%d",&n);
printf("Enter the number of digit\n");
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    sum=sum+a;
}
printf("sum is %d",sum);
return 0;
}