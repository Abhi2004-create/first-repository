#include<stdio.h>
int main(){
while(1){
    char ch;
    printf("Enter the alphabet to know whether its a vowel,semi vowel or consonant.\n");
    scanf("%c",&ch);
    getchar ();
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {printf("The alphabet entered is a vowel\n");}
   else if(ch=='v'||ch=='w'||ch=='V'||ch=='W')
   {printf("The alphabet entered is a semi vowel\n");
   }
   else 
   {printf("The alphabet entered is a consonant\n");

   }

  }
  return 0;
}