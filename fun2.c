#include<stdio.h>
void printline (void);
void pi(void);
int main()
{
    printline ();
    pi();
    printline();
}
void printline(void)
{
    for(int i =0;i<34;i++)
    printf("%c",'-');
    printf("\n");
}
void pi(void)
{
    float p,sum,inrate,period,year;
    printf("Enter the principle amount\n");
    scanf("%f",&p);
    printf("Enter the period\n");
    scanf("%f",&period);
    printf("Enter the intrest rate \n");
    scanf("%f",&inrate);
    sum=p;
    year = 1;
    while(year<=period);
    {
        sum = sum*(1+inrate);
        year=year+1;
    }
    printf("%12.2f\n",sum);


}