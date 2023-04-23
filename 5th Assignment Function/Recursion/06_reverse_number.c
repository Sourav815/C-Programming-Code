#include <stdio.h>

int reverse(int x);
int sum = 0;
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Reverse: %d", reverse(num));
    return 0;
}
int reverse(int x)
{
    if (x)
    {
        sum = sum * 10 + (x % 10);
        reverse(x / 10);
    }
    else
    {
        return (sum);
    }
}