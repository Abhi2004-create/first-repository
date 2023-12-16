#include<stdio.h>

int main(){
    int i,j,n,x;
    printf("Enter no. of rows\n");
    scanf("%d",&n);
    printf("Enter the number you want to print\n");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d ",x);
        printf("\n");
    }
    return 0;
}