#include <stdio.h>

int main()
{
    int i;
    char university[5];

    printf("Insert any abbreviation of university (less than 6 characters): ");
    gets(university);
    for (i = 0; i < 5; i++)
    {
        printf("%c\n", university[i]);
    }
}