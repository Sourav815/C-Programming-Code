#include <stdio.h>

void print_natural_number(int x);

int main()
{
    int n;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    print_natural_number(n);
    return 0;
}
void print_natural_number(int x)
{
    if (x == 0)
    {
        return;
    }
    else
    {
        (print_natural_number(x - 1));
    }
    printf(" %d", x);
}