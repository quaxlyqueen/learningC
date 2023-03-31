#include <math.h>
#include <stdio.h>

/*
 * Calculates the hypotenuse and area of a triangle.
 */
int main() {
    double sideA;
    double sideB;
    double sideC;
    double area;

    printf("Enter side A: ");
    scanf("%lf", &sideA);

    printf("\nEnter side B: ");
    scanf("%lf", &sideB);

    sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));
    area = (sideA * sideB) / 2;

    printf("The hypotenuse is %lf.", sideC);
    printf("The area is %lf.", &area);

    return 0;
}
