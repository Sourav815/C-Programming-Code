#include <stdio.h>

int main()
{
    int a, k,m;
    printf("Enter no of rows:");
    scanf("%d", &a);
    m=a;
    for (int i = 1; i <= a; i++)
    {
        k = m;
        for (int j = 1; j <= k; j++)
        {
            printf(" %d", k);
            k++;
        }
        m=k;
        printf("\n");
    }
    return 0;
}