#include<stdio.h>

int main(){
    char ch;
    printf("Enter the alphabet which you want to check it is vowel or not\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':

     printf("It is a vowel");
        break;
    
    default:
      printf("It is consonant or wrong input");
        break;
    }
    return 0;
}