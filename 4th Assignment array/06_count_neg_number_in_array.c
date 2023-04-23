#include <stdio.h>

int main()
{
    int arr[100], n, count = 0;

    printf("Input the number of elements to be sorted in the array:\n");
    scanf("%d", &n);

    printf("Enter elements one by one:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            count = count + 1;
        }
    }
    printf("Total number of negetive elements is %d", count);
    return 0;
}