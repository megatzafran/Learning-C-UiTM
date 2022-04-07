#include <stdio.h>

int main()
{
    int numArr[5];
    int oddArr[3];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter a value : ");
        scanf("%d", &numArr[i]);
    }

    printf("\nAll number");
    for (i = 0; i < 5; i++)
    {
        printf("\n\t%d", numArr[i]);
    }

    printf("\nOdd number\n");
    for (i = 0; i < 5; i++)
    {
        if (numArr[i] % 2 != 0)
        {
            oddArr[i] = numArr[i];
            printf("\t%d\n", oddArr[i]);
        }
    }
}
