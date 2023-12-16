#include <stdio.h>
#include <math.h>

int main()
{
    int rem, n, num, a, sum = 0, count = 0;
    printf("enter the number\n");
    scanf("%d", &num);
    n = num;
    a = num;
    while (a > 0)
    {
        count++;
        a /= 10;
    }
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, count);
        n /= 10;
    }
    if (num == sum)

        printf("it is armstrong number");

    else
        printf("It is not a armstrong number");

    return 0;
}