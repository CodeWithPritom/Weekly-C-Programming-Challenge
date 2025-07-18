/*
Problem 21
Write a C program to print numbers from 1 to n. n will be user input.
*/

#include <stdio.h>

int main()
{
   int a = 1,n;
   printf("input n: ");
   scanf("%d",&n);

   while(a<=n)
   {

    printf("%d\n",a);

    a++;
   }
   

    return 0;
}