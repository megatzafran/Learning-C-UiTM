#include <stdio.h>

int main()
{
    int roomType;
    int roomView;
    int numberTicket;
    float totalPrice;
    float totalPriceGst;

    printf("Room type\n");
    printf("[0] Single Room\n");
    printf("[1] Double Room\n");
    printf("[2] Executive Room\n\n");

    printf("Insert your room type: ");
    scanf("%d", &roomType);

    if (roomType == 0)
    {
        printf("Which ticket would you like to buy\n");
        printf("[0] Without ocean view\n");
        printf("[1] With ocean view\n");

        scanf("%d", &roomView);

        printf("Insert the number of ticket");
        scanf("%d", &numberTicket);

        if (roomView == 0)
        {
            totalPrice = numberTicket * 70;
            totalPriceGst = totalPrice * 0.1;
            printf("Total Price = %.2f\n", totalPrice);
            printf("Total price with gst = %.2f\n", totalPriceGst);
        }

        else if (roomView == 1)
        {
            totalPrice = numberTicket * 90;
            printf("Total Price = %.2f\n", totalPrice);
            printf("Total price with gst = %.2f\n", totalPriceGst);
        }
        else
        {
            printf("Invalid");
        }
    }

    else if (roomType == 1)
    {
        printf("Which ticket would you like to buy\n");
        printf("[0] Without ocean view\n");
        printf("[1] With ocean view\n");

        scanf("%d", &roomView);

        printf("Insert the number of ticket");
        scanf("%d", &numberTicket);

        if (roomView == 0)
        {
            totalPrice = numberTicket * 110;
            printf("Total Price = %.2f\n", totalPrice);
            printf("Total price with gst = %.2f\n", totalPriceGst);
        }
        else if (roomView == 1)
        {
            totalPrice = numberTicket * 130;
            printf("Total Price = %.2f\n", totalPrice);
            printf("Total price with gst = %.2f\n", totalPriceGst);
        }
        else
        {
            printf("Invalid");
        }
    }
    else if (roomType == 2)
    {
        printf("Which ticket would you like to buy\n");
        printf("[0] Without ocean view\n");
        printf("[1] With ocean view\n");

        scanf("%d", &roomView);

        printf("Insert the number of ticket");
        scanf("%d", &numberTicket);

        if (roomView == 0)
        {
            totalPrice = numberTicket * 180;
            printf("Total Price = %.2f\n", totalPrice);
            printf("Total price with gst = %.2f\n", totalPriceGst);
        }
        else if (roomView == 1)
        {
            totalPrice = numberTicket * 200;
            printf("Total Price = %.2f\n", totalPrice);
            printf("Total price with gst = %.2f\n", totalPriceGst);
        }
        else
        {
            printf("Invalid");
        }
    }
    else
    {
        printf("Invalid");
    }
}