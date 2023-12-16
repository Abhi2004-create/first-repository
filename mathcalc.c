/*Arithmatic calculator*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    printf("Arithmatic calculation\n");
    while(1){
char ch;
int a,b;

scanf("%d %c %d",&a,&ch,&b);
getchar();
switch (ch) {
case '+':
printf("= %d\n",a+b);
break;
case '-':
printf("= %d\n",a-b);
break;
case '*':
printf("= %d\n",a*b);
break;
case '/':
printf("= %d\n",a/b);
break;
case '%':
printf("%d%%%d = %d\n",a%b);
break;


}
printf("\n");}
return 0;
}
