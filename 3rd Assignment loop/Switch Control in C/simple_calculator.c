// Write a C program to create Simple Calculator using switch case.
#include <stdio.h>

int main()
{
    char operator;
    float a, b;
    printf("Enter:: (number1)::(+ - * /)::(number2)\n");
    scanf("%f %c %f", &a, &operator, & b);
    switch (operator)
    {
    case '+':
        printf("Summation=%.2f", a + b);
        break;
    case '-':
        printf("Substraction=%.2f", a - b);
        break;
    case '*':
        printf("Multiplication=%.2f", a * b);
        break;
    case '/':
        printf("Division=%.2f", a / b);
        break;
    default:
        printf("Error! operator is mismatch.");
        break;
    }
    return 0;
}