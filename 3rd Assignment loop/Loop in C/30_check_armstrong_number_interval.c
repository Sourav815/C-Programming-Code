#include <stdio.h>

int main()
{
    int num, temp, rem, i, sum;
    printf("Enter a upper limit :\n");
    scanf("%d", &num);
    printf("All armstrong number between 1 to %d :\n", num);
    for (i = 1; i <= num; i++)
    {
        temp = i;
        sum = 0;
        while (temp > 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }
        if (sum == i)
        {
            printf(" %d", i);
        }
    }
    return 0;
}