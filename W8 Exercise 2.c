#include <stdio.h>

int main()
{
    int i;
    float price[5], totalPrice;

    for (i = 0; i < 5; i++)
    {
        printf("\nInput price: ");
        scanf("%f", &price[i]);

        totalPrice = price[i] + 0.06 * price[i];
        printf("Price after tax item %d: %.2f\n", i + 1, totalPrice);
    }
}