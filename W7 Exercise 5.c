#include <stdio.h>
#define YES 'y'

int main()
{

    char keepContinue = 'y', cycle = 1;
    float product;
    float priceS, priceC, priceM;
    float discountPriceS, discountPriceC, discountPriceM;

    while (keepContinue == 'y')
    {
        printf("\nProduct Type\tDiscount Rate\n");
        printf("[S]\t\t0.3\n");
        printf("[C]\t\t0.1\n");
        printf("[M]\t\t0.4\n");

        while (cycle < 4)
        {
            if (cycle == 1)
            {
                printf("\nWhat is the price of product S: ", product);
                scanf("%f", &priceS);

                discountPriceS = priceS - (priceS * 0.3);
            }
            else if (cycle == 2)
            {
                printf("\nWhat is the price of product C: ", product);
                scanf("%f", &priceC);

                discountPriceC = priceC - (priceC * 0.1);
            }
            else
            {
                printf("\nWhat is the price of product M: ", product);
                scanf("%f", &priceM);

                discountPriceM = priceM - (priceM * 0.4);
            }

            cycle++;
        }
        printf("\fPrice after discount is:\n");
        printf("S : %.2f\n", discountPriceS);
        printf("C : %.2f\n", discountPriceC);
        printf("M : %.2f\n", discountPriceM);

        cycle = 1;
        printf("\nDo you wish to proceed to another calculation? (y/n): ");
        scanf(" %c", &keepContinue);
    }
}
