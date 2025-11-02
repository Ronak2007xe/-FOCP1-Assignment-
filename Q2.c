#include <stdio.h>

int main()
{
    int number1, number2, hcf;

    printf("Enter the two numbers: ");
    scanf("%d", &number1);
    scanf("%d", &number2);

    int minimum = (number1 < number2) ? number1 : number2;

    for (int i = 1; i <= minimum; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", number1, number2, hcf);

    return 0;
}
