#include <stdio.h>

int is_pal(int x);
int sum = 0;
int main()
{
    int num, palindrome;
    printf("Enter a number:\n");
    scanf("%d", &num);
    palindrome = is_pal(num);
    if (palindrome == num)
    {
        printf("This is a palindrome number.\n");
    }
    else
    {
        printf("This is not a palindrome number.\n");
    }

    return 0;
}
int is_pal(int x)
{
    if (x)
    {
        sum = sum * 10 + (x % 10);
        is_pal(x / 10);
    }
    else
    {
        return (sum);
    }
}