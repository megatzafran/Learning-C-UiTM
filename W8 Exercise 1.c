#include <stdio.h>

int main()
{
    float salary[4], kwsp;
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("Insert salary for employee %d: ", i + 1);
        scanf("%f", &salary[i]);
        kwsp = salary[i] * 0.1;

        printf("Total deduction for employee %d : %.2f\n\n", i + 1, kwsp);
    }
}