#include <stdio.h>

int sum_digit(int x);
int sum = 0;
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Sum of digit of a given number: %d", sum_digit(num));
    return 0;
}
int sum_digit(int x)
{
    if (x)
    {
        sum = sum + (x % 10);
        sum_digit(x / 10);
    }
    else
    {
        return (sum);
    }
}