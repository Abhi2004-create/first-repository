// #include<stdio.h>

// int main(){
//     int *p,*q,a,b,temp=0;
//     p=&a;
//     q=&b;
//     printf("Enter the number a and b\n");
//     scanf("%d%d",&a,&b);
//     temp=*p;
//     *p=*q;
//     *q=temp;
//     printf("a=%d\nb=%d",a,b);

//     return 0;
// }

// #include<stdio.h>
// int swap(int*p,int*q)
// {
//     int t;
//     t=*p;
//     *p=*q;
//     *q=t;
// }
// int main()
// {
//     int *p,*q,a,b;
//     printf("please enter two number\n");
//     scanf("%d%d",&a,&b);
//     swap(&a,&b);
//     printf("the swapped number is %d and %d",a,b);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a,b;
 printf("please enter two number\n");
 scanf("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("the swapped number is %d and %d",a,b);
 return 0;
}