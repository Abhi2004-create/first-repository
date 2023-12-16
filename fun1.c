#include <stdio.h>
void printline(void);
int main()
{
    printline();
    printf("My name is abhishek yadav\n");
    printline();
    return 0;
}
void printline(void)
{
    int i;
    for (i = 0; i < 30; i++)
    {
        printf("-");
    }
    printf("\n");
}