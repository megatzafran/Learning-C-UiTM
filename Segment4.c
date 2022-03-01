#include <stdio.h>

int main()
{
    float minute;
    float totalPrice;
    printf("Total call usage (minutes): ");
    scanf("%f", &minute);

    if (minute > 0 && minute <= 100)
    {
        totalPrice = minute * 0.2;
    }
    else if (minute > 100 && minute <= 250)
    {
        totalPrice = 100 * 0.2 + (minute - 100) * 0.15;
    }
    else if (minute > 250)
    {
        totalPrice = 100 * 0.2 + 250 * 0.15 + (minute - 250) * 0.1;
    }
    printf("Total Price: %.2f", totalPrice);
}