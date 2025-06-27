/*Write a program to input a 4-digit number and reverse it. (Use modulus % and division / operators).*/


#include <stdio.h>

int main(){

   int number, reversed;

   printf("Enter a 4 digit number : ");
   scanf("%d", &number);

   reversed = 0;

   // operation to reverse the number
   reversed = reversed * 10 +  number % 10; // value 4
   number = number / 10; // value 123

   reversed = reversed * 10 +  number % 10; // value 3  // reversed = 4 * 10 + 123 / 10 = 40 + 3 = 43
   number = number / 10; // value 12

     reversed = reversed * 10 +  number % 10; // value 432
   number = number / 10; // value 1

    reversed = reversed * 10 +  number % 10; // value 4321
   number = number / 10; // value 01

/*
   while (number > 0){
          reversed = reversed * 10 +  number % 10; // value 4321
          number = number / 10; // value 01
   
   }*/

printf("Reversed number is : %d\n", reversed);
    return 0;
}