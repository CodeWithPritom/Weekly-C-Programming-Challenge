/*Problem 10
Write a C program to take temperature in Celsius as input and convert into Fahrenheit.
*/

#include <stdio.h>

int main()
{
    float c,f;

    printf("Input value of c : ");
    scanf("%f",&c);

    //Operation
    f = ((c * 9)/5) + 32;
   

    printf("Farhenheit : %.1f",f);

    
    return 0;
}