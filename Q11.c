#include <stdio.h>

int main()
{
    int scores[100], even_array[100], odd_array[100];
    int n, i;
    int even_count, odd_count;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (scores[i] % 2 == 0)
        {
            even_array[even_count] = scores[i];
            even_count++;
        }
        else
        {
            odd_array[odd_count] = scores[i];
            odd_count++;
        }
    }

    printf("\nThe Even scores are:\n");
    for (i = 0; i < even_count; i++)
    {
        printf("%d ", even_array[i]);
    }

    printf("\n\nThe Odd scores are:\n");
    for (i = 0; i < odd_count; i++)
    {
        printf("%d ", odd_array[i]);
    }

    printf("\n");

    return 0;
}
