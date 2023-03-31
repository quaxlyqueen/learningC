#include <stdio.h>

int main() {

// IF STATEMENTS
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("You are now signed up!");
    } else if(age < 0) {
        printf("You haven't been born yet.");
    } else {
        printf("You are too young to sign up.");
    }

// SWITCH STATEMENTS
    char grade;
    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("You failed.......\n");
        default:
            printf("Please enter a valid grade.");
    }

    return 0;
}
