// Write a C program to calculate sum of digits of a number.

#include <stdio.h>
int main()
{
    int num, sum = 0, rem;
    printf("Enter a number:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("SUM OF DIGITS: %d", sum);
    return 0;
}