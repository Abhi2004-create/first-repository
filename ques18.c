#include <stdio.h>

int main()
{
    int num, rem, rn = 0, i;
    printf("Enter the number \n");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        rn = rn*10+rem;
        num/=10;
    }
   printf("reverse of a number is\n%d\n",rn);

    return 0;
}