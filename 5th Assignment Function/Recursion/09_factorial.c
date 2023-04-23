#include <stdio.h>

int fact(int x);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d! = %d", num, fact(num));
    return 0;
}
int fact(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return (x * fact(x - 1));
    }
}