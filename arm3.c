#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0, rem, num, n = 0, p = 0, count = 0;
    printf("Enter the number\n");
    scanf("%d", &num);
    n = num;
    p = num;
    while (p > 0)
    {
        count++;
        p /= 10;
    }
    while (n > 0)
    {
        rem = n % 10;
        sum += pow(rem, count);
        n /= 10;
    }
    if (sum == num)
    {
        printf("it is armstrong number");
    }
    else
    {
        printf("It is not a armstrong number");
    }
    return 0;
}