#include <stdio.h>

void swap_num(int *p, int *q)
{
    int temp;
    printf("\nAfter Swaping:\n");
    temp = *p;
    *p = *q;
    *q = temp;
    printf("%d, %d", *p, *q);
}
int main()
{
    int a, b;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("Enter two number :\n");
    scanf("%d%d", ptr1, ptr2);
    printf("Before Swaping:\n");
    printf("%d, %d", *ptr1, *ptr2);
    swap_num(ptr1, ptr2);
    return 0;
}