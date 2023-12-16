#include<stdio.h>
int areaofrec(int x);
int main(){
    int l;
    printf("Enter the length and breadth of rectangle\n");
    scanf("%d",&l);
    int a= areaofrec(l);
    printf("area of square is\n%d",a);
}
int areaofrec(int x)
{
  int area;
  area = x*x;
  return (area);  
}
