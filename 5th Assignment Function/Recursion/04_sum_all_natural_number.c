#include <stdio.h>

int sum(int x);

int main()
{
    int n;
    printf("Enter upper limit:\n");
    scanf("%d", &n);
    printf("Summation= %d", sum(n));
    return 0;
}
int sum(int x)
{
    if (x == 1)
    {
        return (1);
    }
    else
    {
        return (x + sum(x - 1));
    }
}