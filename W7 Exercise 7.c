#include <stdio.h>

int main()
{
    int i, j;
    for (i = 4; i < 13; i += 4)
    {
        printf("x%d: ", i);
        for (j = 1; j < 6; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}