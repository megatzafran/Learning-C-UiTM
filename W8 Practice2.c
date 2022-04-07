#include <stdio.h>

int main()
{
    float price[3], totalPrice;
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter a value: ");
        scanf("%f", &price[i]);
    }

    printf("\nList of price");

    for (i = 0; i < 3; i++)
    {
        printf("\nRM%.1f", price[i]);
        totalPrice += price[i];
    }

    printf("\n\nTotal price : %.2f", totalPrice);
}