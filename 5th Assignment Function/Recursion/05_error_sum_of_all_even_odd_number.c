#include <stdio.h>
int sum_even(int x);
// int sum_odd(int z, int a);

int main()
{
    int u_limit;
    printf("Enter upper limit:\n");
    scanf("%d", &u_limit);
    // for (int i = 0; i <= u_limit; i++)
    // {
        // if (i % 2 == 0)
        // {
            printf(" %d\n", sum_even(u_limit));
        // }
    // }

    // printf("Sum of odd number: %d\n", sum_even(l_limit, u_limit));
    return 0;
}
int sum_even(int x)
{
    if (x == 1)
    {
        return (1);
    }
    else
    {
        return (x + sum_even((x+2) - 1));
    }
}