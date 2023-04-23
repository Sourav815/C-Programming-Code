#include <stdio.h>

int main()
{
    int arr[100], n, temp = 0;
    printf("Enter the number of element to be stored:\n");
    scanf("%d", &n);
    printf("Enter the value of the element:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array in assending order:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        printf(" %d", arr[j]);
    }
    return 0;
}