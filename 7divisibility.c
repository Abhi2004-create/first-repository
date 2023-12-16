#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num%5==0&&num%11==0&&num%13==0)
    printf("It is divisible by 5,11 and 13\n");
    else
    printf("It is not divisible by 5,11 and 13");
    return 0;
}