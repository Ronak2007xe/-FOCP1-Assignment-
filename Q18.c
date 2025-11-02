#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe Duplicate elements are:\n");

    for (i = 0; i < n; i++)
    {
        int count = 1;

        if (arr[i] == -1)
            continue;

        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }

        if (count > 1)
        {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found)
    {
        printf("-1");
    }

    printf("\n");
    return 0;
}
