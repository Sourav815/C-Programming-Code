#include <stdio.h>

int main()
{
    int arr[20], num, n, pos = 0, flag = 0;
    int *ptr;
    ptr = &arr[0];
    printf("Enter number of elments to be stored:\n");
    scanf("%d", &num);
    printf("Enter elments :\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("Enter number to be search:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) == n)
        {
            flag = 1;
            break;
        }
        pos++;
    }
    if (flag == 1)
    {
        printf("Element found sucessfully at position %d", pos + 1);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}