#include <stdio.h>

int power(int x, int y);

int main()
{
    int n1, n2;
    printf("Enter base and power respectively:\n");
    scanf("%d%d", &n1, &n2);
    printf("%d^%d=%d", n1, n2, power(n1, n2));
    return 0;
}
int power(int x, int y)
{
    if (y == 0)
    {
        return (1);
    }
    else
    {
        return (x * power(x, (y - 1)));
    }
}