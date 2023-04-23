#include <stdio.h>

int main()
{
    int arr[10], i, j, n, temp = 0;
    printf("Enter the number of elements to  be stored:\n");
    scanf("%d", &n);
    printf("Enter the elements one by one:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}