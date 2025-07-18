/*
Problem 20
Write a C program to print “Hello World” 10 times. On each iteration “Hello World” should be displayed on new line.
*/

#include <stdio.h>
int main()
{
  for(int i = 1; i<=10; ++i)
  {
    printf("i : %d\t",i);
    printf("Hello world\n");
  }
 

return 0;
}