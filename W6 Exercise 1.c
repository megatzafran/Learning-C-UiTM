#include <stdio.h>

int main()
{
    int waterUsage;
    float waterBill;
    char userType;

    printf("User Type:\n");
    printf("[A] Domestic Usage\n[B] Bulk meter\n\n");
    printf("Insert your user type: ");
    scanf(" %c", &userType);

    if (userType == 'A')
    {
        printf("\nInsert your water unit usage amount: ");
        scanf("%d", &waterUsage);
        if (waterUsage <= 100)
        {
            waterBill = waterUsage * 0.1;
        }
        else if (waterUsage > 100 && waterUsage < 201)
        {

            waterBill = (waterUsage - 100) * 0.05 + (100 * 0.1);
        }
        else if (waterUsage >= 201)
        {

            waterBill = (waterUsage - 200) * 0.03 + (100 * 0.1) + (200 * 0.05);
        }
        else
        {
            printf("Error");
        }

        if (waterBill < 7)
        {
            printf("Your water bill is RM7.00");
        }
        else
        {
            printf("Your water bill is = RM%.2f", waterBill);
        }
    }
    else if (userType == 'B')
    {
        printf("\nInsert your water unit usage amount: ");
        scanf("%d", &waterUsage);
        if (waterUsage < 100)
        {
            waterBill = waterUsage * 0.4;
        }
        else if (waterUsage > 100 && waterUsage < 201)
        {
            waterBill = (waterUsage - 100) * 0.3 + (100 * 0.4);
        }
        else if (waterUsage >= 201)
        {

            waterBill = (waterUsage - 200) * 0.1 + (100 * 0.4) + (200 * 0.3);
        }
        else
        {
            printf("Error");
        }

        if (waterBill < 7)
        {
            printf("Your water bill is RM7.00");
        }
        else
        {
            printf("Your water bill is = RM%.2f", waterBill);
        }
    }
    else
    {
        printf("Invalid");
    }
}