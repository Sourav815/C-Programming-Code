//  Write a C program to print multiplication table of any number.
#include <stdio.h>

int main()
{
    int n, i, mul = 1;
    printf("Enter your table number:\n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        mul = n * i;
        printf("%d*%d=%d\n", n, i, mul);
    }
    return 0;
}