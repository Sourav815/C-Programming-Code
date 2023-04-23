// Write a C program to find first and last digit of a number.

#include <stdio.h>

int main()
{
    int num, rem;
    printf("Enter a number:\n");
    scanf("%d", &num);
    rem = num % 10;
    printf("The last digit of the number is %d\n", rem);
    while (num >= 10)
    {
        num = num / 10;
    }
    printf("The first digit of the number is %d\n", num);
    return 0;
}