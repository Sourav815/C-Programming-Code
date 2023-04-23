#include <stdio.h>

void check_angstrom(int n);

int main()
{
    int num, digit;
    printf("Enter a number:\n");
    scanf("%d", &num);
    check_angstrom(num);
    return 0;
}
void check_angstrom(int n)
{
    int result, rem, sum = 0, temp;
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if (sum == n)
    {
        printf("Angstrom Number.\n");
    }
    else
    {
        printf("Not angstrom Number.\n");
    }
}