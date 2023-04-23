#include <stdio.h>

int main()
{
    int a;
    printf("Enter the year:\n");
    scanf("%d", &a);
    if (a % 100 == 0)
    {
        printf("This is a century year.\n");
        if (a % 400 == 0)
        {
            printf("This is a leapyear.\n");
        }
        else
        {
            printf("This is a not leapyear.\n");
        }
    }
    else if (a % 4 == 0)
    {
        printf("This is a not century but leapyear.\n");
    }
    else
    {
        printf("This is a not leapyear.\n");
    }
    return 0;
}