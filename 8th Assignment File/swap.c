#include <stdio.h>
#include <stdlib.h>
int main(int x, char *y[])
{
    int a, b, temp = 0;
    if (x != 3)
    {
        printf("Error! your argument counter is not matched");
    }
    else
    {
        a = atoi(y[1]);
        b = atoi(y[2]);
        printf("Before swaping the numbers are respectively: %d, %d\n", a, b);
        temp = a;
        a = b;
        b = temp;
        printf("After swaping the numbers are respectively: %d, %d", a, b);
    }
    return 0;
}