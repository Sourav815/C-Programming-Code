#include <stdio.h>

int main()
{
    int arr[100], n, val, pos;
    printf("Input the number of elements to be sorted in the array:\n");
    scanf("%d", &n);

    printf("Enter elements one by one:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to delete the element:\n");
    scanf("%d", &pos);
    for (int i = 0; i < n; i++)
    {
        if (i > pos - 1)
        {
            arr[i - 1] = arr[i];
        }
    }
    n = n - 1;
    printf("The value of element in the array after insert:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}