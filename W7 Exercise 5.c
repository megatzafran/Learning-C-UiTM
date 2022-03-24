#include <stdio.h>

int main()
{
    char i;
    for (i = 'a'; i <= 'z'; i++)
    {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
        {
            printf("%c", i);
        }
    }
}