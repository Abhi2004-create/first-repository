#include <stdio.h>

int main()
{
    int i, j;
    int A[3][3], B[3][3], C[3][3];
    printf("Enter the elements of first matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of second matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            C[i][j] = 0;
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("The sum of matrix is \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
