#include<stdio.h>

int main(){
    float cp,sp,profit,loss;
    printf("Enter Coast price\n");
    scanf("%f",&cp);
     printf("Enter Selling price\n");
    scanf("%f",&sp);

    if(cp>sp)
   { printf("You are going in loss\n");
    loss=cp-sp;
    printf("loss = %.2f",loss);
   }
    else
    {
    printf("You are going in profit\n");
    profit=sp-cp;
    printf("profit = %.2f",profit);
    }
    return 0;
}