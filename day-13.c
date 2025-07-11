/*Problem 13
Write a C program to input any alphabet and check whether it is vowel or consonant.*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character : ");
    scanf(" %c",&ch);

    if(ch == 'a')
    {
        printf("It is vowel");
    }
    else if( ch == 'e')
    {
      printf("It is vowel");
    }
        else if( ch == 'i')
    {
      printf("It is vowel");
    }
        else if( ch == 'o')
    {
      printf("It is vowel");
    }
        else if( ch == 'u')
    {
      printf("It is vowel");
    }
   else
   {
     printf("It is Consonent");
   }
    return 0;
}