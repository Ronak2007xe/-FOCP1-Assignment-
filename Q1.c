#include <stdio.h>

int main()
{
    int number, original_Number, remainder;
    int result;

    printf("Enter the number: ");
    scanf("%d", &number);

    original_Number = number;

    while (original_Number != 0)
    {
        remainder = original_Number % 10;
        result = result + (remainder * remainder * remainder);
        original_Number = original_Number / 10;
    }

    if (result == number)
        printf("%d is an Armstrong number\n", number);
    else
        printf("%d is not an Armstrong number\n", number);

    return 0;
}
