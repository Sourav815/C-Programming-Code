#include <stdio.h>

void check_prime(int num);

int main()
{
    int N;
    printf("Enter a number:\n");
    scanf("%d", &N);
    check_prime(N);
    return 0;
}
void check_prime(int num)
{
    int flag = 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("This is not a prime number.\n");
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("This is a prime number.\n");
    }
}