#include <stdio.h>

int main()
{
    int arr[20], arr2[20], n, i;
    int *ptr1, *ptr2;
    ptr1 = &arr[0];
    ptr2 = &arr2[0];
    printf("Enter number of elements to be stored:\n");
    scanf("%d", &n);
    printf("Enter elements one by one:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr1 + i);
    }
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }
    printf("\n-----In Frist Array----\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr1);
        ptr1++;
    }
    printf("\n-----In Sceond Array----\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr2);
        ptr2++;
    }
    return 0;
}