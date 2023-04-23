#include <stdio.h>

int main()
{
    int limit, temp, sum;
    printf("Enter upper limit:\n");
    scanf("%d", &limit);
    printf("Perfect Numbers:");
    for (int j = 1; j <= limit; j++)
    {
        sum = 0;
        for (int i = 1; i < j; i++)
        {
            temp = j;
            if (temp % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == j)
        {
            printf(" %d,", j);
        }
    }
    return 0;
}