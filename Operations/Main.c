#include <stdio.h>

/*
 *
 * ARITHMETIC OPERATIONS
 *
 * +    (addition)
 * -    (subtraction)
 * *    (multiplication)
 * /    (division)
 * %    (modulus)
 * ++   (increment)
 * --   (decrement)
 *
 * AUGMENTED ASSIGNMENT OPERATORS
 * +=X  (increment by X)
 * -=X  (decrement by X)
 * *=X  (multiply by X)
 * /=X  (divide by X)
 * %=X  (modulo by X)
 */
int main() {

    int x = 5;
    int y = 2;

    int z = x + y;
    //int z = x - y;
    //int z = x * y;
    //int z = x / y;
    //int z = x % y;
    
    //Casting the divisor to float results in an error. This requires the output variable to likewise be a float.
    //float z = x / (float) y;

    //x++;
    //y--;

    printf("%d", z);

    return 0;
}
