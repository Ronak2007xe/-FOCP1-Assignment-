#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
            printf("%d", j % 2);

        for (int m = 1; m <= 2 * (n - i); m++)
            printf(" ");

        for (int j = 1; j <= i; j++)
            printf("%d", j % 2);

        printf("\n");
    }

    return 0;
}
