#include <stdio.h>

int main()
{
    int n, rem, sum, temp, fact;
    printf("Enter upper limit:\n");
    scanf("%d", &n);
    printf("Strong Numbers:");
    for (int i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;
        while (temp > 0)
        {
            rem = temp % 10;
            fact = 1;
            for (int j = 1; j <= rem; j++)
            {
                fact = fact * j;
            }
            sum = sum + fact;
            temp = temp / 10;
        }
        if (sum == i)
        {
            printf(" %d", i);
        }
    }
    return 0;
}