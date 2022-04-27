
#include <stdio.h>

int main()
{
    int n1, n2, output, k;

    printf("Number 1 : ");
    scanf("%d", &n1);

    printf("Number 2 : ");
    scanf("%d", &n2);

    output = 1;
    k = 1;

    while (k <= n1 && k <= n2)
    {
        if (n1 % k == 0 && n2 % k == 0)
            output = k;
        k++;
    }

    printf("Output is %d\n\n", output);
}