#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], n, i, j;
    printf("Input the number of elements to be sorted in the array:\n");
    scanf("%d", &n);
    printf("Enter elements one by one in arr1 array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("-------1st array-------\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr1[i]);
    }
    printf("\n---------After copied 2nd array--------\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr2[i]);
    }
    return 0;
}