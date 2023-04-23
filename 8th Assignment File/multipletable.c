#include <stdio.h>
#include <stdlib.h>
int main(int x, char *y[])
{
    int a, p;
    if (x != 2)
    {
        printf("Error! your argument counter is not matched");
    }
    else
    {
        a = atoi(y[1]);
        for (int i = 1; i <= 10; i++)
        {
            p = a * i;
            printf("%d*%d= %d\n", a, i, p);
            
        }
    }
    return 0;
}