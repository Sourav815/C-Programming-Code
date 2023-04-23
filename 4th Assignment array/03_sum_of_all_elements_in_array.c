#include <stdio.h>

int main()
{
    int arr[100], n, sum;
    printf("Enter the number of elements to be stored:\n");
    scanf("%d", &n);
    printf("Enter the value of elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of elements in array: %d", sum);
    return 0;
}