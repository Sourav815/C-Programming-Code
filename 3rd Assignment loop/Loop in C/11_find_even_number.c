#include <stdio.h>

int main()
{
    int i;
    printf(":ALL EVEN NUMBER BETWEEN 1 TO 100:\n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}