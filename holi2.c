#include <stdio.h>

int main()
{
   int i, j;
   printf("H         H   ");
   for (j = 1; j < 6; j++)
   {
      printf("O ");
   }
   printf("  L            I I I");
   printf("\n");

   for (i = 1; i < 8; i++)
   {
      if (i == 4)
      {
         printf("H H");
      }
      else
      {
         printf("H         H");
      }
      printf("  O         O");
      printf("  L");
      printf("              I\n");

      if (i == 3)
         for (j = 0; j < 4; j++)
         {
            printf("H ");
         }
   }
   printf("H         H   ");
   for (j = 1; j < 6; j++)
   {
      printf("O ");
   }
   printf("  ");
   for (j = 1; j < 7; j++)
   {
      printf("L ");
   }
   printf(" I I I");

   return 0;
}