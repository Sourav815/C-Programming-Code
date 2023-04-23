#include <stdio.h>
void circle(float r);

int main()
{
    float R;
    printf("Enter the radius of circle:\n");
    scanf("%f", &R);
    circle(R);
    return 0;
}
void circle(float r)
{
    float C, D, A;
    D = 2 * r;
    C = 2 * 3.14 * r;
    A = 3.14 * r * r;
    printf("Diameter= %.2f ,Circumference= %.2f ,Area= %.2f", D, C, A);
}