/*To check the given number is prime number or not*/
#include<stdio.h>
#include<math.h>

int main(){
    while(1){
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    if(n%i==0)
    break;
    if(i>sqrt(n))
    {printf("it is a prime number\n");}
    else
    {printf("it is not a prime number\n");}
}


    return 0;
}