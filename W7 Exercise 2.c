#include <stdio.h>

int main()
{
    float salary;
    int shift;
    int counter = 0;
    float totalSalary = 0;

    printf("How many shifts ?: ");
    scanf("%d", &shift);

    do
    {
        printf("Please enter salary: ");
        scanf("%f", &salary);
        totalSalary += salary;
        counter++;

    } while (counter < shift);

    if (shift > 3)
    {
        totalSalary += 1000;
        printf("Salary is %.2f", totalSalary);
    }
    else
    {
        printf("Salary is %.2f", totalSalary);
    }
}