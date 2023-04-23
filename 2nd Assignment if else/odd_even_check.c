#include <stdio.h>

int main()
{
    int A;
    printf("Enter a number:\n");
    scanf("%d", &A);
    if (A % 2 == 0)
    {
        printf("The number %d is even.\n", A);
    }
    else
    {
        printf("The number %d is odd.\n", A);
    }
    return 0;
}