#include <stdio.h>

int main()
{
    char str[50];
    int i, j, count = 0, n = 0;
    printf("Enter a string:\n");
    gets(str);
    for (i = 0; str[i]; i++)
    {
        n++;
    }

    for (i = 0; i < n; i++)
    {
        count = 1;
        if (str[i])
        {
            for (j = i + 1; j < n; j++)
            {
                if (str[j] == str[i])
                {
                    count++;
                    str[j] = '\0';
                }
            }
            printf(" %c = %d\n", str[i], count);
        }
    }
    return 0;
}