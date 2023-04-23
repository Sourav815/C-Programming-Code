#include <stdio.h>

int main()
{
    int arr1[20][20], arr2[20][20], arr3[20][20], n, r, c, i, j;
    int(*ptr1)[20], (*ptr2)[20], (*ptr3)[20];
    ptr1 = arr1;
    ptr2 = arr2;
    ptr3 = arr3;
    printf("Enter number of row and column respectively:\n");
    scanf("%d%d", &r, &c);
    printf("Enter elements of first matrix in row major method:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", (*(ptr1 + i) + j));
        }
    }
    printf("Enter elements of sceond matrix in row major method:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", (*(ptr2 + i) + j));
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("\n-------Sum of two matrix-------\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d\t", *(*(ptr3 + i) + j));
        }
        printf("\n");
    }
    return 0;
}