#include <stdio.h>

int main()
{
    int EggAmount;
    printf("Insert egg amount: ");
    scanf("%d", &EggAmount);

    if (EggAmount < 201)
    {
        printf("No discount.");
    }
    else if (EggAmount > 200)
    {
        printf("5 percent discount is given.");
    }
}