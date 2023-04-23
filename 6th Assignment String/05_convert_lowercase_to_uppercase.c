#include <stdio.h>

int main()
{
    char str[100], upper_str[100];
    int i;
    printf("Enter word/sentence:\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 123)
        {
            upper_str[i] = str[i] - 32;
        }
        else
        {
            upper_str[i] = str[i];
        }
    }
    upper_str[i] = '\0';
    printf("\n--------After case change--------\n");
    printf("%s", upper_str);
    return 0;
}