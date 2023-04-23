#include <stdio.h>

int main()
{
    printf("-----------ASCII CHARECTER------------");
    for (int i = 0; i < 256; i++)
    {
        printf(" %d = %c\n", i, i);
    }
    return 0;
}