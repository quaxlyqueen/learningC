/*
 * malloc() and free() are commonly used to allocate memory for structs.
 *
 * Accessing a struct's member variables by dereferencing a pointer has been shortened to a member access operator:
 *          myPointer->memberVar
 *          eg. myPointer->name = "Josh";
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct myItem_struct {
    int num1;
    int num2;
} myItem;

void myItem_PrintNums(myItem* itemPtr) {
    if(itemPtr == NULL) return;

    printf("num1: %d\n", itemPtr->num1);
    printf("num2: %d\n", itemPtr->num2);
}

int main() {
    myItem* myItemPtr1 = NULL;

    myItemPtr1 = (myItem*)malloc(sizeof(myItem));

    myItemPtr1->num1 = 5;
    myItemPtr1->num2 = 10;
    //(*myItemPt1).num2 = 10;

    myItem_PrintNums(myItemPtr1);

    return 0;
}
