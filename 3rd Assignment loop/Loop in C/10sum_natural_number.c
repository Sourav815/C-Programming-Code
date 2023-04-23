//  Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter the value of N (first natural number) :\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum=%d\n", sum);
    return 0;
}