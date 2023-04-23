#include <stdio.h>

int gcd(int, int);
int lcm(int, int);

int main()
{
    int n1, n2;
    printf("Enter two number:\n");
    scanf("%d%d", &n1, &n2);
    printf("LCM of %d and %d is %d", n1, n2, lcm(n1, n2));
    return 0;
}
int gcd(int x, int y)
{
    if (x % y == 0)
    {
        return (y);
    }
    else
    {
        return (gcd(y, x % y));
    }
}
int lcm(int x, int y)
{
    return ((x / gcd(x, y)) * y);
}