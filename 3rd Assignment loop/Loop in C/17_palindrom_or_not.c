#include <stdio.h>

int main()
{
    int temp, num, rem, rev = 0;
    printf("Enter the number:\n");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (rev == num)
    {
        printf("%d is the palindrome number.\n", num);
    }
    else
    {
        printf("%d is not palindrome number in number system.\n", num);
    }
    return 0;
}