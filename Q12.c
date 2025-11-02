#include <stdio.h>

int main()
{
    int scores[100];
    int n, i;
    int max_score, min_score;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    max_score = scores[0];
    min_score = scores[0];

    for (i = 1; i < n; i++)
    {
        if (scores[i] > max_score)
        {
            max_score = scores[i];
        }
        if (scores[i] < min_score)
        {
            min_score = scores[i];
        }
    }

    printf("\nThe Maximum score is = %d\n", max_score);
    printf("The Minimum score is = %d\n", min_score);

    return 0;
}
