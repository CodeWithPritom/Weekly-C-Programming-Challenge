/*Problem 8
Write a program that takes two integer values as input and swaps their values without using an additional variable. Print the values before and after swapping.*/

#include <stdio.h>
int main()
{
   int a, b;
    printf("Enter a:");
    scanf("%d", &a);

    printf("Enter b:");
    scanf("%d", &b);
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    //operation
    a = a + b ; // if a =2 and b = 4  a will be 6
    b = a - b; // now b will be 2
    a = a - b; // now a will be 4


 printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}