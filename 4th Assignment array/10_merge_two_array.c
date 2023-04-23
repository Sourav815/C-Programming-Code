#include <stdio.h>

int main()
{
    int a[100], b[100], c[100], n1, i, n2;
    printf("Input the number of elements to be sorted in the 1st array:\n");
    scanf("%d", &n1);

    printf("Enter elements one by one in 1st array:\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the number of elements to be sorted in the 2nd array:\n");
    scanf("%d", &n2);

    printf("Enter elements one by one in arr1 array:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n1; i++)
        c[i] = a[i];
    for (int j = 0; j < n2; j++)
    {
        c[i] = b[j];
        i++;
    }
    printf("1st array:\n");
    for (int i = 0; i < n1; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n2nd array:\n");
    for (int i = 0; i < n2; i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\nMarge array:\n");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d\t", c[i]);
    }
    return 0;
}