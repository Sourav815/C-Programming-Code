#include <stdio.h>

int bin_search(int arr[], int x, int key)
{
    int mid, low, high;
    low = 0;
    high = x - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            return (mid+1);
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return (-1);
}

int main()
{
    int arr[20], n, num, i, pos = 0;
    printf("Enter the number of elements to be stored:\n");
    scanf("%d", &n);
    printf("Enter the elements one by one in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be searched:\n");
    scanf("%d", &num);

    pos = bin_search(arr, n, num);
    if (pos != -1)
    {
        printf("The number is successfully found at position %d.", pos);
    }
    else
    {
        printf("The number is not found.");
    }
    return 0;
}