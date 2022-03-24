#include <stdio.h>

int main()
{
    int i, j;
    float number1, number2, number3, number4, number5;

    for (i = 1; i < 6; i++)
    {
        printf("\nInsert your number [%d]: ", i);
        switch (i)
        {
        case 1:
            scanf("%f", &number1);
            break;
        case 2:
            scanf("%f", &number2);
            break;
        case 3:
            scanf("%f", &number3);
            break;
        case 4:
            scanf("%f", &number4);
            break;
        case 5:
            scanf("%f", &number5);
            break;
        }
    }

    if (number1 > number2 && number1 > number3 && number1 > number4 && number1 > number5)
    {
        printf("Number 1 is the maximum number with the value of %.2f", number1);
    }
    else if (number2 > number1 && number2 > number3 && number2 > number4 && number2 > number5)
    {
        printf("Number 2 is the maximum number with the value of %.2f", number2);
    }
    else if (number3 > number1 && number3 > number2 && number3 > number4 && number3 > number5)
    {
        printf("Number 3 is the maximum number with the value of %.2f", number3);
    }
    else if (number4 > number1 && number4 > number2 && number4 > number3 && number4 > number5)
    {
        printf("Number 4 is the maximum number with the value of %.2f", number4);
    }
    else
    {
        printf("Number 5 is the maximum number with the value of %.2f", number5);
    }
}