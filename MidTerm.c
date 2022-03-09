#include <stdio.h>

int main()
{
    const float pineapple = 30.00;
    const float almond = 28.00;
    const float fruit = 20.00;

    int QuantityPineapple, QuantityAlmond, QuantityFruit, orderNo;
    float pricePineapple, priceAlmond, priceFruit, totalPrice;

    printf("Item\t\tDescription\tPrice(RM)\n");
    printf("----\t\t-----------\t----------\n");
    printf("Pineapple Tart\t50 pcs\t\t30.00\n");
    printf("Almond Cookies\t50pcs\t\t28.00\n");
    printf("Fruit Cake\t500g\t\t20.00\n\n");

    printf("Enter order no: ");
    scanf("%d", &orderNo);

    printf("Enter quantity for Pineapple Tart: ");
    scanf("%d", &QuantityPineapple);

    printf("Enter quantity for Almond Cookies: ");
    scanf("%d", &QuantityAlmond);

    printf("Enter quantity for Fruit Cake: ");
    scanf("%d", &QuantityFruit);

    pricePineapple = QuantityPineapple * pineapple;
    priceAlmond = QuantityAlmond * almond;
    priceFruit = QuantityFruit * fruit;
    totalPrice = pricePineapple + priceAlmond + priceFruit;

    printf("\t\t**INVOICE**\n");
    printf("Order No: %d\n", orderNo);
    printf("Item\t\tQuantity\tPrice(RM)\n");
    printf("----\t\t--------\t----------\n");
    printf("Pineapple Tart\t%d                    %.2f\n", QuantityPineapple, pricePineapple);
    printf("Almond Cookies\t%d                    %.2f\n", QuantityAlmond, priceAlmond);
    printf("Fruit Cake\t%d                    %.2f\n\n", QuantityFruit, priceFruit);

    printf("TOTAL PRICE (RM):\t%.2f", totalPrice);
}
