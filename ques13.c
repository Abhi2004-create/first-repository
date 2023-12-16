#include<stdio.h>

int main(){
    int n,x;
     printf("Enter n\n");
     scanf("%d",&n);

    for (int i = 1; i <n; i++ )
    {
        n*=i;
        printf("%d\n",n);
    }
    

    return 0;
}