// write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include <stdio.h>

int main()
{
    int N;
    printf("Enter the value of N (natural number):\n");
    scanf("%d", &N);
    printf(" N (natural number) in reverse:\n");
    while (N >= 1)
    {
        printf("%d ", N);
        N--;
    }
    return 0;
}
