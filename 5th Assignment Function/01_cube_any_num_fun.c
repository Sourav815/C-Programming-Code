#include <stdio.h>

int cube(int n);

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("cube of %d is %d.", num, cube(num));
    return 0;
}
int cube(int n)
{
    int result;
    result = n * n * n;
    return (result);
}