#include <stdio.h>

int main() {
    int arr[100];
    int n, i, postion, value;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nThe Array before insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter the no. of element to insert: ");
    scanf("%d", &value);

    printf("Enter the postion to insert (1 for front, %d for end, or any middle postionition): ", n + 1);
    scanf("%d", &postion);

   
    for(i = n; i >= postion; i--) {
        arr[i] = arr[i - 1];
    }

    arr[postion - 1] = value;
    n++; 

    printf("\nThe Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
