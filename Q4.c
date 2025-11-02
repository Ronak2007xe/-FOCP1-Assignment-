#include <stdio.h>

// Using a temporary variable
void swap_temp(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping : a = %d, b = %d\n", a, b);
}

// Using arithmetic
void swap_arithmetic(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping : a = %d, b = %d\n", a, b);
}

// Using bitwise XOR
void swap_xor(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping : a = %d, b = %d\n", a, b);
}

// Using pointers
void swap_pointers(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping : a = %d, b = %d\n", *a, *b);
}

int main()
{
    int a, b;

    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d\n\n", a, b);

    swap_temp(a, b);

    swap_arithmetic(a, b);

    swap_xor(a, b);

    swap_pointers(&a, &b);
    printf("After swapping : a = %d, b = %d\n", a, b);

    return 0;
}
