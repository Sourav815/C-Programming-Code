#include <stdio.h>

int main()
{
    float salary, g_salary;
    printf("Enter your basic salary: \n");
    scanf("%f", &salary);
    if (salary >= 0 && salary <= 10000)
    {
        g_salary = salary + (salary * 0.2) + (salary * 0.8);
        printf("Gross salary: %0.2f\n", g_salary);
    }
    else if (salary > 10000 && salary <= 20000)
    {
        g_salary = salary + (salary * 0.25) + (salary * 0.9);
        printf("Gross salary: %0.2f\n", g_salary);
    }
    else if (salary > 20000)
    {
        g_salary = salary + (salary * 0.3) + (salary * 0.95);
        printf("Gross salary: %0.2f\n", g_salary);
    }
    return 0;
}