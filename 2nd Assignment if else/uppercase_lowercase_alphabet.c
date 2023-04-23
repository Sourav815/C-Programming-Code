#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character:\n");
    scanf("%c", &a);
    if (a >= 65 && a <= 90)
    {
        printf("This is a uppercase alphabet.\n");
    }
    else if (a >= 97 && a <= 122)
    {
        printf("This is a lowercase alphabet.\n");
    }
    else
    {
        printf("This is not a alphabet.\n");
    }
    return 0;
}