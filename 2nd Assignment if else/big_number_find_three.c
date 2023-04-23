#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three number:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is greater than %d and %d\n", a, b, c);
    }
    else if (b > a && b > c)
    {
        printf("%d is greater than %d and %d\n", b, a, c);
    }
    else if (c > a && c > b)
    {
        printf("%d is greater than %d and %d\n", c, b, a);
    }
    else
    {
        printf("Any two or three number is same.\n");
    }
    return 0;
}