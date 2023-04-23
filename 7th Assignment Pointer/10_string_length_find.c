#include <stdio.h>

int main()
{
    char str[20];
    char *ptr;
    int count = 0;
    ptr = str;
    printf("Enter a string;\n");
    gets(str);
    while (*ptr != '\0')
    {
        // printf("%c",*ptr);
        count++;
        ptr++;
    }
    printf("Length = %d", count);
    return 0;
}