#include<stdio.h>
#include<string.h>
struct student 
{
int id;
char name[50];
int marks;
float percentage;

};

int main(){
    struct student abhi = {1,"Abhishek",403,403/5};
    struct student anu = {2,"Anurag",415,415/5};
    struct student kar = {3,"Kartikey",410,410/5};
    //abhi.id = 1;
    //strcpy(abhi.name,"Abhishek");
    //abhi.marks = 442;
    //abhi.percentage = 442/5 ;
    //anu.id = 2;
    //strcpy(anu.name,"Anurag");
    //anu.marks = 415;
    //anu.percentage = 415/5 ;
    //kar.id = 3;
    //strcpy(kar.name,"Kartikey");
    //kar.marks = 403;
    //kar.percentage = 403/5 ;
    for ( int i = 0; i < 35; i++)
       {
        printf("-");
       }
       printf("\n");
          printf("Id is: %d\n",abhi.id);
        printf("Name is: %s\n",abhi.name);
       printf("Marks is: %d\n",abhi.marks);      
printf("Percentage is: %.2f\n",abhi.percentage);
for ( int i = 0; i < 35; i++)
       {
        printf("-");
       }
       printf("\n");
          printf("Id is: %d\n",anu.id);
        printf("Name is: %s\n",anu.name);
       printf("Marks is: %d\n",anu.marks);
printf("Percentage is: %.2f\n",anu.percentage);
for ( int i = 0; i < 35; i++)
       {
        printf("-");
       }
       printf("\n");
          printf("Id is: %d\n",kar.id);
        printf("Name is: %s\n",kar.name);
       printf("Marks is: %d\n",kar.marks);
printf("Percentage is: %.2f\n",kar.percentage);
for ( int i = 0; i < 35; i++)
       {
        printf("-");
       }
    
    return 0;
}




