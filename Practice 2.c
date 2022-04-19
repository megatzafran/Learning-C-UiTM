#include <stdio.h>

double Average(double test_1, double test_2);
int main()
{
    double test_1, test_2;

    printf("Value Number 1: ");
    scanf("%lf", &test_1);

    printf("Value Number 2: ");
    scanf("%lf", &test_2);

    printf("Average is: %.2lf", Average(test_1, test_2));
}

double Average(double test_1, double test_2)
{
    float average;
    average = (test_1 + test_2) / 2;
    return average;
}