#include <stdio.h>

int main()
{
    int scores[10];
    int n, i;
    int found;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (scores[i] == 99)
        {
            printf("The 99 score is the first occurence is at position %d.\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf(" 99 score is not found in the list.\n");
    }

    return 0;
}
