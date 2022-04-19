#include <stdio.h>
void displayMenu();
#define insurance 0.1

int main()
{
    int i, j, days;
    float totalRental[5];

    displayMenu();

    for (i = 0; i < 5; i++)
    {
        printf("What is the rental duration for model [%d]: ", i + 1);
        scanf("%d", &days);

        switch (i)
        {
        case 0:
            totalRental[0] = (120 * days) + (120 * days * 0.1);
            break;
        case 1:
            totalRental[1] = (140 * days) + (140 * days * 0.1);
            break;
        case 2:
            totalRental[2] = (200 * days) + (200 * days * 0.1);
            break;
        case 3:
            totalRental[3] = (100 * days) + (100 * days * 0.1);
            break;
        case 4:
            totalRental[4] = (200 * days) + (200 * days * 0.1);
            break;
        }
    }

    for (j = 0; j < 5; j++)
    {
        printf("\nTotal rental price for car [%d] is: %.2f", j + 1, totalRental[j]);
    }
}

void displayMenu()
{
    printf("PULAU CAR RENTAL\n\n");

    printf("VEHICLE MODEL\t\tRENTAL PER DAY (RM)\n");
    printf("[1] PROTON SAGA\t\t\t120.00\n");
    printf("[2] PROTON PESONA\t\t140.00\n");
    printf("[3] PROTON EXORA\t\t200.00\n");
    printf("[4] PROTON MYVI\t\t\t100.00\n");
    printf("[5] PROTON ARUZ\t\t\t200.00\n");

    printf("\n*Listed cost excludes car insurance i.e. 10%%\n\n");
}