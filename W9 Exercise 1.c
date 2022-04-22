#include <stdio.h>
void addition(int numbers[]);

int main()
{
    int i;
    int numbers[4] = {1, 2, 3, 4};

    for (i = 0; i < 4; i++)
    {
        printf("%-5d", numbers[i]);
    }
    printf("\n");

    addition(numbers);
}

void addition(int numbers[])
{
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%-5d", numbers[i] + 6);
    }

    printf("\n");

    for (i = 0; i < 4; i++)
    {
        printf("%-5d", numbers[i] + 10);
    }
}