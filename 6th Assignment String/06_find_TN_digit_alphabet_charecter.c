#include <stdio.h>

int main()
{
    char str[100];
    int digit = 0, alphabet = 0, sp_char = 0;
    printf("Enter string:\n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 65 && str[i] <= 91) || (str[i] >= 97 && str[i] <= 123))
        {
            alphabet++;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            digit++;
        }
        else
        {
            sp_char++;
        }
    }
    printf("\n-------After analysis-------\n");
    printf("Alphabet= %d\nDigit= %d\nSpecial Charecter= %d", alphabet, digit, sp_char);
    return 0;
}