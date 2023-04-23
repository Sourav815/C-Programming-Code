#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter any two number:\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("%d is greater than %d", a, b);
    }
    else if (b > a)
    {
        printf("%d is greater than %d", b, a);
    }

    else
    {
        printf("%d and %d is same number", a, b);
    }
    return 0;
}