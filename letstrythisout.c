#include <stdio.h>
#include <string.h>

int main()
{

    char temporaryCharacter[30];
    int i;

    char character[4][30] = {"Snow White", "Cinderella", "Peter Pan", "Rumpelstiltskin"};

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", character[i]);
    }

    strcpy(temporaryCharacter, "Cinderella");
    strcpy(character[1], character[2]);
    strcpy(character[2], temporaryCharacter);

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", character[i]);
    }
}