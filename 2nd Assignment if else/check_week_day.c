#include <stdio.h>

int main()
{
    int a;
    printf("Enter a week number:\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thusday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("saturday");
        break;
    default:
        printf("Invalid day.");
        break;
    }
    return 0;
}