#include <stdio.h>

int fact(int x);

int main()
{
    int n, rem, sum, temp;
    printf("Enter a number:\n");
    scanf("%d", &n);
    temp = n;
    sum = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + fact(rem);
        temp = temp / 10;
    }
    if (sum == n)
    {
        printf("This is a strong number.\n");
    }
    else
    {
        printf("This is not a strong number.\n");
    }

    return 0;
}
int fact(int x)
{
    int result;
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return (x * fact(x - 1));
    }
}