#include <stdio.h>

int main()
{
    int a, b;
    int *p, *q;
    p = &a;
    q = &b;
    printf("Enter two number :\n");
    scanf("%d%d", p, q);
    printf("Sum = %d", (*p + *q));
    return 0;
}