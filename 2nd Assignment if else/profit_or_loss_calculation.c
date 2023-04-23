#include <stdio.h>

int main()
{
    float SP, cost, percentage;
    printf("Enter cost of the product: \n");
    scanf("%f", &cost);
    printf("Enter Selling price of the product: \n");
    scanf("%f", &SP);
    if (SP > cost)
    {
        percentage = ((SP - cost) / cost) * 100;
        printf("Profit in percentage: %0.2f", percentage);
    }
    else if (cost > SP)
    {
        percentage = ((cost - SP) / cost) * 100;
        printf("Loss in percentage: %0.2f", percentage);
    }
    return 0;
}