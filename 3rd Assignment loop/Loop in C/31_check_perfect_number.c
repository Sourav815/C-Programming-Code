#include <stdio.h>

int main()
{
    int num, temp, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        temp = num;
        if (temp % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        printf("This is a perfect number.");
    }
    else
    {
        printf("This is not a perfect number.");
    }
    return 0;
}