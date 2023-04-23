#include <stdio.h>

int main()
{
    int a[20], b[20], temp[20], n, i;
    int *ptr1 = a, *ptr2 = b;
    printf("Enter number of elements to be stored:\n");
    scanf("%d", &n);
    printf("Enter elements in first array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr1 + i);
    }
    printf("Enter elements in second array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr2 + i);
    }
    for (i = 0; i < n; i++)
    {
        *ptr1 = *ptr1 + *ptr2;
        *ptr2 = *ptr1 - *ptr2;
        *ptr1 = *ptr1 - *ptr2;
        ptr1++;
        ptr2++;
    }

    // printf("Before swaping two array:\n");
    // printf("First array ==> ");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d", *(ptr2 + i));
    // }
    // printf("\nsecond array ==> ");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d", *(ptr2 + i));
    // }
    printf("Before swaping two array:\n");
    printf("First array ==> ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr1 + i));
    }
    printf("\nsecond array ==> ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr2 + i));
    }

    return 0;
}