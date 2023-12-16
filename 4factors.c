#include<stdio.h>

int main(){
    int num,a;
   printf("Enter the number\n");
   scanf("%d",&num);
   printf("The factors of %d are \n",num);
   for(int i=1;i<=num;i++)
   {
    if(num%i==0)
    {
        a=i;
      printf("%d\n",a);
    }
    
   }  
    return 0;
}