#include <stdio.h>

int main()
{
    int score[3] = {90, 88, 78};
    int i;

    for (i = 2; i >= 0; i--)
    {
        printf("Element %d : %d\n", i + 1, score[i]);
    }
}