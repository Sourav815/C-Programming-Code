#include <stdio.h>
void print_even_number(int x);
void print_odd_number(int x);

int main()
{
    int n;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    printf("Even Number: ");
    print_even_number(n);
    printf("\nOdd Number: ");
    print_odd_number(n);
    return 0;
}
void print_even_number(int x)
{
    if (x == 0)
    {
        return;
    }
    else
    {
        print_even_number(x - 1);
    }
    if (x % 2 == 0)
    {
        printf("%d ", x);
    }
}
void print_odd_number(int x)
{
    if (x == 0)
    {
        return;
    }
    else
    {
        print_odd_number(x - 1);
    }
    if (x % 2 != 0)
    {
        printf("%d ", x);
    }
}