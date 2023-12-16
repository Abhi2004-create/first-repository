#include<stdio.h>

int main(){
    int phy, che, math;
    float total;
    printf("Enter physics marks\n",phy);
    scanf("%d",&phy);
    printf("Enter physics marks\n",che);
    scanf("%d",&che);
    printf("Enter physics marks\n",math);
    scanf("%d",&math);
    total = (phy + che + math)/3;
    printf("Percentage = %f\n",total);
    if ((total>40)||phy>=33||che>=33||math>=33)
    {
       printf("you are passed");
    }
    else{printf("You are failed");}
    

    
    return 0;
}