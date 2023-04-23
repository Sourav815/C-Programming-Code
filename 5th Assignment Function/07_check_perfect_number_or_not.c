#include <stdio.h>

void check_perfect(int x);

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    check_perfect(num);
    return 0;
}
void check_perfect(int x)
{
    int i, sum, temp;
    temp = x;
    sum = 0;
    for (i = 1; i < temp; i++)
    {
        if (temp % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == x)
    {
        printf("This is perfect number.\n");
    }
    else
    {
        printf("This is not perfect number.\n");
    }
}