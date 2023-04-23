#include <stdio.h>

int main()
{
    int S1, S2, S3;
    printf("Enter three sides of the triangle: \n");
    scanf("%d%d%d", &S1, &S2, S3);
    if (S1 == S2 == S3)
    {
        printf("Tis is a equilateral triangle. \n");
    }
    else if (S1 == S2 || S2 == S3 || S3 == S1)
    {
        printf("This is a isosceles triangle. \n");
    }
    else if (S1 != S2 != S3)
    {
        printf("This is a scalene triangle. \n");
    }
    return 0;
}