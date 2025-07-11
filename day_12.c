/*Problem 12
Write a C program to check whether a number is negative, positive or zero.*/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d",&a);

    if(a<0)
    {

        printf("Number is Negative");
    }

    else if(a>0)
    {
        printf("Number is Positive");
    }
    else{
        printf("Number is zero");
    }
    return 0;
}