/*Problem 14
Write a C program to find maximum between three numbers.*/


#include <stdio.h>

int main()
{
   int a,b,c;

   printf("Enter a : ");
   scanf("%d",&a);

      printf("Enter b: ");
   scanf("%d",&b);

      printf("Enter c : ");
   scanf("%d",&c);

   if(a>b)
   {
    if(a>c)
   {
    printf("Maximum number is : %d",a);
   }
   else{
    printf("Maximum number is : %d",c);
   }
   }

   else
   {
     if(b>c)
     {
        printf("Maximum number is : %d",b);

     }
     else
     {

        printf("Maximum number is %d",c);
     }
   }




    return 0;
}