#include <stdio.h>

int main()
{
    int n, j, i, arr[10], key = 0;
    printf("Enter the number of elements to  be stored:\n");
    scanf("%d", &n);
    printf("Enter the elements one by one:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printf("After insertion sort:\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}