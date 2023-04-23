#include <stdio.h>

int main()
{
    int num, i, j, count = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Prime Factors:\n");
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count = 0;
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                printf(" %d", i);
            }
        }
    }

    return 0;
}
