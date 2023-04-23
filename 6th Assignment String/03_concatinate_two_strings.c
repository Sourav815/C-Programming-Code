#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0, j = 0;
    printf("Enter the first string:\n");
    gets(str1);
    printf("Enter the second string:\n");
    gets(str2);
    while (str2[i] != '\0')
    {
        i++;
    }
    while (str1[j] != '\0')
    {
        str2[i] = str1[j];
        i++;
        j++;
    }
    str2[i] = '\0';
    printf("After appending:\n");
    puts(str2);
    return 0;
}