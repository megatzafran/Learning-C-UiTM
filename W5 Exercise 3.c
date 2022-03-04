#include <stdio.h>

int main()
{
    int set;
    int operationStop;
    char *monSet[200];
    char *tuesSet[200];
    char *wedSet[200];
    char *thursSet[200];
    char *friSet[200];
    char *satSet[200];
    char *sunSet[200];

    printf("Please insert your meals based on the set below:\n\n");

    printf("Set 1:\n");
    printf("Breakfast: Nasi Lemak and Teh O' Ais\tLunch: Nasi Ayam and Milo\t\tDinner: Burger and McFlurry\n");
    printf("\nSet 2:\n");
    printf("Breakfast: Sandwich and Coffee\t\tLunch: Nasi Goreng Cina and Horlicks\tDinner: Chicken Chop and Green Tea\n");
    printf("\nSet 3:\n");
    printf("Breakfast: Nugger and Teh Tarik\t\tLunch: Aglio Olio and Pepsi\t\tDinner: Salad and McFrappe\n");

    printf("\nwhat set did you eat on Monday?\n");
    scanf("%d", &set);
    switch (set)
    {
    case 1:
    {
        monSet[200] = "Breakfast: Nasi Lemak and Teh O' Ais\t\tLunch: Nasi Ayam and Milo\t\tDinner: Burger and McFlurry";
        break;
    }
    case 2:
    {
        monSet[200] = "Breakfast: Sandwich and Coffee\t\t\tLunch: Nasi Goreng Cina and Horlicks\tDinner: Chicken Chop and Green Tea";
        break;
    }
    case 3:
    {
        monSet[200] = "Breakfast: Nugger and Teh Tarik\t\t\tLunch: Aglio Olio and Pepsi\t\tDinner: Salad and McFrappe";

        break;
    }
    default:
    {
        printf("Invalid");
        break;
    }
    }

    printf("\nwhat set did you eat on Tuesday?\n");
    scanf("%d", &set);
    switch (set)
    {
    case 1:
    {
        tuesSet[200] = "Breakfast: Nasi Lemak and Teh O' Ais\t\tLunch: Nasi Ayam and Milo\t\tDinner: Burger and McFlurry";
        break;
    }
    case 2:
    {
        tuesSet[200] = "Breakfast: Sandwich and Coffee\t\t\tLunch: Nasi Goreng Cina and Horlicks\tDinner: Chicken Chop and Green Tea";
        break;
    }
    case 3:
    {
        tuesSet[200] = "Breakfast: Nugger and Teh Tarik\t\t\tLunch: Aglio Olio and Pepsi\t\tDinner: Salad and McFrappe";

        break;
    }
    default:
    {
        printf("Invalid");
        break;
    }
    }

    printf("\nwhat set did you eat on Wednesday?\n");
    scanf("%d", &set);
    switch (set)
    {
    case 1:
    {
        wedSet[200] = "Breakfast: Nasi Lemak and Teh O' Ais\t\tLunch: Nasi Ayam and Milo\t\tDinner: Burger and McFlurry";
        break;
    }
    case 2:
    {
        wedSet[200] = "Breakfast: Sandwich and Coffee\t\t\tLunch: Nasi Goreng Cina and Horlicks\tDinner: Chicken Chop and Green Tea";
        break;
    }
    case 3:
    {
        wedSet[200] = "Breakfast: Nugger and Teh Tarik\t\t\tLunch: Aglio Olio and Pepsi\t\tDinner: Salad and McFrappe";

        break;
    }
    default:
    {
        printf("Invalid");
        break;
    }
    }

    printf("\nwhat set did you eat on Thursday?\n");
    scanf("%d", &set);
    switch (set)
    {
    case 1:
    {
        thursSet[200] = "Breakfast: Nasi Lemak and Teh O' Ais\t\tLunch: Nasi Ayam and Milo\t\tDinner: Burger and McFlurry";
        break;
    }
    case 2:
    {
        thursSet[200] = "Breakfast: Sandwich and Coffee\t\t\tLunch: Nasi Goreng Cina and Horlicks\tDinner: Chicken Chop and Green Tea";
        break;
    }
    case 3:
    {
        thursSet[200] = "Breakfast: Nugger and Teh Tarik\t\t\tLunch: Aglio Olio and Pepsi\t\tDinner: Salad and McFrappe";

        break;
    }
    default:
    {
        printf("Invalid");
        break;
    }
    }

    printf("\nwhat set did you eat on Friday?\n");
    scanf("%d", &set);
    switch (set)
    {
    case 1:
    {
        friSet[200] = "Breakfast: Nasi Lemak and Teh O' Ais\t\tLunch: Nasi Ayam and Milo\t\tDinner: Burger and McFlurry";
        break;
    }
    case 2:
    {
        friSet[200] = "Breakfast: Sandwich and Coffee\t\t\tLunch: Nasi Goreng Cina and Horlicks\tDinner: Chicken Chop and Green Tea";
        break;
    }
    case 3:
    {
        friSet[200] = "Breakfast: Nugger and Teh Tarik\t\t\tLunch: Aglio Olio and Pepsi\t\tDinner: Salad and McFrappe";

        break;
    }
    default:
    {
        printf("Invalid");
        break;
    }
    }

    printf("\nwhat set did you eat on Saturday?\n");
    scanf("%d", &set);
    switch (set)
    {
    case 1:
    {
        satSet[200] = "Breakfast: Nasi Lemak and Teh O' Ais\t\tLunch: Nasi Ayam and Milo\t\tDinner: Burger and McFlurry";
        break;
    }
    case 2:
    {
        satSet[200] = "Breakfast: Sandwich and Coffee\t\t\tLunch: Nasi Goreng Cina and Horlicks\tDinner: Chicken Chop and Green Tea";
        break;
    }
    case 3:
    {
        satSet[200] = "Breakfast: Nugger and Teh Tarik\t\t\tLunch: Aglio Olio and Pepsi\t\tDinner: Salad and McFrappe";

        break;
    }
    default:
    {
        printf("Invalid");
        break;
    }
    }

    printf("\nwhat set did you eat on Sunday?\n");
    scanf("%d", &set);
    switch (set)
    {
    case 1:
    {
        sunSet[200] = "Breakfast: Nasi Lemak and Teh O' Ais\t\tLunch: Nasi Ayam and Milo\t\tDinner: Burger and McFlurry";
        break;
    }
    case 2:
    {
        sunSet[200] = "Breakfast: Sandwich and Coffee\t\t\t\tLunch: Nasi Goreng Cina and Horlicks\tDinner: Chicken Chop and Green Tea";
        break;
    }
    case 3:
    {
        sunSet[200] = "Breakfast: Nugger and Teh Tarik\t\t\tLunch: Aglio Olio and Pepsi\t\tDinner: Salad and McFrappe";

        break;
    }
    default:
    {
        printf("Invalid");
        break;
    }
    }

    printf("\n\nMonday:\t\t\t%s\n\nTuesday:\t%s\n\nWednesday:\t%s\n\nThursday:\t%s\n\nFriday:\t\t%s\n\nSaturday:\t%s\n\nSunday:\t\t%s\n\n", monSet[200], tuesSet[200], wedSet[200], thursSet[200], friSet[200], satSet[200], sunSet[200]);
}
