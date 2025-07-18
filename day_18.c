/*
Problem 18
In this problem you will develop a calculator which can do Addition, Subtraction, Multiplication, Division and Modulo (Remainder). Use switch-case statements.
*/

#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter operator : ");
    scanf(" %c", &op);

    printf("Enter b : ");
    scanf("%d", &b);

    switch (op)
    {

    case '+':
        printf("result = %d", a + b);
        break;

    case '-':
        printf("result = %d", a - b);
        break;

    case '/':
        if (b != 0)
        {
            printf("result = %d", a / b);
        }
        else
        {
            printf("Sorry you put 0 in b value");
        }
        break;
    case '*':
        printf("result = %d", a * b);
        break;
    }

    return 0;
}