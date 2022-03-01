#include <stdio.h>

int main()
{
    int tshirtSize;
    if (tshirtSize == 1)
    {
        printf("SMALL\n");
    }
    else if (tshirtSize == 5 || tshirtSize == 8)
    {
        printf("MEDIUM\n");
    }
    else if (tshirtSize == 12)
    {
        printf("LARGE\n");
    }
    else
    {
        printf("Unrecognized T-shirt size\n");
    }
}