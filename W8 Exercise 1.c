#include <stdio.h>

int main()
{
    int i, numbers[5], temp; // temp is considered as temporary
    for (i = 0; i < 5; i++)
    {
        printf("Insert number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++)
    {
        temp = -9999;
        if (temp < numbers[i])
        {
            temp = numbers[i];
        }
    }

    printf("\nThe highest number is %d", temp);
}