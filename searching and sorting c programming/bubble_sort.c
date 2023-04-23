#include <stdio.h>

int main()
{
    int arr[10], i, j, n, temp = 0;
    printf("Enter the number of elements to be stroed:\n");
    scanf("%d", &n);
    printf("Enter the elemnts one by one:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j != i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("After Bubble sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}