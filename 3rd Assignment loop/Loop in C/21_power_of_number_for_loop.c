#include <stdio.h>

int main()
{
    int num, index;
    int pow = 1;
    printf("Enter the number and index limit:\n");
    scanf("%d%d", &num, &index);
    for (int i = 1; i <= index; i++)
    {
        pow = pow * num;
    }
    printf("%d^%d=%d\n", num, index, pow);
    return 0;
}