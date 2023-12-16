#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    int ele[100];
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ele[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + ele[i];
    }
    printf("sum of elements = %d", sum);

    return 0;
}