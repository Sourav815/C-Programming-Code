#include <stdio.h>

int main()
{
    int a[100], b[100], c[100], i, j = 0, k = 0, n;
    printf("Enter the number of element to be sorted in the 1st array:\n");
    scanf("%d", &n);
    printf("Enter the value in the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }
    printf("Even number array is:\n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\nOdd number array is:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}