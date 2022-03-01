#include <stdio.h>

int main()
{
    int type;
    int electricityUsage;
    float totalPayment;

    printf("Type\n");
    printf("[0] Residential\n");
    printf("[1] Industrial\n");

    printf("Insert your type:");
    scanf("%d", type);
    if (type == 1)
    {
        printf("Insert electricity usage");
        scanf("%d", electricityUsage);
        if (electricityUsage > 0 && electricityUsage <= 200)
        {
            totalPayment = electricityUsage * 0.2;
            printf("%f", totalPayment);
        }
        else if (electricityUsage > 200 && electricityUsage < 300)
        {
            totalPayment = 200 * 0.2 + (electricityUsage - 200) * 0.3;
            printf("%f", totalPayment);
        }
    }
    else if (type == 2)
    {
        printf("Insert electricity usage");
        if (electricityUsage <= 200 && electricityUsage > 0)
        {
            totalPayment = electricityUsage * 0.5;
            printf("%f", totalPayment);
        }
        else if (electricityUsage > 200 && electricityUsage < 300)
        {
            totalPayment = 200 * 0.5 + (electricityUsage - 200) * 0.65;
            printf("%f", totalPayment);
        }
    }
    else
    {
        printf("invalid");
    }
}