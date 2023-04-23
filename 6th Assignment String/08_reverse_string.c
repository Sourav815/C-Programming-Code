#include <stdio.h>
int main()
{
    char str[20], rev_str[20];
    int i, j, max = 0;
    printf("Enter a string:\n");
    gets(str);
    i = 0;
    while (str[i] != '\0')
    {
        i++;
        max = i - 1;
    }
    printf("\n------Reverse String-----\n");
    for (j = 0; j <= i; j++)
    {
        rev_str[j] = str[max];
        max--;
    }
    puts(rev_str);
    return 0;
}