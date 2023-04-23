#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp, no;
    printf("Enter the number of element to be stored:\n");
    scanf("%d", &n);
    printf("Enter the value of every element:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of left rotation:\n");
    scanf("%d", &no);
    for (i = 1; i <= no; i++)
    {
        temp = arr[0];
        for (j = 1; j < n; j++)
        {
            arr[j - 1] = arr[j];
        }
        arr[n - 1] = temp;
    }
    printf("After left rotation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}