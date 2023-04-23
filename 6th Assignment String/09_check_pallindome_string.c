#include <stdio.h>

int main()
{
    char str[50];
    int j = 0, c = 0, i;
    printf("Enter a string:\n");
    gets(str);
    i = 0;
    while (str[i] != '\0')
    {
        j++;
        i++;
    }
    for (int i = 0; i <= j; i++)
    {
        if (str[i] == str[j - i - 1])
        {
            c++;
        }
    }
    if (c == i)
    {
        printf("\npallindrome");
    }
    else
    {
        printf("\nNot pallindrome");
    }
    return 0;
}