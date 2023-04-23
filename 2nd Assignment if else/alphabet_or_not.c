#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character:\n");
    scanf("%c", &a);
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
    {
        printf("The cheracter is a alphabet.\n");
    }
    else
    {
        printf("The cheracter is not a alphabet.\n");
    }
    return 0;
}