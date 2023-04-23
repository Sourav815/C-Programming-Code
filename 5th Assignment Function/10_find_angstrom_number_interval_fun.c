#include <stdio.h>

void armstrong(int x);

int main()
{
    int n1, n2;
    printf("Enter the lower and upper limit respectively:\n");
    scanf("%d%d", &n1, &n2);
    printf("Armstrong numbers are:\n");
    for (int i = n1; i < n2; i++)
    {
        armstrong(i);
    }
    return 0;
}
void armstrong(int x)
{
    int rem, sum = 0, temp;
    temp = x;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if (sum == x)
    {
        printf("%d, ", x);
    }
}