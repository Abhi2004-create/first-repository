#include<stdio.h>

int main(){
    int n,sum=0,rem;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0){
    rem=n%10;
    n/=10;
    sum+=rem;}
    printf("%d",sum);
    return 0;
}