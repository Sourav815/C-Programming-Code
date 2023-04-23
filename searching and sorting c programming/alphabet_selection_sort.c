#include <stdio.h>

int main()
{
    int i, j, n, temp;
    char arr[26];
    printf("Enter the number of elements to  be stored:\n");
    scanf("%d", &n);
    printf("Enter the elements one by one:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%c", arr[i]);
    }
    return 0;
}