#include <stdio.h>

int main()
{
    int meters = 1;
    float inches;
    printf("Meters\tInches\n");

    while (meters < 11)
    {
        inches = meters * 39.37;
        printf("%d\t%f\n", meters, inches);
        meters++;
    }
}