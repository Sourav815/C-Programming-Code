#include <stdio.h>

int main()
{
    int arr[20][20], i, j, n, m;
    int(*ptr)[20];
    ptr = arr;
    printf("Enter number of row and column: \n");
    scanf("%d%d", &n, &m);
    printf("Enter element row wise:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", (*(ptr + i) + j));
        }
    }
    printf("\n-------2D Array-----\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", *(*(ptr + i) + j));
        }
        printf("\n");
    }
    return 0;
}