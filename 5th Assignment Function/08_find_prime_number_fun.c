#include <stdio.h>
void count_prime(int N);
int main()
{
    int num, num1, num2;
    printf("Enter the range:\n");
    scanf("%d%d", &num1, &num2);
    printf("All prime numbers are:\n");
    for (int j = num1; j <= num2; j++)
    {
        count_prime(j);
    }
    return 0;
}
void count_prime(int N)
{
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d ", N);
    }
}