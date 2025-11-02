#include <stdio.h>

int main()
{
    int marks[100];
    int n, i;
    int count;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("\nThe Students who have scored 99 are:\n");

    for (i = 0; i < n; i++)
    {
        if (marks[i] == 99)
        {
            printf("The Student %d\n", i + 1, i);
            count++;
        }
    }

    printf("\nThe Total students who have scored 99 = %d\n", count);

    if (count == 0)
    {
        printf("No student have scored 99.\n");
    }

    return 0;
}
