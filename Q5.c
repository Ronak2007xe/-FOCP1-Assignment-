#include <stdio.h>

int main() {
    float x, y;

    printf("Enter the x- axis coordinate: ");
    scanf("%f", &x);
    printf("Enter the y- axis coordinate: ");
    scanf("%f", &y);

  
    if (x == 0 && y == 0) {
        printf("The point is at the Origin.\n", x, y);
    }
    else if (x == 0) {
        printf("The point lies on the Y-axis.\n", x, y);
    }
    else if (y == 0) {
        printf("The point lies on the X-axis.\n", x, y);
    }
    else if (x > 0 && y > 0) {
        printf("The point lies in Quadrant I.\n", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("The point lies in Quadrant II.\n", x, y);
    }
    else if (x < 0 && y < 0) {
        printf("The point lies in Quadrant III.\n", x, y);
    }
    else if (x > 0 && y < 0) {
        printf("The point lies in Quadrant IV.\n", x, y);
    }

    return 0;
}