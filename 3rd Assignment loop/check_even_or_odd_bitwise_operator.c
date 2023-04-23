#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if (num & 1)
    {
        printf("This is a odd number.\n");
    }
    else
    {
        printf("This is a even number.");
    }
    return 0;
}