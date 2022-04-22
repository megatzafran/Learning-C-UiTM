#include <stdio.h>
#include <string.h>

void inputMarks();
void minimum();
void maximum();
void average();

float marks[999];
int count = -1;

int main()
{
    char name[100];
    int i;

    printf("Enter Name: ");
    gets(name);

    inputMarks();

    printf("\nYour name:\n%s\n", name);

    for (i = 0; i < count; i++)
    {
        printf("\nMarks %d --> %.2f", i + 1, marks[i]);
    }

    average();
    maximum();
    minimum();
}

void inputMarks()
{
    int i = 0;
    int operationRun = 1;

    while (operationRun == 1)
    {
        printf("\nEnter all your marks (negative number to exit): ");
        scanf("%f", &marks[i]);

        if (marks[i] < 0)
        {
            operationRun = 0;
        }

        i++;
        count++;
    }
    printf("End of a loop. Total number of subjects entered is %d\n", count);
}

void minimum()
{
    int i;
    float minimum = 999999;

    for (i = 0; i < count; i++)
    {
        if (marks[i] < minimum)
        {
            minimum = marks[i];
        }
    }

    printf("\nThe minimum is %.2f", minimum);
}

void maximum()
{

    int i;
    float maximum = -999999;

    for (i = 0; i < count; i++)
    {
        if (marks[i] > maximum)
        {
            maximum = marks[i];
        }
    }
    printf("\nThe maximum is %.2f", maximum);
}

void average()
{
    int i;
    float totalMarks;
    float average;

    for (i = 0; i < count; i++)
    {
        totalMarks += marks[i];
    }

    average = totalMarks / count;

    printf("\nThe average is %.2f", average);
}