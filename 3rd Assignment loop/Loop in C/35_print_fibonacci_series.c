#include <stdio.h>

int main()
{
    int num, a = 0, b = 1, c = 0;
    printf("Enter upper limit of series:\n");
    scanf("%d", &num);
    while (c <= num)
    {
        printf(" %d", c);
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}