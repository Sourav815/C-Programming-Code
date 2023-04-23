#include <stdio.h>

int main()
{
    int arr1[20], arr2[20], no, j;
    int *ptr1, *ptr2;
    ptr1 = &arr1[0];
    ptr2 = &arr2[0];
    printf("Enter number of elements to be stored:\n");
    scanf("%d", &no);
    printf("Enter elements:\n");
    for (int i = 0; i < no; i++)
    {
        scanf("%d", (ptr1 + i));
    }
    j = 0;
    for (int i = no - 1; i >= 0; i--)
    {
        arr2[j] = arr1[i];
        j++;
    }
    printf("\n----Reverse Array----\n");
    for (int j = 0; j < no; j++)
    {
        printf("%d ", *ptr2);
        ptr2++;
    }
    return 0;
}