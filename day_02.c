/*Problem 2

Write a program to take an integer, a floating-point number, and a character as input from the user and print them.
*/

#include <stdio.h>

int main()
{
    int i;
    float f;
    char ch;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a floating-point number: ");
    scanf("%f", &f);

    printf("Enter a character: ");  // Add a space before %c to consume any leftover newline character
    scanf(" %c", &ch);

    printf("Your entered integer number is : %d\n", i);
    printf("Your entered float number is : %f\n", f);
    printf("Your entered integer number is : %c\n", ch);
    return 0;
}