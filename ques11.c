#include<stdio.h>
#include<conio.h>
int main(){
char ch;
int a,b;
printf("Enter a operator\n");
scanf("%c",&ch);
printf("Enter the operands\n");
scanf("%d%d",&a,&b);
switch (ch) {
case '+':
printf("%d+%d =%d",a,b,a+b);
break;
case '-':
printf("%d-%d =%d",a,b,a-b);
break;
case '*':
printf("%d*%d =%d",a,b,a*b);
break;
case '/':
printf("%d/%d =%d",a,b,a/b);
break;
}
return 0;
}

