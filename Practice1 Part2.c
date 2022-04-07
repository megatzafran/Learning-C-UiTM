#include <stdio.h>

int main()
{
    int score[3] = {90, 88, 78};
    int i, j;

    for (j = 0; j < 3; j++)
    {
        printf("Element %d : %d\n", j + 1, score[j]);
    }

    printf("\n\n");

    for (i = 2; i >= 0; i--)
    {
        printf("Element %d : %d\n", i + 1, score[i]);
    }
}