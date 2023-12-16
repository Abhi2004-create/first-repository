#include<stdio.h>
#include<string.h>
void str ();

int main(){
    str();
    return 0;
}
void str()
{
    char name[10] ;
    gets(name);
    char sname[7] ="Yadav";
    char fname[20];
    strcat(name,sname);
    printf("Full name is : %s\n",name);
    strcpy(fname,name);
    printf("Full name is : %s\n",fname);
    int x = strlen(fname);
    printf("The length of the string is : %d ",x);
}