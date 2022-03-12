#include <stdio.h>

int main()
{

    int bloodSugarLevel;

    printf("Input blood sugar Level");
    scanf("%d", bloodSugarLevel);

    if (bloodSugarLevel < 140)
    {
        printf("Normal");
    }
    else if (bloodSugarLevel >= 140 && bloodSugarLevel <= 199)
    {
        printf("Prediabetes");
    }
    else if (bloodSugarLevel > 199)
    {
        printf("Diabetes");
    }
    else
    {
        printf("Invalid");
    }
}