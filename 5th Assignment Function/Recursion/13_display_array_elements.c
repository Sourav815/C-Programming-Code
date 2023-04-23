#include <stdio.h>

int display_ele(int arr[], int n);

int main()
{
    int num, i, array[100];
    printf("Enter number of elements to be stored:\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        scanf("%d ", &array[i]);
    }
    printf(" %d,", display_ele(array, num));
    return 0;
}
int display_ele(int arr[], int n)
{
    if (n < 0)
    {
        return;
    }
    else
    {
        return (arr, n - 1);
    }
}