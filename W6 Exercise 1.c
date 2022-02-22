#include <stdio.h>

int main()
{
    int waterUsage;
    float waterBill;
    char userType;

    printf("User Type:\n");
    printf("[A] Domestic Usage\n[B] Bulk meter");
    printf("Insert your user type and water unit usage amount: ");
    scanf("%c %f", &userType, &waterUsage);

    if (userType == 'A')
    {
        if (waterUsage < 100)
        {
            float rateUnit = 0.1;
            waterBill = waterUsage * rateUnit;
            printf("Your water bill is = %f", waterBill);
        }
        else if (waterUsage > 100 && waterUsage < 201)
        {
            float rateUnit = 0.5;
            waterBill = (waterUsage - 100) * 0.05 + (100 * 0.1);
            printf("Your water bill is = %f", waterBill);
        }
        else if (waterUsage >= 201)
        {
            float rateUnit = 0.5;
            waterBill = (waterUsage - 200 - 100) * 0.03 + (100 * 0.1) + (200 * 0.05);
            printf("Your water bill is = %f", waterBill);
        }
        else
        {
            printf("Error");
        }
    }
    else
    {
        if (waterUsage < 100)
        {
            waterBill = waterUsage * 0.4;
            printf("Your water bill is = %f", waterBill);
        }
        else if (waterUsage > 100 && waterUsage < 201)
        {
            waterBill = (waterUsage - 100) * 0.03 + (100 * 0.4);
            printf("Your water bill is = %f", waterBill);
        }
        else if (waterUsage >= 201)
        {
            float rateUnit = 0.5;
            waterBill = (waterUsage - 200 - 100) * 0.1 + (100 * 0.4) + (200 * 0.3);
            printf("Your water bill is = %f", waterBill);
        }
        else
        {
            printf("Error");
        }
    }
}