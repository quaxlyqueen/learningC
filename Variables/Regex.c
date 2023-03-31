#include <stdio.h>

/*
 *
 * %c   = character
 * %s   = string (array of characters)
 * %f   = float
 * %lf  = double
 * %d   = integer
 *
 * %.X  = decimal precision of X digits
 * %X   = minimum width of X spaces
 * %-   = left-align
 *
 */
int main() {

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%8.2f\n", item1);
    printf("Item 2: $%8.2f\n", item2);
    printf("Item 3: $%8.2f\n", item3);

    return 0;
}
