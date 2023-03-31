#include <stdio.h>
#include <ctype.h>

int main() {
    char unit;
    float temp;

    printf("\nIs the temperature in Fahrenheit or Celsius? : ");
    scanf("%c", &unit);
    printf("\nWhat is the current temperature? : ");
    scanf("%f", &temp);

    unit = toupper(unit);

    if(unit == 'C') {
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in Fahrenheit is: %.2f", temp);
    } else if(unit == 'F') {
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature in Celsius is: %.2f", temp);
    } else {
        printf("Please enter a valid degree of measuring temperature.");
    }

    return 0;
}
