#include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int a, b;
    printf("Enter a and b respectively\n");
    scanf("%d%d", &a, &b);
    printf("Value before swapping\n");
    printf("a=%d\nb=%d\n", a, b);
    swap(&a, &b);
    printf("Value After swapping\n");
    printf("a=%d \nb=%d\n", a, b);
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
