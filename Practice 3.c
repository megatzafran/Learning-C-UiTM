#include <stdio.h>
void evenORodd(int number);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    evenORodd(number);
}

void evenORodd(int number)
{
    if (number % 2 == 0)
        printf("\nEven");
    else
        printf("\nOdd");
}