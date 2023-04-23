#include <stdio.h>
void max(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("%d is greater than %d.", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("%d is greater than %d.", num2, num1);
    }
    else
    {
        printf("Eror!");
    }
}
int main()
{
    int num1, num2;
    printf("Enter two number respectively:\t");
    scanf("%d%d", &num1, &num2);
    max(num1, num2);
    return 0;
}