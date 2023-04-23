#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character:\n");
    scanf("%c", &a);
    if (((a >= 65 && a <= 90) || (a >= 97 && a <= 122)))
    {
        printf("The character is a alphabet.\n");
    }
    else if (a >= 48 && a <= 57)
    {
        printf("The character is a digit.\n");
    }
    else
    {
        printf("The character is a special character.\n");
    }
    return 0;
}