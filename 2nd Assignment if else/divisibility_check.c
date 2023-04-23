#include <stdio.h>

int main()
{
    int A;
    printf("Enter a number:\n");
    scanf("%d", &A);
    if (A % 5 == 0)
    {
        printf("The number %d is divisible by 5.\n", A);
    }
    else if (A % 11 == 0)
    {
        printf("The number %d is divisible by 11.\n", A);
    }
    else
    {
        printf("The number %d is not divisible by 5 or11.\n", A);
    }
    return 0;
}