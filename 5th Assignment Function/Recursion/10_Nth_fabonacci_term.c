#include <stdio.h>

int fabonacci(int x);

int main()
{
    int n;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    printf("%dth fibonacci term is %d ",n,fabonacci(n));
    return 0;
}
int fabonacci(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return (fabonacci(x - 1) + fabonacci(x - 2));
    }
}