#include <stdio.h>

int main()
{
    char str[100], i = 0;
    printf("-----------Describe yourself-----------\n");
    gets(str);
    while (str[i] != '\0')
    {
        i++;
    }
    printf("Length= %d", i);
    return 0;
}
