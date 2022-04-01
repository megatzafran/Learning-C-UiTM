#include <stdio.h>

int main()
{

    char whichOption;
    int wantContinue = 1;
    float product;
    float priceS, priceC, priceM;
    float discountPriceS, discountPriceC, discountPriceM;

    printf("\nThis program will repeat 3 times :D\n");
    printf("Product Type\tDiscount Rate\n");
    printf("[S]\t\t0.3\n");
    printf("[C]\t\t0.1\n");
    printf("[M]\t\t0.4\n");

    while (wantContinue < 4)
    {
        printf("\nWhich option are you choosing?\n");
        scanf(" %c", &whichOption);

        if (whichOption == 'S')
        {
            printf("\nWhat is the price of product S: ");
            scanf("%f", &priceS);

            discountPriceS = priceS - (priceS * 0.3);
            printf("Price after discount is %.2f\n", discountPriceS);
        }
        else if (whichOption == 'C')
        {
            printf("\nWhat is the price of product C: ");
            scanf("%f", &priceC);

            discountPriceC = priceC - (priceC * 0.1);
            printf("Price after discount is %.2f\n", discountPriceC);
        }
        else if (whichOption == 'M')
        {
            printf("\nWhat is the price of product M: ");
            scanf("%f", &priceM);

            discountPriceM = priceM - (priceM * 0.4);
            printf("Price after discount is %.2f\n", discountPriceM);
        }
        else
        {
            printf("\nInvalid product type\n");
            wantContinue--;
        }
        wantContinue++;
    }
}
