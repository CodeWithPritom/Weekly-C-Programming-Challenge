/*Problem 7

Write a program that takes two integer values as input and swaps their values using an additional variable. Print the values before and after swapping.
*/


#include <stdio.h>

int main(){

   int a, b;

   printf("Enter value of a : ");
   scanf("%d", &a);

    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Before swapping : a = %d and b = %d\n", a, b);

    // swap variables

    int c;
 
    c = a;  // c store the value of a
    a = b;
    b = c;

    printf("After swapping : a = %d and b = %d\n", a,b);
    return 0;
}