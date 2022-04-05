#include <stdio.h>

int main()
{
    int i, fail = 0, marks[5];

    for (i = 0; i < 5; i++)
    {
        printf("Enter mark Student %d:", i + 1);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (marks[i] < 50)
        {
            fail++;
        }
    }
    printf("\nNumber of Failed Student : %d Failure", fail);
    for (i = 0; i < 5; i++)
    {

        if (marks[i] < 50)
        {

            printf("\nStudent %d", i + 1);
        }
    }
}