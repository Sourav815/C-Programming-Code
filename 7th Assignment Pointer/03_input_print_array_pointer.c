#include <stdio.h>

int main()
{
    int arr[20], n;
    int *ptr = arr;
    printf("Enter number of element to be stored:\n");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("Elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}