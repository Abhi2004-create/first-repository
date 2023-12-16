#include <stdio.h>

int main()
{
    int i, j;
    printf("*         *   ");
    printf(" * * *");
    printf("\n");

    for (i = 1; i < 8; i++)
    {
       if (i == 4)
       {
          printf("* *");
       }
       else
       printf("*  ");
       {
          printf("*         *");
       }
       printf("      *\n");

       if (i == 3)
          for (j = 0; j < 4; j++)
          {
             printf("* ");
          }
    }
    printf("*         *   ");
    printf(" * * *");

    return 0;
}