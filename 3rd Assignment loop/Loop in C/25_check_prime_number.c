#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        printf("This is not a prime number.\n");
    }
    else
    {
        printf("This is a prime number.\n");
    }
    return 0;
}