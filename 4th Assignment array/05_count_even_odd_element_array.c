#include <stdio.h>

int main()
{
    int arr[50], n, even, odd;
    printf("Input the number of elements to be sorted in the array:\n");
    scanf("%d", &n);
    printf("Enter elements one by one:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    even = 0;
    odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else if (arr[i] % 2 != 0)
        {
            odd++;
        }
    }
    printf("Total even and odd nunbers respectively: %d, %d", even, odd);
    return 0;
}
