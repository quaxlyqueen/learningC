#include <stdio.h>
#include <math.h>

///*
//Original implementation was creating a warning and an error. Call was showing a warning of an undeclared function calc. Function was stating that there were conflicting types for calc.

double calc(double r) {
    const double PI = 3.14159;
    return (double)(2 * PI * r);
}
//*/

/*
 * Calculates the circumference and area of a given circle.
 */
int main() {
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;
    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    //circumference = 2 * PI * radius; 
    circumference = calc(radius);
    area = PI * pow(radius, 2);
    printf("\nThe circumference is %lf", circumference);
    printf("\nThe area is %lf", area);

    return 0;
}
