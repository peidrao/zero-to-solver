#include <stdio.h>

int main() {
    float radius = 0.0;

    printf("Press the radius of the circle: ");
    scanf("%f", &radius);


    printf("\nThe area is %.4f\n", 3.14 * (radius * radius));
    return 0;
}