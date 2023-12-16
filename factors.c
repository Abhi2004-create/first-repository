/*to find factors of the numbers*/
#include<stdio.h>
#include<conio.h>

int main(){
    while(1){
    int num,i;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Factors of the number %d are: \n",num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {printf("%d\n",i);}
    }
    }
    return 0;
}