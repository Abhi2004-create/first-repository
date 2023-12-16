#include<stdio.h>
int multiplynumber(int n);
int main()

{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %1d",n,multiplynumber(n));
    return 0;
}
int multiplynumber(int n)
{
    if(n>=1)
    return n*multiplynumber(n-1);
    else 
    return 1;
    
}
