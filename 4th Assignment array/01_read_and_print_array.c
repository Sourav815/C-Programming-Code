#include <stdio.h>

int main()
{
    int arr[50], n;
    printf("Enter the number of elements to be stored:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %dth element is: \n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %dth element is %d: \n", i + 1, arr[i]);
    }
    return 0;
}