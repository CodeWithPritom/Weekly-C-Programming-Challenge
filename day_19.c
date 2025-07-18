/*
Problem 9
Write a program that takes an integer input representing a student's score. If the score is 40 or above, print "Pass"; otherwise, print "Fail". Use the ternary operator.
Sample Input
Sample Output
39
Fail
72
Pass
2
*/

#include <stdio.h>

int main()

{
   int a;
   printf("Enter a: ");
   scanf("%d",&a);
   
   char* result = (a >= 40)?"Pass" : "fail";

   printf("result : %s",result);



    return 0;
}
