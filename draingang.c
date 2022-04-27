#include <stdio.h>
#include <string.h>

char movie[5][100] = {"007", "test1", "test2"};
char rating[10][100] = {"PG13", "18", "IDK"};

int main()
{
    int repeat = 1;

    do
    {
        char temporaryString[30], temporaryRate[30];
        int option, i = 0;

        printf("\n\n---------------Movie---------------\n");
        for (i = 0; i < 5; i++)
        {
            if (*movie[i] != '\0')
            {
                printf("[%d] %-15s %s\n", i + 1, movie[i], rating[i]);
            }
            else
            {
                printf("[%d] %-15s %s\n", i + 1, "No Movie", "No Movie");
            }
        }

        printf("\nWhich movie do you want to change? : ");
        scanf("%d", &option);
        getchar();

        printf("What is the new title of the movie? : ");
        gets(temporaryString);

        printf("What is the rating type? : ");
        gets(temporaryRate);

        printf("\n\n-----Changing Movie Slots-----");
        option--;

        switch (option)
        {
        case 0:
            strcpy(movie[option], temporaryString);
            strcpy(rating[option], temporaryRate);
            break;
        case 1:
            strcpy(movie[option], temporaryString);
            strcpy(rating[option], temporaryRate);
            break;
        case 2:
            strcpy(movie[option], temporaryString);
            strcpy(rating[option], temporaryRate);
            break;
        case 3:
            strcpy(movie[option], temporaryString);
            strcpy(rating[option], temporaryRate);
            break;
        case 4:
            strcpy(movie[option], temporaryString);
            strcpy(rating[option], temporaryRate);
            break;
        }

        printf("\n\n---------------Movie---------------\n");
        for (i = 0; i < 5; i++)
        {
            if (*movie[i] != '\0')
            {
                printf("[%d] %-15s %s\n", i + 1, movie[i], rating[i]);
            }
            else
            {
                printf("[%d] %-15s %s\n", i + 1, "No Movie", "No Movie");
            }
        }

        printf("\nDo you want to repeat this action? (1 if yes 0 if no) : ");
        scanf("%d", &repeat);
    } while (repeat == 1);
}