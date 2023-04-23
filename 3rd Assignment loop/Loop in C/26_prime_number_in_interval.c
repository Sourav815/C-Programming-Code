#include <stdio.h>

int main()
{
    int n, i, f, lim;
    printf("Enter a limit:\n");
    scanf("%d", &lim);
    printf("Prime Numbers: ");
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
        }
    }
    return 0;
}