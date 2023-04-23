// Write a C program to print all natural numbers from 1 to n. - using while loop

#include <stdio.h>

int main()
{
    int N;
    printf("Enter the value of N (natural number):\n");
    scanf("%d", &N);
    int i = 0;
    while (i <= N)
    {
        printf(" %d ", i);
        i++;
    }
    return 0;
}