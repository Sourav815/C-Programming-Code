#include <stdio.h>

void check_strong(int num);

int main()
{
    int num1, num2;
    printf("Enter a range:\n");
    scanf("%d%d", &num1, &num2);
    printf("Strong numbers are between range:\n");
    for (size_t i = num1; i <= num2; i++)
    {
        check_strong(i);
    }
    return 0;
}
void check_strong(int num)
{
    int rem, temp, sum = 0, fact;
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == num)
    {
        printf("%d, ", num);
    }
}