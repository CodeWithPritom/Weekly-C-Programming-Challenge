/*Problem 4

Write a program that takes a lowercase alphabet as input and convert into its uppercase.

*/

#include <stdio.h>

int main (){

   char lower, upper;

   // User input for lowercase alphabet
   
   printf("Enter a lowercase alphabet: ");
   scanf(" %c", &lower); // Add a space before %c to consume any leftover newline character
   
    // Convert lowercase to uppercase
    upper = lower - 32; // ASCII value of 'a' is 97 and 'A' is 65, so subtracting 32 converts to uppercase
   printf("Uppercase alphabet: %c\n", upper);

    return 0;
}