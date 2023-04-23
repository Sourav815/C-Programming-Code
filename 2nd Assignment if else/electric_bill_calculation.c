#include <stdio.h>

int main()
{
    int unit;
    float bill, total_bill, sur_charge;
    printf("Enter total unit consumed: \n");
    scanf("%d", &unit);
    if (unit >= 0 && unit <= 50)
    {
        bill = unit * 0.5;
        sur_charge = bill * 0.2;
        total_bill = bill + sur_charge;
    }
    else if (unit > 50 && unit <= 150)
    {
        bill = (50 * 0.5) + ((unit - 50) * 0.75);
        sur_charge = bill * 0.2;
        total_bill = bill + sur_charge;
    }
    else if (unit > 150 && unit <= 250)
    {
        bill = (50 * 0.5) + (100 * 0.75) + ((unit - 150) * 1.20);
        sur_charge = bill * 0.2;
        total_bill = bill + sur_charge;
    }
    else if (unit > 250)
    {
        bill = (50 * 0.5) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
        sur_charge = bill * 0.2;
        total_bill = bill + sur_charge;
    }
    printf("Total payable amount: %0.2f\n", total_bill);
    return 0;
}