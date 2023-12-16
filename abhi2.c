#include <stdio.h>

int main()
{
    int i, j;
    printf("       *");
    printf("       ");

    for (j = 1; j < 6; j++)
        printf(" *");
    printf("   *         *  ");
    printf(" * * *");
    printf("\n");

    for (i = 1; i < 7; i++)
    {

        if (i == 3)
        {
             printf("   ");
            for (j = 1; j < 5; j++)
            {
                printf(" *");
            }
            printf("    ");
            for (j = 1; j < 6; j++)
            {
                printf(" *");
            }
            printf("   ");
            for (j = 0; j < 6; j++)
            {
                printf("* ");
            }
            printf("    *");
            printf("\n");
        
        }
        else if (i == 6)
        {
            printf(" *           *  ");
            for (j = 1; j < 6; j++)
                printf("* ");
            printf("  *         *  ");
            printf(" * * *");
        }
        else
        {
            for (j = 1; j < 8 - i; j++)
            {
                printf(" ");
            }
            printf("*");

            for (j = 1; j < i; j++)
            {
                printf("  ");
            }
            printf(" *");
            for (j = 1; j < 8 - i; j++)
            {
                printf(" ");
            }
            printf(" *");
            printf("        *");
            printf("  *         *");
            printf("     *");

            printf("\n");
        }
    }

    return 0;
}