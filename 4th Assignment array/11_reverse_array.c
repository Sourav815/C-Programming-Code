#include <stdio.h>

int main()
{
    int arr[100], arr2[100], j, n;
    printf("Input the number of elements to be sorted in the array:\n");
    scanf("%d", &n);

    printf("Enter elements one by one in arr1 array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = 0; j < n; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            arr2[j] = arr[i];
            j++;
        }
    }

    printf("Reverse array:\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\t", arr2[j]);
    }

    return 0;
}