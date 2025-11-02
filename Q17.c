#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe Array before deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter the position to delete (1 for front, %d for end, or any middle positionition): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n)
    {
        printf("Invalid position! Please try again.\n");
        return 0;
    }

    for (i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("\n The Array after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
