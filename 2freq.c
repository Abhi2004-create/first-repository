#include<stdio.h>

int main(){
    long long num,n;
    int i,rem;
    int freq[10];
    printf("Enter the number\n");
    scanf("%lld",&num);
    for ( i = 0; i < 10; i++)
    {
      freq[i]=0;
    }
    n=num;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        freq[rem]++;
    }
    printf("Frequency of each digit in number %lld is \n",num);
    for ( i = 0; i < 10; i++)
    {
        printf("Frequency of %d = %d\n",i,freq[i]);
    }
    
    
    return 0;
}