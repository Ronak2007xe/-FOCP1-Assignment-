#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int count = 0;

    printf("Enter the number of elements of students: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        int num = arr[i];
        int prime_no_ = 1;

        if (num <= 1)
        {
            prime_no_ = 0;
        }
        else
        {
            for (j = 2; j <= num / 2; j++)
            {
                if (num % j == 0)
                {
                    prime_no_ = 0;
                    break;
                }
            }
        }

        if (prime_no_)
        {
            count++;
        }
    }

    printf("\nThe Total prime numbers in the array are = %d\n", count);

    return 0;
}
