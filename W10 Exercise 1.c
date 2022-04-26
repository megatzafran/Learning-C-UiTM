#include <stdio.h>
void analyze(float[]);
void printResult();

float total, average, highest = -9999999999, lowest = 9999999999;

int main()
{
    int i;
    float marks[10];

    printf("Enter marks for 10 students\n");
    for (i = 0; i < 10; i++)
    {
        printf("Student %d : ", i + 1);
        scanf("%f", &marks[i]);
    }

    analyze(marks);

    printResult();
}

void analyze(float marks[])
{

    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    for (j = 0; j < 10; j++)
    {
        if (marks[j] < lowest)
        {
            lowest = marks[j];
        }
    }

    for (k = 0; k < 10; k++)
    {
        total += marks[k];
    }

    average = total / 10;
}

void printResult()
{
    printf("\nLowest Mark %.2f\n", lowest);
    printf("Highest Mark %.2f\n", highest);
    printf("Average Mark %.2f", average);
}