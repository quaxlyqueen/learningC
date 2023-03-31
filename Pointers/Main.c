#include <stdio.h>
#include <stdlib.h>

/**
 * type*: a pointer for a type variable. eg. int* myPointer is a pointer for an int variable.
 * malloc(): allocates memory for the sizeof() a type returns void*. eg. malloc(sizeof(int)). 
 * free(): clears memory at a given memory address. eg. free(myPointer).
 */
int main() {

    int* var = (int*)malloc(sizeof(int));
    printf("%s: %p\n", "memory address", var);
    return 0;
}
