/*Problem 5

Write a program that takes two integer inputs and performs the following operations: addition, subtraction, multiplication, division, and modulus. Print the results.
*/

#include <stdio.h>

int main(){

   int num1, num2;

    // User input for two integers
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);
    // Perform operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    int modulus = num1 % num2;

    // Print results
    printf("Addition: %d\n", sum);  
    printf("Subtraction: %d\n", difference);
    printf("Multiplication: %d\n", product);
    printf("Division: %d\n", quotient);
    printf("Modulus: %d\n", modulus);

    return 0;
}