#include<stdio.h>

int main(){
    int code=8774,pass;
    printf("Enter the password\n");
    scanf("%d",&pass);
    printf("Saved password = %d\n",code);
    if(code==pass)
    printf("Entered password is matching with saved password");
    else
    printf("Entered password is not matching with saved password");
    return 0;
}