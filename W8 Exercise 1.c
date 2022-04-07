#include <stdio.h>

int main()
{
    int i, numbers[5], max = -9999;
    for (i = 0; i < 5; i++)
    {
        printf("Insert number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
        }
    }

    printf("\nThe highest number is %d", max);
}