#include <stdio.h>

int main()
{
    int arr[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {

        if (i == 0 && arr[i] >= arr[i + 1])
        {
            printf("Congrates! the Peak element found: %d at the position %d\n", arr[i], i + 1);
            break;
        }

        else if (i == n - 1 && arr[i] >= arr[i - 1])
        {
            printf(" Congrates! the Peak element found: %d at the position %d\n", arr[i], i + 1);
            break;
        }

        else if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
        {
            printf(" Congrates! the Peak element found: %d at the position %d\n", arr[i], i + 1);
            break;
        }
    }

    if (i == n)
        printf(" Sorry! No peak element found.\n");

    return 0;
}
