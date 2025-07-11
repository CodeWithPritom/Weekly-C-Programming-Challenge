/*Problem 11
Write a C program to find minimum between two numbers.*/

#include <stdio.h>
int main()

{
    int a, b;

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("b is minimum");
    }
    else
    {

        printf("a is minimum");
    }

    return 0;
}