#include <stdio.h>

int main()
{
    int n, max, min, arr[50];
    printf("Input the number of elements to be stored in the array:\n");
    scanf("%d", &n);

    printf("Input elements one by one in the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum number is %d\n", max);
    printf("Minimum number is %d\n", min);
    return 0;
}