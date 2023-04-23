#include <stdio.h>

int main()
{
    int arr[50], n;
    printf("specify the size of array:\n");
    scanf("%d", &n);

    printf("Enter all number one by one: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Negetive number:");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d, ", arr[i]);
        }
    }
    return 0;
}