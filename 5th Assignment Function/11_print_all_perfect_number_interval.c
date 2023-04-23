#include <stdio.h>

void check_perfect(int, int);

int main()
{
    int n1, n2;
    printf("Enter lower limit and upper limit respectively:\n");
    scanf("%d%d", &n1, &n2);
    check_perfect(n1, n2);
    return 0;
}
void check_perfect(int x, int y)
{
    int i, j, sum;
    printf("Perfect numbers are:\n");
    for (i = x; i <= y; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}