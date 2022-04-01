#include <stdio.h>

int main()
{

    char whichOption;
    char wantContinue = 't';
    float product;
    float priceS, priceC, priceM;
    float discountPriceS, discountPriceC, discountPriceM;

    printf("Product Type\tDiscount Rate\n");
    printf("[S]\t\t0.3\n");
    printf("[C]\t\t0.1\n");
    printf("[M]\t\t0.4\n");

    while (wantContinue == 't')
    {
        printf("\nWhich option are you choosing?\n");
        scanf(" %c", &whichOption);

        if (whichOption == 'S')
        {
            printf("\nWhat is the price of product S: ", product);
            scanf("%f", &priceS);

            discountPriceS = priceS - (priceS * 0.3);
            printf("Price after discount is %.2f", discountPriceS);
        }
        else if (whichOption == 'C')
        {
            printf("\nWhat is the price of product C: ", product);
            scanf("%f", &priceC);

            discountPriceC = priceC - (priceC * 0.1);
            printf("Price after discount is %.2f", discountPriceC);
        }
        else if (whichOption == 'M')
        {
            printf("\nWhat is the price of product M: ", product);
            scanf("%f", &priceM);

            discountPriceM = priceM - (priceM * 0.4);
            printf("Price after discount is %.2f", discountPriceM);
        }
        else
        {
            printf("\nInvalid product type\n");
        }

        printf("\nDo you still want to continue? (y/n)\n");
        scanf(" %c", &wantContinue);

        if (wantContinue == 'y')
        {
            wantContinue = 't';
        }
        else
        {
            wantContinue = 'f';
        }
    }
}
