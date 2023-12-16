#include <stdio.h>

int main()
{
    int i;
    int A1[5], temp = 0, max = 0;
    printf("Enter the elements of array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A1[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - 1 - i; j++)
        {
            if (A1[j] > A1[j + 1])
            {
                temp = A1[j];
                A1[j] = A1[j + 1];
                A1[j + 1] = temp;
            }
        }
    }
    printf("The shorted array is\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", A1[i]);
    }

    return 0;
}