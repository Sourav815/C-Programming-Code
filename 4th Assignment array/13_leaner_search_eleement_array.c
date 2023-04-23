#include <stdio.h>

int main()
{
    int arr[100], n, i, num;
    printf("Enter the number of element to be stored in the array:\n");
    scanf("%d", &n);
    printf("Enter the value of element one by one:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched:\n");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            printf("The number %d is founded at position %dth.\n", num, i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf("The number %d is not founded", num);
    }
    return 0;
}