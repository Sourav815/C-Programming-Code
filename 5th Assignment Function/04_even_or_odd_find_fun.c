#include <stdio.h>

void even_or_odd(int num);

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    even_or_odd(n);
    return 0;
}
void even_or_odd(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is a even number.", num);
    }
    else
    {
        printf("%d is a odd number.", num);
    }
}