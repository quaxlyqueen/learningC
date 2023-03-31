#include <stdio.h>

int main() {

    int x = 123;
    int y;
    y = 321;

    int age = 21;
    float gpa = 2.65;
    char grade = 'C';
    char name[] = "Josh";

    printf("Hello %s\n", name);
    printf("You are %d years old.\n", age);
    printf("Your grade is %c.\n", grade);
    printf("Your GPA is %.2f.\n", gpa);

    return 0;
}
