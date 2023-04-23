#include <stdio.h>

int linearsearch(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return (i + 1);
    }
    return (-1);
}

int main()
{
    int arr[10], n, i, num, pos = 0;
    printf("Enter the number of the elements to be stored:\n");
    scanf("%d", &n);
    printf("Enter elements one by one:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be searched:");
    scanf("%d", &num);
    pos = linearsearch(arr, n, num);
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