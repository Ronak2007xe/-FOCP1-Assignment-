#include <stdio.h>

int main() {
    int choice, decimal, remainder, i;
    long bin;
    int bits[32];

    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter binary: ");
        scanf("%lld", &bin);
        decimal = 0; i = 1;
        while (bin != 0) {
            remainder = bin % 10;
            decimal += remainder * i;
            i *= 2;
            bin /= 10;
        }
        printf("Decimal = %d\n", decimal);
    }
    else if (choice == 2) {
        printf("Enter decimal: ");
        scanf("%d", &decimal);
        i = 0;
        while (decimal > 0) {
            bits[i] = decimal % 2;
            decimal /= 2;
            i++;
        }
        printf("Binary = ");
        for (int j = i - 1; j >= 0; j--)
            printf("%d", bits[j]);
        printf("\n");
    }
    else
        printf("Invalid choice!\n");

    return 0;
}
