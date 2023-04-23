#include <stdio.h>

int main()
{
    int arr[100], n, val, pos;
    printf("Input the number of elements to be sorted in the array:\n");
    scanf("%d", &n);

    printf("Enter elements one by one:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element:\n");
    scanf("%d", &pos);

    printf("Now enter the value of element which you want to insert:\n");
    scanf("%d", &val);
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;
    n = n + 1;
    printf("The value of element in the array after insert:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}