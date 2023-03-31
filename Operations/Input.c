#include <stdio.h>
#include <string.h>

/*
 *
 * Accepting user input is done via the scanf function. scanf has two parameters:
 *      parameter 1: variable type in %X notation.
 *      parameter 2: variable address, denoted by an '&' preceding the variable name.
 *
 * Alternatively, user input can be done with the fgets function, which allows for whitespace. There are three parameters:
 *      parameter 1: variable reference
 *      parameter 2: input size
 *      parameter 3: "stdin", for Standard Input
 * fgets() includes the next line character from the user input. This can be removed by including <string.h> in the C file.
 *      eg. #include <string.h>
 *
 */
int main() {

    // Arrays cannot be resized. This creates a character array that can hold 25 bytes.
    // Going over the byte limit results in a "Buffer overflow" error.
    char name[25]; 
    int age;

    printf("What is your name? ");
    //scanf("%s", &name);
    fgets(name, 25, stdin);
    
    // Removing new line character from the name string.
    name[strlen(name) - 1] = '\0';

    printf("How old are you? ");
    scanf("%d", &age);

    printf("%s is %d years old", name, age);

    return 0;
}
