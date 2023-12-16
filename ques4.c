#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int rollno;
    char branch[35];
    int total;
};
int main()
{
    struct student abhi;
    strcpy(abhi.name, "Abhishek Yadav");
    abhi.rollno = 5;
    strcpy(abhi.branch, "Computer science and engineering");
    abhi.total = 84;
    printf("Name : %s\n", abhi.name);
    printf("Roll no : %d\n", abhi.rollno);
    printf("Branch : %s\n", abhi.branch);
    printf("Total Marks : %d\n", abhi.total);

    return 0;
}