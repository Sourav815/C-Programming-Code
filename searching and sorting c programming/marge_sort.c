#include <stdio.h>

void merge(int arr[], int low, int mid, int high)
{
    int i, j, k;
    int b[30];
    i = k = low;
    j = mid + 1;
    while ((i <= mid) && (j <= high))
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            b[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        b[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = arr[j];
        k++;
        j++;
    }
    int r = low;
    while (r < k)
    {
        arr[r] = b[r];
        r++;
    }
}

void merge_sort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[30], n, i;
    printf("Enter the number of elements to  be stored:\n");
    scanf("%d", &n);
    printf("Enter the elements one by one:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    merge_sort(arr, 0, n);
    printf("After marge sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%3d", arr[i]);
    }
    return 0;
}