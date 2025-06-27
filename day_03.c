/*Problem 3

Write a program that takes a character as input and prints its ASCII value.
*/

#include <stdio.h>

int main(){
 

    char ch;
    
    // Prompt the user for input
    printf("Enter a character: ");  
    scanf(" %c", &ch);  // Add a space before %c to consume any leftover newline character
    // Print the ASCII value of the character
    printf("The ASCII value of '%c' is: %d\n", ch, ch);

    return 0;
}