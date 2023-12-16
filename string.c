#include<stdio.h>
#include<string.h>

int main(){
    char s1[]="Abhishek "; // Initialisation of s1
    char s2[]="Yadav"; // Initialisation of s2
    char s3[100];  // Declaration of s3 
    //gets(s1);  to take input s1 string
    //gets(s2);  to take input s2 string
    //puts(s1);  to print s1 string 
    //puts(s2);  to print s2 string
    printf("%d\n",strcmp(s1,s2)); // to compare two string it returns +ve, -ve or 0 value depend upon first character of s1 and s2
    printf("%s\n",strcat(s1,s2)); // to add two string
    printf("%s\n",s1); // to print s1 string and remember here s1 changes to strcat(s1,s2) So it print Abhishek yadav
    printf("%s\n",s2); // to print s2 string it only print s2 means Yadav
    printf("%d\n",&s1); // to print address of s1 string
    printf("%d\n",&s2); // to print address of s2 string
    strcpy(s3,s1); // it copy the string s1 to s3
    printf("%s",s3); // to print s3
    
   // printf("%s\n",strrev(str));   # It simply reverse the string
   // printf("The length of the string is %d\n",strlen(str));  # It gives us the length of the string
    return 0;
}