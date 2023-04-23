#include <stdio.h>

int main()
{
    int n, i, f, lim, sum = 0;
    printf("Enter a limit:\n");
    scanf("%d", &lim);
    printf("All prime numbers:\n");
    for (n = 1; n <= lim; n++)
    {
        f = 1;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            printf(" %d", n);
            sum = sum + n;
        }
    }
    printf("\nSum of all prime number between 1 to %d is %d", lim, sum);
    return 0;
}