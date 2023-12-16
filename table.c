#include<stdio.h>

int main(){
    int column=1,row=1,y,CM=10,RM=12;
    printf("MULTIPLICATION TABLE\n");
    do{
    do
    {
        y=row*column;
        printf("%4d",y);
        column=column+1;

    }
    while(column<=CM);
    printf("\n");
    row=row+1;
    }
    while(row<=RM);
    return 0;
}