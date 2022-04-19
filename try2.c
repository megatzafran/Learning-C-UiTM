#include <stdio.h>

int main()
{

    int firstNum, secondNum;

    printf("First number must be less than second number:\n");
    printf("Enter first number: ");
    scanf("%d", &firstNum);

    printf("Enter second number: ");
    scanf("%d", &secondNum);

    if (secondNum > firstNum)
    {
        printf("Odd Numbers\tEven Numbers\n");
        for (firstNum; firstNum <= secondNum; firstNum++)
        {
            if (firstNum % 2 != 0)
            {
                printf("\t%d\t", firstNum);
            }
            else
            {
                printf("\t%d\n", firstNum);
            }
        }
    }
}