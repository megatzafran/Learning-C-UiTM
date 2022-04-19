#include <stdio.h>

int main()
{
    int r, c;

    int number[5][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf(" %5d", number[r][c]);
        }
        printf("\n");
    }
}
