#include <stdio.h>

int main()
{
    int i,n;
    int A[100], temp = 0, max = 0;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    printf("The shorted array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }

    return 0;
}