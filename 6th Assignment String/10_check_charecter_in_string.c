#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], ch;
    int flag = 0;
    printf("Enter a string:\n");
    gets(str);
    printf("Enter the charecter to be searched:\n");
    scanf("%c", &ch);
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ch)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Charecter found!");
    }
    else
    {
        printf("Charecter not found");
    }
    return 0;
}