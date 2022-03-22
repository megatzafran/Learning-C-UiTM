#include <stdio.h>

int main()
{
    float salary;
    int shift;
    float totalSalary = 0;

    do
    {
        printf("Please enter salary: ");
        scanf("%f", &salary);
        totalSalary += salary;

    } while (salary <= 0);

    printf("Please enter shift: ");
    scanf("%d", &shift);

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