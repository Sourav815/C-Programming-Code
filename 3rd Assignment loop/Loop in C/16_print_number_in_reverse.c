// Write a C program to enter a number and print its reverse.

#include <stdio.h>

int main()
{
    int num, rem, rev = 0;
    printf("Enter a  number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        // rev = rev * 10 + rem; // or use this logic.
        num = num / 10;
        printf("%d", rem);
    }
    return 0;
}