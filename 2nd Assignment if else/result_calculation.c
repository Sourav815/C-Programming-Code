#include <stdio.h>

int main()
{
    int P, C, M, B, Cs;
    float percentage;
    printf("Enter your obtaining marks in Physics, Chemistry, Mathematics, Biology, Computer Science: \n");
    scanf("%d%d%d%d%d", &P, &C, &M, &B, &Cs);
    percentage = ((P + C + M + B + Cs) / 500.0) * 100;
    printf("Percentage= %.2f\n", percentage);
    if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade: AA");
    }
    else if (percentage >= 80 && percentage <= 89)
    {
        printf("Grade: A+");
    }
    else if (percentage >= 70 && percentage <= 79)
    {
        printf("Grade: A");
    }
    else if (percentage >= 60 && percentage <= 69)
    {
        printf("Grade: B+");
    }
    else if (percentage >= 50 && percentage <= 59)
    {
        printf("Grade: B");
    }
    else if (percentage >= 35 && percentage <= 49)
    {
        printf("Grade: C");
    }
    else if (percentage >= 0 && percentage <= 34)
    {
        printf("Grade: D");
    }
    return 0;
}